/*
 * Copyright 1993, 1995 Christopher Seiwald.
 *
 * This file is part of Jam - see jam.c for Copyright information.
 */

# include "jam.h"
# include "lists.h"
# include "parse.h"
# include "compile.h"
# include "rules.h"
# include "variable.h"
# include "regexp.h"
# include "headers.h"
# include "newstr.h"

/*
 * headers.c - handle #includes in source files
 *
 * Using regular expressions provided as the variable $(HDRSCAN), 
 * headers() searches a file for #include files and phonies up a
 * rule invocation:
 * 
 *	$(HDRRULE) <target> : <include files> ;
 *
 * External routines:
 *    headers() - scan a target for include files and call HDRRULE
 *
 * Internal routines:
 *    headers1() - using regexp, scan a file and build include LIST
 *
 * 04/13/94 (seiwald) - added shorthand L0 for null list pointer
 */

static LIST *headers1();

/*
 * headers() - scan a target for include files and call HDRRULE
 */

# define MAXINC 10

void
headers( t )
TARGET *t;
{
	LIST	*hdrscan;
	LIST	*hdrrule;
	LIST	*headlist = 0;
	PARSE	p[1];
	regexp	*re[ MAXINC ];
	int	rec = 0;
	char	*fname = t->boundname ? t->boundname : t->name;

	if( !( hdrscan = var_get( "HDRSCAN" ) ) || 
	    !( hdrrule = var_get( "HDRRULE" ) ) )
	        return;

	if( DEBUG_HEADER )
	    printf( "header scan %s\n", t->name );

	/* Compile all regular expressions in HDRSCAN */

	while( rec < MAXINC && hdrscan )
	{
	    re[rec++] = regcomp( hdrscan->string );
	    hdrscan = list_next( hdrscan );
	}

	/* Doctor up call to HDRRULE rule */
	/* Call headers1() to get LIST of included files. */

	p->llist = list_new( L0, t->name );
	p->rlist = headers1( headlist, fname, rec, re );
	p->string = hdrrule->string;

	if( p->rlist )
	    compile_rule( p, L0, L0 );

	/* Clean up */

	list_free( p->llist );
	list_free( p->rlist );

	while( rec )
	    free( (char *)re[--rec] );
}

/*
 * headers1() - using regexp, scan a file and build include LIST
 */

static LIST *
headers1( l, file, rec, re )
LIST	*l;
char	*file;
int	rec;
regexp	*re[];
{
    FILE	*f;
    char	buf[ 1024 ];
    int		i;

    if( !( f = fopen( file, "r" ) ) )
	return l;

    while( fgets( buf, sizeof( buf ), f ) )
    {
	for( i = 0; i < rec; i++ )
	    if( regexec( re[i], buf ) && re[i]->startp[1] )
	{
	    re[i]->endp[1][0] = '\0';

	    if( DEBUG_HEADER )
		printf( "header found: %s\n", re[i]->startp[1] );

	    l = list_new( l, newstr( re[i]->startp[1] ) );
	}
    }

    fclose( f );

    return l;
}

void
regerror( s )
char *s;
{
	printf( "re error %s\n", s );
}
