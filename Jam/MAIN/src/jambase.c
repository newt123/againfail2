/* Generated by mkjambase from Jambase */
char *jambase[] = {
/* Jambase */
"OSFULL = $(OS)$(OSPLAT)$(OSVER) $(OS)$(OSPLAT) $(OS)$(OSVER) $(OS) ;\n",
"switch $(OS)\n",
"{\n",
"case AIX :	LINKLIBS default = -lbsd ;\n",
"case DGUX :	RANLIB default = \"\" ; RELOCATE = true ;\n",
"case HPUX :	RANLIB default = \"\" ;\n",
"INSTALL default = \"\" ;\n",
"case IRIX :	RANLIB default = \"\" ;\n",
"INSTALL default = \"\" ;\n",
"case MVS :	RANLIB default = \"\" ; RELOCATE = true ;\n",
"case NCR :	RANLIB default = \"\" ;\n",
"INSTALL default = \"\" ;\n",
"case PTX :	RANLIB default = \"\" ;\n",
"case QNX :	INSTALL default = \"\" ;\n",
"case SCO :	RANLIB default = \"\" ;\n",
"INSTALL default = \"\" ; RELOCATE = true ;\n",
"case SINIX :	RANLIB default = \"\" ; RELOCATE = true ;\n",
"case SOLARIS :	RANLIB default = \"\" ;\n",
"INSTALL default = \"install\" ;\n",
"AR default = \"/usr/ccs/bin/ar ru\" ;\n",
"case UNIXWARE :	RANLIB default = \"\" ; RELOCATE = true ;\n",
"}\n",
"if $(UNIX)\n",
"{\n",
"if $(OS) = QNX \n",
"{\n",
"AR		default = wlib ;\n",
"CC		default = cc ;\n",
"CCFLAGS		default = -Q ;	# quiet\n",
"C++		default = $(CC) ;\n",
"C++FLAGS	default = -Q ;	# quiet\n",
"LINK		default = $(CC) ;\n",
"LINKFLAGS	default = -Q ;	# quiet\n",
"NOARSCAN	default = true ;\n",
"RANLIB		default = \"\" ;\n",
"}\n",
"else if $(OS) = BEOS \n",
"{\n",
"AR		default = mwld -xml -o ;\n",
"BINDIR		default = /boot/bin ;\n",
"CC		default = mwcc ;\n",
"CCFLAGS		default = -nosyspath ;\n",
"C++		default = $(CC) ;\n",
"C++FLAGS	default = -nosyspath ;\n",
"FORTRAN		default = \"\" ;\n",
"LIBDIR		default = /boot/develop/libraries ;\n",
"LINK		default = $(CC) ;\n",
"LEX		default = \"\" ;\n",
"MANDIR		default = /boot/documentation/\"Shell Tools\"/HTML ;\n",
"NOARSCAN	default = true ;\n",
"RANLIB		default = \"\" ;	\n",
"STDHDRS		default = /boot/develop/headers/posix ;\n",
"YACC		default = \"\" ;\n",
"YACCFLAGS	default = \"\" ;\n",
"YACCFILES	default = \"\" ;\n",
"}\n",
"AR		default = ar ru ;\n",
"AS		default = as ;\n",
"AWK		default = awk ;\n",
"ASFLAGS		default = ;\n",
"BINDIR		default = /usr/local/bin ;\n",
"C++		default = gcc ;\n",
"C++FLAGS	default = ;\n",
"CC		default = cc ;\n",
"CCFLAGS		default = ;\n",
"CP		default = cp ;\n",
"CHMOD		default = chmod ;\n",
"DOT		default	= . ;\n",
"DOTDOT		default	= .. ;\n",
"EXEMODE		default = 711 ;\n",
"FILEMODE	default = 644 ;\n",
"FORTRAN		default = f77 ;\n",
"FORTRANFLAGS	default = ;\n",
"HDRS		default = ;\n",
"INSTALL		default = install -c ;\n",
"LEX		default = lex ;\n",
"LIBDIR		default = /usr/local/lib ;\n",
"LINK		default = $(CC) ;\n",
"LINKFLAGS	default = $(CCFLAGS) ;\n",
"LINKLIBS	default = ;\n",
"LN		default = ln ;\n",
"MANDIR		default = /usr/local/man ;\n",
"MKDIR		default = mkdir ;\n",
"MV		default = mv -f ;\n",
"OPTIM		default = -O ;\n",
"RANLIB		default = ranlib ;\n",
"RCP		default = rcp ;\n",
"RSH		default = rsh ;\n",
"RM		default = rm -f ;\n",
"SED		default = sed ;\n",
"SHELLHEADER	default = \"#!/bin/sh\" ;\n",
"SHELLMODE	default = 755 ;\n",
"SLASH		default = / ;\n",
"STDHDRS		default = /usr/include ;\n",
"SUFLIB		default = .a ;\n",
"SUFOBJ		default = .o ;\n",
"SUFEXE		default = \"\" ;\n",
"UNDEFFLAG	default = \"-u _\" ;\n",
"YACC		default = yacc ;\n",
"YACCFLAGS	default = -d ;\n",
"YACCFILES	default = y.tab ;\n",
"}\n",
"else if $(NT)\n",
"{\n",
"AWK		default = awk ;\n",
"CHMOD		default = chmod ;\n",
"CP		default = copy ;\n",
"DOT		default	= . ;\n",
"DOTDOT		default	= .. ;\n",
"EXEMODE		default = 711 ;\n",
"FILEMODE	default = 644 ;\n",
"MKDIR		default = mkdir ;\n",
"MV		default = mv -f ;\n",
"OS			= NT ;		# replace Windows_NT\n",
"RCP		default = rcp ;\n",
"RSH		default = rsh ;\n",
"RM		default = del /f/q ;\n",
"SED		default = sed ;\n",
"SLASH		default = \\\\ ;\n",
"SUFLIB		default = .lib ;\n",
"SUFOBJ		default = .obj ;\n",
"SUFEXE		default = .exe ;\n",
"if $(BCCROOT)\n",
"{\n",
"ECHO \"Compiler is Borland C++\" ;\n",
"AR		default = tlib ;\n",
"ARFLAGS		default = /C /P64 ;\n",
"CC		default = bcc32 ;\n",
"CCFLAGS		default = -v -w-  ;\n",
"C++		default = bcc32 ;\n",
"C++FLAGS	default = -v -w- ;\n",
"LINK		default = $(CC) ;\n",
"LINKFLAGS	default = $(CCFLAGS) ;\n",
"STDLIBPATH	default = $(BCCROOT)\\\\lib ;\n",
"STDHDRS		default = $(BCCROOT)\\\\include ;\n",
"NOARSCAN	default = true ;\n",
"}\n",
"else if $(MSVC)\n",
"{\n",
"ECHO \"Compiler is Microsoft Visual C++ 16 bit\" ;\n",
"AR		default = lib /nologo ;\n",
"CC		default = cl /nologo ;\n",
"CCFLAGS		default = /D \\\"WIN\\\" ;\n",
"C++		default = $(CC) ;\n",
"C++FLAGS	default = $(CCFLAGS) ;\n",
"LINK		default = $(CC) ;\n",
"LINKFLAGS	default = $(CCFLAGS) ;\n",
"LINKLIBS	default = \n",
"$(MSVC)\\\\lib\\\\mlibce.lib\n",
"$(MSVC)\\\\lib\\\\oldnames.lib\n",
";\n",
"LINKLIBS	default = ;\n",
"NOARSCAN	default = true ;\n",
"OPTIM		default =  ;\n",
"STDHDRS		default = $(MSVC)\\\\include ;\n",
"UNDEFFLAG	default = \"/u _\" ;\n",
"}\n",
"else if $(MSVCNT)\n",
"{\n",
"ECHO \"Compiler is Microsoft Visual C++\" ;\n",
"AR		default = lib ;\n",
"AS		default = masm386 ;\n",
"CC		default = cl /nologo ;\n",
"CCFLAGS		default = ;\n",
"C++		default = $(CC) ;\n",
"C++FLAGS	default = $(CCFLAGS) ;\n",
"LINK		default = link ;\n",
"LINKFLAGS	default = ;\n",
"LINKLIBS	default = $(MSVCNT)\\\\lib\\\\advapi32.lib\n",
"$(MSVCNT)\\\\lib\\\\libc.lib\n",
"$(MSVCNT)\\\\lib\\\\oldnames.lib\n",
"$(MSVCNT)\\\\lib\\\\kernel32.lib ;\n",
"OPTIM		default =  ;\n",
"STDHDRS		default = $(MSVCNT)\\\\include ;\n",
"UNDEFFLAG	default = \"/u _\" ;\n",
"}\n",
"else\n",
"{\n",
"EXIT On NT, set BCCROOT, MSVCNT, or MSVC to the root of the\n",
"Borland or Microsoft directories. ;\n",
"}\n",
"}\n",
"else if $(OS2)\n",
"{\n",
"WATCOM		default = $(watcom) ;\n",
"CP		default = copy ;\n",
"DOT		default	= . ;\n",
"DOTDOT		default	= .. ;\n",
"MKDIR		default = mkdir ;\n",
"MV		default = move ;\n",
"RM		default = del /f ;\n",
"SED		default = sed ;\n",
"SLASH		default = \\\\ ;\n",
"SUFLIB		default = .lib ;\n",
"SUFOBJ		default = .obj ;\n",
"SUFEXE		default = .exe ;\n",
"if ! $(WATCOM)\n",
"{\n",
"EXIT On OS2, set WATCOM to the root of the Watcom directory. ;\n",
"}\n",
"ECHO \"OS2 compiler is Watcom.\" ;\n",
"AR		default = wlib ;\n",
"CC		default = wcc386 ;\n",
"CCFLAGS		default = /zq /DOS2 /I$(WATCOM)\\\\h ; # zq=quiet\n",
"C++		default = wpp386 ;\n",
"C++FLAGS	default = $(CCFLAGS) ;\n",
"LINK		default = wcl386 ;\n",
"LINKFLAGS	default = /zq ; # zq=quiet\n",
"LINKLIBS	default = ;\n",
"NOARSCAN	default = true ;\n",
"OPTIM		default = ;\n",
"STDHDRS		default = $(WATCOM)\\\\h ;\n",
"UNDEFFLAG	default = \"/u _\" ;\n",
"}\n",
"else if $(VMS)\n",
"{\n",
"AS		default = as ;\n",
"CC		default = cc ;\n",
"CCFLAGS		default = ;\n",
"CP		default = copy/replace ;\n",
"CRELIB		default = true ;\n",
"DOT		default	= [] ;\n",
"DOTDOT		default	= [-] ;\n",
"EXEMODE		default = (w:e) ;\n",
"FILEMODE	default = (w:r) ;\n",
"HDRS		default = ;\n",
"LEX		default = lex ;\n",
"LINK		default = link ;\n",
"LINKFLAGS	default = ;\n",
"LINKLIBS	default = ;\n",
"MV		default = rename ;\n",
"OPTIM		default = ;\n",
"RM		default = delete ;\n",
"RUNVMS		default = mcr ;\n",
"SED		default = sed ;\n",
"SHELLMODE	default = (w:er) ;\n",
"SLASH		default = . ;\n",
"STDHDRS		default = decc$library_include ;\n",
"SUFLIB		default = .olb ;\n",
"SUFOBJ		default = .obj ;\n",
"SUFEXE		default = .exe ;\n",
"switch $(OS) \n",
"{\n",
"case OPENVMS : CCFLAGS default = /stand=vaxc ;\n",
"case VMS     : LINKLIBS default = sys$library:vaxcrtl.olb/lib ;\n",
"}\n",
"}\n",
"else if $(MAC)\n",
"{\n",
"CWGUSI		default = \"Macintosh HD:Perforce:src:mac:CWGUSI\" ;\n",
"CWGUSIHDR	default = $(CWGUSI):include ;\n",
"CWGUSILIB	default = $(CWGUSI):Lib ;\n",
"CWMAC		default = \"Macintosh HD:CW10 Gold:Metrowerks CodeWarrior:MacOS Support\" ;\n",
"CWMACLIB	default = $(CWMAC):Libraries ;\n",
"CWMACHDR	default = $(CWMAC):Headers ;\n",
"CC		default = mwcppc ;\n",
"CCFLAGS		default = -w off ;\n",
"CP		default = copy ;\n",
"DOT		default = \":\" ;\n",
"DOTDOT		default = \"::\" ;\n",
"HDRS		default = $(CWGUSIHDR) $(CWMACHDR):\"ANSI Headers\" $(CWMACHDR):\"Universal Headers\" ;\n",
"LINK		default = mwlinkppc ;\n",
"LINKFLAGS	default = -mpwtool -warn ;\n",
"LINKLIBS	default = \"$(CWGUSILIB):GUSIMPW.Lib.PPC\" \n",
"\"$(CWGUSILIB):GUSI.Lib.PPC\" \n",
"\"$(CWMACLIB):MacOS Common:Interfacelib\" \n",
"\"$(CWMACLIB):MacOS Common:PLStringFuncs Glue:PLStringFuncsPPC.lib\" \n",
"\"$(CWMACLIB):Runtime:Runtime PPC:MWMPWCRuntime.lib\" \n",
"\"$(CWMACLIB):ANSI PPC:MPW ANSI.C.PPC.Lib\" \n",
"\"$(CWMACLIB):MacOS PPC:PPCToolLibs.o\" \n",
"\"$(CWMACLIB):MacOS PPC:Mathlib\" ;\n",
"MKDIR		default = newfolder ;\n",
"MV		default = rename ;\n",
"NOARSCAN	default = true ;\n",
"OPTIM		default = ;\n",
"RM		default = delete ;\n",
"SLASH		default = \":\" ;\n",
"STDHDRS		default = ; #$(MWCIncludes) ;\n",
"SUFLIB		default = .lib ;\n",
"SUFOBJ		default = .o ;\n",
"SUFEXE		default = \"\" ;\n",
"NOARSCAN	default = true ;\n",
"}\n",
"if $(NT) || $(OS2)\n",
"{\n",
"MSLIB 		default = lib ;\n",
"MSLINK		default = link ;\n",
"MSIMPLIB 	default = implib ;\n",
"MSRC		default = rc ;\n",
"}\n",
"JAMFILE		default = Jamfile ;\n",
"JAMRULES	default = Jamrules ;\n",
"HDRPATTERN = \"^#[	 ]*include[	 ]*[<\\\"](.*)[\\\">].*$\" ;\n",
"DEPENDS all : shell files lib exe obj ;\n",
"DEPENDS all shell files lib exe obj : first ;\n",
"NOTFILE all first shell files lib exe obj dirs clean uninstall ;\n",
"ALWAYS clean uninstall ;\n",
"rule As\n",
"{\n",
"DEPENDS $(<) : $(>) ;\n",
"ASFLAGS on $(<) += $(ASFLAGS) $(SUBDIRASFLAGS) ;\n",
"}\n",
"rule Bulk\n",
"{\n",
"local i ;\n",
"for i in $(>)\n",
"{\n",
"File $(i:D=$(<)) : $(i) ;\n",
"}\n",
"}\n",
"rule Cc\n",
"{\n",
"local _h ;\n",
"DEPENDS $(<) : $(>) ;\n",
"CCFLAGS on $(<) += $(CCFLAGS) $(SUBDIRCCFLAGS) ;\n",
"if $(RELOCATE)\n",
"{\n",
"CcMv $(<) : $(>) ;\n",
"}\n",
"_h = $(SEARCH_SOURCE) $(HDRS) $(SUBDIRHDRS) ;\n",
"if $(VMS) && $(_h)\n",
"{\n",
"SLASHINC on $(<) = \"/inc=(\" $(_h[1]) ,$(_h[2-]) \")\" ;\n",
"}\n",
"else if $(MAC) && $(_h)\n",
"{\n",
"local _i _j ;\n",
"_j = $(_h[1]) ;\n",
"for _i in $(_h[2-])\n",
"{\n",
"_j = $(_j),$(_i) ;\n",
"}\n",
"MACINC on $(<) = \\\"$(_j)\\\" ;\n",
"}\n",
"}\n",
"rule C++\n",
"{\n",
"local _h ;\n",
"DEPENDS $(<) : $(>) ;\n",
"C++FLAGS on $(<) += $(C++FLAGS) $(SUBDIRC++FLAGS) ;\n",
"if $(RELOCATE)\n",
"{\n",
"CcMv $(<) : $(>) ;\n",
"}\n",
"_h = $(SEARCH_SOURCE) $(HDRS) $(SUBDIRHDRS) ;\n",
"if $(VMS) && $(_h)\n",
"{\n",
"SLASHINC on $(<) = \"/inc=(\" $(_h[1]) ,$(_h[2-]) \")\" ;\n",
"}\n",
"else if $(MAC) && $(_h)\n",
"{\n",
"local _i _j ;\n",
"_j = $(_h[1]) ;\n",
"for _i in $(_h[2-])\n",
"{\n",
"_j = $(_j),$(_i) ;\n",
"}\n",
"MACINC on $(<) = \\\"$(_j)\\\" ;\n",
"}\n",
"}\n",
"rule File\n",
"{\n",
"DEPENDS files : $(<) ;\n",
"DEPENDS $(<) : $(>) ;\n",
"SEARCH on $(>) = $(SEARCH_SOURCE) ;\n",
"MODE on $(<) = $(FILEMODE) ;\n",
"Chmod $(<) ;\n",
"}\n",
"rule Fortran\n",
"{\n",
"DEPENDS $(<) : $(>) ;\n",
"}\n",
"rule GenFile \n",
"{\n",
"local s ;\n",
"makeGristedName s : $(<) ;\n",
"Depends $(s) : $(>[1]:S=$(SUFEXE)) $(>[2-]) ;\n",
"GenFile1 $(s) : $(>[1]:S=$(SUFEXE)) $(>[2-]) ;\n",
"Clean clean : $(s) ;\n",
"}\n",
"rule GenFile1\n",
"{\n",
"MakeLocate $(<) : $(LOCATE_SOURCE) ;\n",
"SEARCH on $(>) = $(SEARCH_SOURCE) ;\n",
"}\n",
"rule HardLink\n",
"{\n",
"DEPENDS files : $(<) ;\n",
"DEPENDS $(<) : $(>) ;\n",
"SEARCH on $(>) = $(SEARCH_SOURCE) ;\n",
"}\n",
"rule HdrRule\n",
"{\n",
"local s ;\n",
"if $(HDRGRIST) \n",
"{ \n",
"s = $(>:G=$(HDRGRIST)) ;\n",
"} else { \n",
"s = $(>) ; \n",
"}\n",
"INCLUDES $(<) : $(s) ;\n",
"SEARCH on $(s) = $(HDRSEARCH) ;\n",
"NOCARE $(s) ;\n",
"HDRSEARCH on $(s) = $(HDRSEARCH) ;\n",
"HDRSCAN on $(s) = $(HDRSCAN) ;\n",
"HDRRULE on $(s) = $(HDRRULE) ;\n",
"HDRGRIST on $(s) = $(HDRGRIST) ;\n",
"}\n",
"rule InstallInto\n",
"{\n",
"local i t ;\n",
"t = $(>:G=installed) ;\n",
"DEPENDS install : $(t) ;\n",
"DEPENDS $(t) : $(>) ;\n",
"SEARCH on $(>) = $(SEARCH_SOURCE) ;\n",
"MakeLocate $(t) : $(<) ;\n",
"Clean uninstall : $(t) ;\n",
"for i in $(>)\n",
"{\n",
"Install $(i:G=installed) : $(i) ;\n",
"}\n",
"if ! $(INSTALL)\n",
"{\n",
"Chmod $(t) ;\n",
"if $(OWNER) { Chown $(t) ; OWNER on $(t) = $(OWNER) ; }\n",
"if $(GROUP) { Chgrp $(t) ; GROUP on $(t) = $(GROUP) ; }\n",
"}\n",
"}\n",
"rule InstallBin\n",
"{\n",
"InstallInto $(<) : $(>) ;\n",
"MODE on $(>:G=installed) = $(EXEMODE) ;\n",
"}\n",
"rule InstallFile\n",
"{\n",
"InstallInto $(<) : $(>) ;\n",
"MODE on $(>:G=installed) = $(FILEMODE) ;\n",
"}\n",
"rule InstallLib\n",
"{\n",
"InstallInto $(<) : $(>) ;\n",
"MODE on $(>:G=installed) = $(FILEMODE) ;\n",
"}\n",
"rule InstallMan\n",
"{\n",
"local i s d ;\n",
"for i in $(>)\n",
"{\n",
"switch $(i:S)\n",
"{\n",
"case .1 : s = 1 ; case .2 : s = 2 ; case .3 : s = 3 ;\n",
"case .4 : s = 4 ; case .5 : s = 5 ; case .6 : s = 6 ;\n",
"case .7 : s = 7 ; case .8 : s = 8 ; case .l : s = l ;\n",
"case .n : s = n ; case .man : s = 1 ;\n",
"}\n",
"d = man$(s) ;\n",
"InstallInto $(d:R=$(<)) : $(i) ;\n",
"}\n",
"MODE on $(>:G=installed) = $(FILEMODE) ;\n",
"}\n",
"rule InstallShell\n",
"{\n",
"InstallInto $(<) : $(>) ;\n",
"MODE on $(>:G=installed) = $(SHELLMODE) ;\n",
"}\n",
"rule Lex\n",
"{\n",
"DEPENDS $(<) : $(>) ;\n",
"MakeLocate $(<) : $(LOCATE_SOURCE) ;\n",
"Clean clean : $(<) ;\n",
"}\n",
"rule Library\n",
"{\n",
"LibraryFromObjects $(<) : $(>:S=$(SUFOBJ)) ;\n",
"Objects $(>) ;\n",
"}\n",
"rule LibraryFromObjects\n",
"{\n",
"local i l s ;\n",
"makeGristedName s : $(>) ;\n",
"l = $(<:S=$(SUFLIB)) ;\n",
"if $(KEEPOBJS)\n",
"{\n",
"DEPENDS obj : $(s) ;\n",
"}\n",
"else\n",
"{\n",
"DEPENDS lib : $(l) ;\n",
"}\n",
"if ! $(l:D)\n",
"{\n",
"MakeLocate $(l) $(l)($(s:BS)) : $(LOCATE_TARGET) ;\n",
"}\n",
"if $(NOARSCAN) \n",
"{ \n",
"DEPENDS $(l) : $(s) ;\n",
"}\n",
"else\n",
"{\n",
"DEPENDS $(l) : $(l)($(s:BS)) ;\n",
"for i in $(s)\n",
"{\n",
"DEPENDS $(l)($(i:BS)) : $(i) ;\n",
"}\n",
"}\n",
"Clean clean : $(l) ;\n",
"if $(CRELIB) { CreLib $(l) : $(s[1]) ; }\n",
"Archive $(l) : $(s) ;\n",
"if $(RANLIB) { Ranlib $(l) ; }\n",
"if ! ( $(NOARSCAN) || $(KEEPOBJS) ) { RmTemps $(l) : $(s) ; }\n",
"}\n",
"rule Link\n",
"{\n",
"MODE on $(<) = $(EXEMODE) ;\n",
"Chmod $(<) ;\n",
"}\n",
"rule LinkLibraries\n",
"{\n",
"local t ;\n",
"if $(<:S)\n",
"{\n",
"t = $(<) ;\n",
"} else {\n",
"t = $(<:S=$(SUFEXE)) ;\n",
"}\n",
"DEPENDS $(t) : $(>:S=$(SUFLIB)) ;\n",
"NEEDLIBS on $(t) += $(>:S=$(SUFLIB)) ;\n",
"}\n",
"rule Main\n",
"{\n",
"MainFromObjects $(<) : $(>:S=$(SUFOBJ)) ;\n",
"Objects $(>) ;\n",
"}\n",
"rule MainFromObjects\n",
"{\n",
"local s t ;\n",
"makeGristedName s : $(>) ;\n",
"makeSuffixed t $(SUFEXE) : $(<) ;\n",
"if $(t) != $(<)\n",
"{\n",
"DEPENDS $(<) : $(t) ;\n",
"NOTFILE $(<) ;\n",
"}\n",
"DEPENDS exe : $(t) ;\n",
"DEPENDS $(t) : $(s) ;\n",
"MakeLocate $(t) : $(LOCATE_TARGET) ;\n",
"Clean clean : $(t) ;\n",
"Link $(t) : $(s) ;\n",
"}\n",
"rule MakeLocate\n",
"{\n",
"if $(>)\n",
"{\n",
"LOCATE on $(<) = $(>) ;\n",
"Depends $(<) : $(>[1]) ;\n",
"MkDir $(>[1]) ;\n",
"}\n",
"}\n",
"rule MkDir\n",
"{\n",
"if $(<) != $(DOT) && ! $($(<)-mkdir) \n",
"{\n",
"local s ;\n",
"$(<)-mkdir = true ;\n",
"MkDir1 $(<) ;\n",
"NOUPDATE $(<) ;\n",
"Depends dirs : $(<) ;\n",
"s = $(<:P) ;\n",
"if $(NT)\n",
"{\n",
"switch $(s)\n",
"{\n",
"case *:   : s = ;\n",
"case *:\\\\ : s = ;\n",
"}\n",
"}\n",
"if $(s) && $(s) != $(<)\n",
"{\n",
"Depends $(<) : $(s) ;\n",
"MkDir $(s) ;\n",
"}\n",
"else if $(s)\n",
"{\n",
"NOTFILE $(s) ;\n",
"}\n",
"}\n",
"}\n",
"rule Object\n",
"{\n",
"local h ;\n",
"Clean clean : $(<) ;\n",
"MakeLocate $(<) : $(LOCATE_TARGET) ;\n",
"SEARCH on $(>) = $(SEARCH_SOURCE) ;\n",
"HDRS on $(<) = $(SEARCH_SOURCE) $(HDRS) $(SUBDIRHDRS) ;\n",
"if $(SEARCH_SOURCE)\n",
"{\n",
"h = $(SEARCH_SOURCE) ;\n",
"}\n",
"else\n",
"{\n",
"h = \"\" ;\n",
"}\n",
"HDRRULE on $(>) = HdrRule ;\n",
"HDRSCAN on $(>) = $(HDRPATTERN) ;\n",
"HDRSEARCH on $(>) = $(HDRS) $(SUBDIRHDRS) $(h) $(STDHDRS) ;\n",
"HDRGRIST on $(>) = $(HDRGRIST) ;\n",
"switch $(>:S)\n",
"{\n",
"case .asm : As $(<) : $(>) ;\n",
"case .c :	Cc $(<) : $(>) ;\n",
"case .C :	C++ $(<) : $(>) ;\n",
"case .cc :	C++ $(<) : $(>) ;\n",
"case .cpp : C++ $(<) : $(>) ;\n",
"case .f :	Fortran $(<) : $(>) ;\n",
"case .l :	Cc $(<) : $(<:S=.c) ;\n",
"Lex $(<:S=.c) : $(>) ;\n",
"case .s :	As $(<) : $(>) ;\n",
"case .y :	Cc $(<) : $(<:S=.c) ;\n",
"Yacc $(<:S=.c) : $(>) ;\n",
"case * :	UserObject $(<) : $(>) ;\n",
"}\n",
"}\n",
"rule ObjectCcFlags\n",
"{\n",
"local s ;\n",
"makeGristedName s : $(<:S=$(SUFOBJ)) ;\n",
"CCFLAGS on $(s) += $(>) ;\n",
"}\n",
"rule ObjectC++Flags\n",
"{\n",
"local s ;\n",
"makeGristedName s : $(<:S=$(SUFOBJ)) ;\n",
"C++FLAGS on $(s) += $(>) ;\n",
"}\n",
"rule ObjectHdrs\n",
"{\n",
"local s ;\n",
"makeGristedName s : $(<:S=$(SUFOBJ)) ;\n",
"HDRS on $(s) += $(>) ;\n",
"}\n",
"rule Objects\n",
"{\n",
"local i s ;\n",
"makeGristedName s : $(<) ;\n",
"for i in $(s)\n",
"{\n",
"Object $(i:S=$(SUFOBJ)) : $(i) ;\n",
"DEPENDS obj : $(i:S=$(SUFOBJ)) ;\n",
"}\n",
"}\n",
"rule RmTemps\n",
"{\n",
"TEMPORARY $(>) ;\n",
"}\n",
"rule Setuid\n",
"{\n",
"local t ;\n",
"if $(<:S)\n",
"{\n",
"t = $(<) ;\n",
"} else {\n",
"t = $(<:S=$(SUFEXE)) ;\n",
"}\n",
"MODE on $(t) = 4711 ;\n",
"}\n",
"rule Shell\n",
"{\n",
"DEPENDS shell : $(<) ;\n",
"DEPENDS $(<) : $(>) ;\n",
"SEARCH on $(>) = $(SEARCH_SOURCE) ;\n",
"MODE on $(<) = $(SHELLMODE) ;\n",
"Clean clean : $(<) ;\n",
"Chmod $(<) ;\n",
"}\n",
"rule SubDir\n",
"{\n",
"local r s ;\n",
"if ! $($(<[1]))\n",
"{\n",
"if ! $(<[1])\n",
"{\n",
"EXIT SubDir syntax error ;\n",
"}\n",
"makeSubDir $(<[1]) : $(<[2-]) ;\n",
"}\n",
"if ! $($(<[1])-included)\n",
"{\n",
"$(<[1])-included = TRUE ;\n",
"r = $($(<[1])RULES) ;\n",
"if ! $(r)\n",
"{\n",
"r = $(JAMRULES:R=$($(<[1]))) ;\n",
"}\n",
"include $(r) ;\n",
"}\n",
"makeDirName s : $(<[2-]) ;\n",
"SUBDIR = $(s:R=$($(<[1]))) ;\n",
"SUBDIR_TOKENS = $(<[2-]) ;\n",
"SEARCH_SOURCE = $(SUBDIR) ;\n",
"LOCATE_SOURCE = $(ALL_LOCATE_TARGET) $(SUBDIR) ;\n",
"LOCATE_TARGET = $(ALL_LOCATE_TARGET) $(SUBDIR) ;\n",
"makeGrist SOURCE_GRIST : $(<[2-]) ;\n",
"SUBDIRCCFLAGS = ;\n",
"SUBDIRC++FLAGS = ;\n",
"SUBDIRHDRS = ;\n",
"}\n",
"rule SubDirCcFlags\n",
"{\n",
"SUBDIRCCFLAGS += $(<) ;\n",
"}\n",
"rule SubDirC++Flags\n",
"{\n",
"SUBDIRC++FLAGS += $(<) ;\n",
"}\n",
"rule SubDirHdrs\n",
"{\n",
"SUBDIRHDRS += $(<) ;\n",
"}\n",
"rule SubInclude\n",
"{\n",
"local s ;\n",
"if ! $($(<[1]))\n",
"{\n",
"EXIT Top level of source tree has not been set with $(<[1]) ;\n",
"}\n",
"makeDirName s : $(<[2-]) ;\n",
"include $(JAMFILE:D=$(s):R=$($(<[1]))) ;\n",
"}\n",
"rule Undefines\n",
"{\n",
"local t ;\n",
"if $(<:S)\n",
"{\n",
"t = $(<) ;\n",
"} else {\n",
"t = $(<:S=$(SUFEXE)) ;\n",
"}\n",
"UNDEFS on $(t) += $(UNDEFFLAG)$(>) ;\n",
"}\n",
"rule UserObject\n",
"{\n",
"EXIT \"Unknown suffix on\" $(>) \"- see UserObject rule in Jamfile(5).\" ;\n",
"}\n",
"rule Yacc\n",
"{\n",
"local h ;\n",
"h = $(<:BS=.h) ;\n",
"MakeLocate $(<) $(h) : $(LOCATE_SOURCE) ;\n",
"if $(YACC)\n",
"{\n",
"DEPENDS $(<) $(h) : $(>) ;\n",
"Yacc1 $(<) $(h) : $(>) ;\n",
"Clean clean : $(<) $(h) ;\n",
"}\n",
"INCLUDES $(<) : $(h) ;\n",
"}\n",
"rule makeString\n",
"{\n",
"local _t ;\n",
"$(<) = $(>[1]) ;\n",
"for _t in $(>[2-])\n",
"{\n",
"$(<) = $($(<))$(_t) ;\n",
"}\n",
"}\n",
"rule makeSubDir\n",
"{\n",
"local _i _d ;\n",
"if ! $(>[1]) \n",
"{\n",
"_d = $(DOT) ;\n",
"} \n",
"else\n",
"{\n",
"_d = $(DOTDOT) ;\n",
"for _i in $(>[2-])\n",
"{\n",
"_d = $(_d:R=$(DOTDOT)) ;\n",
"}\n",
"}\n",
"$(<) = $(_d) ;\n",
"}\n",
"rule addDirName\n",
"{\n",
"local _s _i ;\n",
"if ! $(>)\n",
"{\n",
"_s = $(DOT) ;\n",
"}\n",
"else if $(VMS)\n",
"{\n",
"switch $(>[1])\n",
"{\n",
"case *:* : _s = $(>[1]) ;\n",
"case \\\\[*\\\\] : _s = $(>[1]) ;\n",
"case * : _s = [.$(>[1])] ;\n",
"}\n",
"for _i in [.$(>[2-])]\n",
"{\n",
"_s = $(_i:R=$(_s)) ;\n",
"}\n",
"}\n",
"else if $(MAC)\n",
"{\n",
"_s = $(DOT) ;\n",
"for _i in $(>)\n",
"{\n",
"_s = $(_i:R=$(_s)) ;\n",
"}\n",
"}\n",
"else\n",
"{\n",
"_s = $(>[1]) ; \n",
"for _i in $(>[2-])\n",
"{\n",
"_s = $(_i:R=$(_s)) ;\n",
"}\n",
"}\n",
"$(<) += $(_s) ;\n",
"}\n",
"rule makeDirName\n",
"{\n",
"$(<) = ; addDirName $(<) : $(>) ;\n",
"}\n",
"rule makeGrist\n",
"{\n",
"local _g _i ;\n",
"_g = $(>[1]) ;\n",
"for _i in $(>[2-])\n",
"{\n",
"_g = $(_g)!$(_i) ;\n",
"}\n",
"$(<) = $(_g) ;\n",
"}\n",
"rule makeGristedName\n",
"{\n",
"local _i _o ;\n",
"if ! $(SOURCE_GRIST)\n",
"{\n",
"$(<) = $(>) ;\n",
"}\n",
"else \n",
"{\n",
"_o = ;\n",
"for _i in $(>)\n",
"{\n",
"switch $(_i)\n",
"{\n",
"case *.h :	_o += $(_i) ;\n",
"case * : 	_o += $(_i:G=$(SOURCE_GRIST)) ;\n",
"}\n",
"}\n",
"$(<) = $(_o) ;\n",
"}\n",
"}\n",
"rule makeCommon\n",
"{\n",
"if $($(<)[1]) && $($(<)[1]) = $($(>)[1])\n",
"{\n",
"$(<) = $($(<)[2-]) ;\n",
"$(>) = $($(>)[2-]) ;\n",
"makeCommon $(<) : $(>) ;\n",
"}\n",
"}\n",
"rule makeRelPath \n",
"{\n",
"local _l _r ;\n",
"_l = $(<[2-]) ;\n",
"_r = $(>) ;\n",
"makeCommon _l : _r ;\n",
"makeSubDir _l : $(_l) ;\n",
"makeDirName _r : $(_r) ;\n",
"if $(_r) = $(DOT) {\n",
"$(<[1]) = $(_l) ;\n",
"} else {\n",
"$(<[1]) = $(_r:R=$(_l)) ;\n",
"}\n",
"}\n",
"rule makeSuffixed\n",
"{\n",
"if $(<[2])\n",
"{\n",
"local _i ;\n",
"$(<[1]) = ;\n",
"for _i in $(>)\n",
"{\n",
"if $(_i:S)\n",
"{\n",
"$(<[1]) += $(_i) ;\n",
"}\n",
"else\n",
"{\n",
"$(<[1]) += $(_i:S=$(<[2])) ;\n",
"}\n",
"}\n",
"}\n",
"else\n",
"{\n",
"$(<[1]) = $(>) ;\n",
"}\n",
"}\n",
"rule unmakeDir\n",
"{\n",
"if $(>[1]:D) && $(>[1]:D) != $(>[1]) && $(>[1]:D) != \\\\\\\\ \n",
"{\n",
"unmakeDir $(<) : $(>[1]:D) $(>[1]:BS) $(>[2-]) ;\n",
"}\n",
"else\n",
"{\n",
"$(<) = $(>) ;\n",
"}\n",
"}\n",
"if $(UNIX)\n",
"{\n",
"if $(OS) = QNX \n",
"{\n",
"actions together piecemeal Archive\n",
"{\n",
"$(AR) $(<) +-$(>) \n",
"}\n",
"}\n",
"else if $(OS) = BEOS\n",
"{\n",
"actions together Archive\n",
"{\n",
"$(AR) $(<) $(>)\n",
"}\n",
"}\n",
"else\n",
"{\n",
"actions updated together piecemeal Archive\n",
"{\n",
"$(AR) $(<) $(>)\n",
"}\n",
"}\n",
"actions As\n",
"{\n",
"$(AS) $(ASFLAGS) -I$(HDRS) -o $(<) $(>)\n",
"}\n",
"if $(OS) = SINIX\n",
"{\n",
"actions C++\n",
"{\n",
"[ $(>:S) != .C ] && $(CP) $(>) $(>:S=.C) && trap \"rm -f $(>:S=.C)\" 0\n",
"$(C++) -c $(C++FLAGS) $(OPTIM) -I$(HDRS) $(>:S=.C)\n",
"}\n",
"} \n",
"else if $(RELOCATE)\n",
"{\n",
"actions C++\n",
"{\n",
"$(C++) -c $(C++FLAGS) $(OPTIM) -I$(HDRS) $(>)\n",
"}\n",
"}\n",
"else\n",
"{\n",
"actions C++\n",
"{\n",
"$(C++) -c $(C++FLAGS) $(OPTIM) -I$(HDRS) -o $(<) $(>)\n",
"}\n",
"}\n",
"actions Cc\n",
"{\n",
"$(CC) -c $(CCFLAGS) $(OPTIM) -I$(HDRS) -o $(<) $(>)\n",
"}\n",
"if $(RELOCATE)\n",
"{\n",
"actions Cc\n",
"{\n",
"$(CC) -c $(CCFLAGS) $(OPTIM) -I$(HDRS) $(>)\n",
"}\n",
"}\n",
"actions ignore CcMv\n",
"{\n",
"[ $(<) != $(>:BS=$(SUFOBJ)) ] && $(MV) $(>:BS=$(SUFOBJ)) $(<)\n",
"}\n",
"actions Chgrp\n",
"{\n",
"chgrp $(GROUP) $(<)\n",
"}\n",
"actions Chmod\n",
"{\n",
"chmod $(MODE) $(<)\n",
"}\n",
"actions Chown\n",
"{\n",
"chown $(OWNER) $(<)\n",
"}\n",
"actions piecemeal together existing Clean\n",
"{\n",
"$(RM) $(>)\n",
"}\n",
"actions File\n",
"{\n",
"$(RM) $(<)\n",
"$(CP) $(>) $(<)\n",
"}\n",
"actions GenFile1\n",
"{\n",
"$(>[1]) $(<) $(>[2-])\n",
"}\n",
"actions Fortran\n",
"{\n",
"$(FORTRAN) $(FORTRANFLAGS) -o $(<) $(>)\n",
"}\n",
"actions HardLink\n",
"{\n",
"$(RM) $(<) && $(LN) $(>) $(<)\n",
"}\n",
"if $(INSTALL)\n",
"{\n",
"actions Install\n",
"{\n",
"$(INSTALL) -m$(MODE) -o$(OWNER) -g$(GROUP) $(>) $(<)\n",
"}\n",
"}\n",
"else\n",
"{\n",
"actions Install\n",
"{\n",
"$(CP) $(>) $(<) \n",
"}\n",
"}\n",
"actions Lex\n",
"{\n",
"$(LEX) $(>) && $(MV) lex.yy.c $(<)\n",
"}\n",
"actions Link bind NEEDLIBS\n",
"{\n",
"$(LINK) $(LINKFLAGS) -o $(<) $(UNDEFS) $(>) $(NEEDLIBS) $(LINKLIBS) \n",
"}\n",
"actions MkDir1\n",
"{\n",
"$(MKDIR) $(<)\n",
"}\n",
"actions together Ranlib\n",
"{\n",
"$(RANLIB) $(<)\n",
"}\n",
"actions quietly updated piecemeal together RmTemps\n",
"{\n",
"$(RM) $(>)\n",
"}\n",
"actions Shell\n",
"{\n",
"$(AWK) '\n",
"NR == 1 { print \"$(SHELLHEADER)\" }\n",
"NR == 1 && /^[#:]/ { next }\n",
"/^##/ { next }\n",
"{ print }\n",
"' < $(>) > $(<)\n",
"}\n",
"actions Yacc1\n",
"{\n",
"$(YACC) $(YACCFLAGS) $(>) &&\n",
"{\n",
"$(MV) $(YACCFILES).c $(<[1])\n",
"$(MV) $(YACCFILES).h $(<[2])\n",
"}\n",
"}\n",
"}\n",
"else if $(NT) || $(OS2)\n",
"{\n",
"if $(BCCROOT)\n",
"{\n",
"actions C++\n",
"{\n",
"$(C++) -c $(C++FLAGS) $(OPTIM) -I$(HDRS) -o$(<) $(>)\n",
"}\n",
"actions Link bind NEEDLIBS\n",
"{\n",
"$(LINK) -e$(<) $(LINKFLAGS) $(UNDEFS) -L$(LINKLIBS) $(NEEDLIBS) $(>)\n",
"}\n",
"actions updated together piecemeal Archive\n",
"{\n",
"$(AR) $(ARFLAGS) $(<) -+$(>)\n",
"}\n",
"actions Cc\n",
"{\n",
"$(CC) -c $(CCFLAGS) $(OPTIM) -I$(HDRS) -o$(<) $(>)\n",
"}\n",
"}\n",
"else if $(MSVC) \n",
"{\n",
"actions updated together piecemeal Archive\n",
"{\n",
"$(AR) $(<) -+$(>) ;\n",
"}\n",
"actions Cc\n",
"{\n",
"$(CC) /c $(CCFLAGS) $(OPTIM) /Fo$(<) /I$(HDRS) $(>)\n",
"}\n",
"actions C++\n",
"{\n",
"$(C++) /c $(C++FLAGS) $(OPTIM) /Fo$(<) /I$(HDRS) /Tp$(>)\n",
"}\n",
"actions Link bind NEEDLIBS\n",
"{\n",
"$(LINK) $(LINKFLAGS) /out:$(<) $(UNDEFS) $(>) $(NEEDLIBS) $(LINKLIBS)\n",
"}\n",
"}\n",
"else if $(MSVCNT)\n",
"{\n",
"actions updated together piecemeal Archive\n",
"{\n",
"if exist $(<) set _$(<:B)_=$(<)\n",
"$(AR) /out:$(<) %_$(<:B)_% $(>)\n",
"}\n",
"actions As\n",
"{\n",
"$(AS) /Ml /p /v /w2 $(>) $(<) ,nul,nul;\n",
"}\n",
"actions Cc\n",
"{\n",
"$(CC) /c $(CCFLAGS) $(OPTIM) /Fo$(<) /I$(HDRS) /I$(STDHDRS) $(>)\n",
"}\n",
"actions C++\n",
"{\n",
"$(C++) /c $(C++FLAGS) $(OPTIM) /Fo$(<) /I$(HDRS) /I$(STDHDRS) /Tp$(>)\n",
"}\n",
"actions Link bind NEEDLIBS\n",
"{\n",
"$(LINK) $(LINKFLAGS) /out:$(<) $(UNDEFS) $(>) $(NEEDLIBS) $(LINKLIBS)\n",
"}\n",
"}\n",
"else if $(WATCOM)\n",
"{\n",
"actions together piecemeal Archive\n",
"{\n",
"$(AR) $(<) +-$(>) \n",
"}\n",
"actions Cc\n",
"{\n",
"$(CC) $(CCFLAGS) $(OPTIM) /Fo=$(<) /I$(HDRS) $(>)\n",
"}\n",
"actions C++\n",
"{\n",
"$(C++) $(C++FLAGS) $(OPTIM) /Fo=$(<) /I$(HDRS) $(>)\n",
"}\n",
"actions Link bind NEEDLIBS\n",
"{\n",
"$(LINK) $(LINKFLAGS) /Fe=$(<) $(UNDEFS) $(>) $(NEEDLIBS) $(LINKLIBS)\n",
"}\n",
"}\n",
"actions Chmod\n",
"{\n",
"}\n",
"actions piecemeal together existing Clean\n",
"{\n",
"$(RM) $(>)\n",
"}\n",
"actions File\n",
"{\n",
"copy $(>) $(<)\n",
"}\n",
"actions GenFile1\n",
"{\n",
"$(>[1]) $(<) $(>[2-])\n",
"}\n",
"actions Install\n",
"{\n",
"copy $(>) $(<)\n",
"}\n",
"actions MkDir1\n",
"{\n",
"$(MKDIR) $(<)\n",
"}\n",
"actions quietly updated piecemeal together RmTemps\n",
"{\n",
"$(RM) $(>)\n",
"}\n",
"actions Shell\n",
"{\n",
"copy $(>) $(<)\n",
"}\n",
"}\n",
"else if $(VMS)\n",
"{\n",
"actions updated together piecemeal Archive \n",
"{\n",
"lib/replace $(<) $(>[1]) ,$(>[2-])\n",
"}\n",
"actions Cc\n",
"{ \n",
"cc/obj=$(<) $(CCFLAGS) $(OPTIM) $(SLASHINC) $(>) \n",
"}\n",
"actions C++\n",
"{ \n",
"cxx/obj=$(<) $(C++FLAGS) $(OPTIM) $(SLASHINC) $(>) \n",
"}\n",
"actions Chmod\n",
"{\n",
"set file/prot=$(MODE) $(<)\n",
"}\n",
"actions piecemeal together existing Clean\n",
"{\n",
"$(RM) $(>[1]);* ,$(>[2-]);*\n",
"}\n",
"actions together quietly CreLib\n",
"{\n",
"if f$search(\"$(<)\") .eqs. \"\" then lib/create $(<)\n",
"}\n",
"actions File\n",
"{\n",
"copy $(>) $(<)\n",
"}\n",
"actions GenFile1\n",
"{\n",
"mcr $(>[1]) $(<) $(>[2-])\n",
"}\n",
"actions Install\n",
"{\n",
"copy $(>) $(<)\n",
"}\n",
"actions Lex\n",
"{\n",
"$(LEX) $(>) \n",
"$(MV) lex.yy.c $(<)\n",
"}\n",
"actions Link bind NEEDLIBS\n",
"{\n",
"$(LINK)/exe=$(<) $(LINKFLAGS) $(>[1]) ,$(>[2-]) ,$(NEEDLIBS)/lib ,$(LINKLIBS)\n",
"}\n",
"actions MkDir1\n",
"{\n",
"create/dir $(<)\n",
"}\n",
"actions quietly updated piecemeal together RmTemps\n",
"{\n",
"$(RM) $(>[1]);* ,$(>[2-]);*\n",
"}\n",
"actions Shell\n",
"{\n",
"copy $(>) $(<)\n",
"}\n",
"actions Yacc1\n",
"{\n",
"$(YACC) $(YACCFLAGS) $(>)\n",
"$(MV) $(YACCFILES).c $(<[1])\n",
"$(MV) $(YACCFILES).h $(<[2])\n",
"}\n",
"}\n",
"else if $(MAC)\n",
"{\n",
"SP = \" \" ;\n",
"actions together piecemeal Archive \n",
"{\n",
"$(LINK) -library -o $(<) $(>)\n",
"}\n",
"actions Cc\n",
"{\n",
"set MWCincludes $(MACINC)\n",
"$(CC) -o $(<) $(CCFLAGS) $(OPTIM) $(>) \n",
"}\n",
"actions C++\n",
"{ \n",
"set MWCincludes $(MACINC)\n",
"$(CC) -o $(<) $(C++FLAGS) $(OPTIM) $(>) \n",
"}\n",
"rule Chmod\n",
"{\n",
"}\n",
"actions piecemeal together existing Clean\n",
"{\n",
"$(RM) $(>)\n",
"}\n",
"actions File\n",
"{\n",
"copy $(>) $(<)\n",
"}\n",
"actions GenFile1\n",
"{\n",
"$(>[1]) $(<) $(>[2-])\n",
"}\n",
"actions Install\n",
"{\n",
"copy $(>) $(<)\n",
"}\n",
"actions Link bind NEEDLIBS\n",
"{\n",
"$(LINK) -o $(<) $(LINKFLAGS) $(>) $(NEEDLIBS) \"$(LINKLIBS)\"\n",
"}\n",
"actions MkDir1\n",
"{\n",
"$(MKDIR) $(<)\n",
"}\n",
"actions quietly updated piecemeal together RmTemps\n",
"{\n",
"$(RM) $(>)\n",
"}\n",
"actions Shell\n",
"{\n",
"copy $(>) $(<)\n",
"}\n",
"}\n",
"rule BULK { Bulk $(<) : $(>) ; }\n",
"rule FILE { File $(<) : $(>) ; }\n",
"rule HDRRULE { HdrRule $(<) : $(>) ; }\n",
"rule INSTALL { Install $(<) : $(>) ; }\n",
"rule LIBRARY { Library $(<) : $(>) ; }\n",
"rule LIBS { LinkLibraries $(<) : $(>) ; }\n",
"rule LINK { Link $(<) : $(>) ; }\n",
"rule MAIN { Main $(<) : $(>) ; }\n",
"rule SETUID { Setuid $(<) ; }\n",
"rule SHELL { Shell $(<) : $(>) ; }\n",
"rule UNDEFINES { Undefines $(<) : $(>) ; }\n",
"rule INSTALLBIN { InstallBin $(BINDIR) : $(<) ; }\n",
"rule INSTALLLIB { InstallLib $(LIBDIR) : $(<) ; }\n",
"rule INSTALLMAN { InstallMan $(MANDIR) : $(<) ; }\n",
"{\n",
"if $(JAMFILE) { include $(JAMFILE) ; }\n",
"}\n",
0 };
