/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */


/*

    YABASIC ---  a simple Basic Interpreter
    written by Marc-Oliver Ihm 1995-2004
    homepage: www.yabasic.de

    BISON part
     
    This file is part of yabasic and may be copied only 
    under the terms of either the Artistic License or 
    the GNU General Public License (GPL), both of which 
    can be found at www.yabasic.de

*/


#ifndef YABASIC_INCLUDED
#include "yabasic.h"     /* definitions of yabasic */
#endif

#include <malloc.h>

#if HAVE_ALLOCA_H
#ifndef WINDOWS
#include <alloca.h>
#endif
#endif

void __yy_bcopy(char *,char *,int); /* prototype missing */

int tileol; /* true, read should go to eon of line */
int mylineno=1; /* line number; counts fresh in every new file */
int main_lineno=1; /* line number of main */
int function_type=ftNONE; /* contains function type while parsing function */
char *current_function=NULL; /* name of currently parsed function */
int exported=FALSE; /* true, if function is exported */
int yylex(void);
extern struct libfile_name *current_libfile; /*  defined in main.c: name of currently parsed file */
int missing_endif=0;
int missing_endif_line=0;
int missing_endsub=0;
int missing_endsub_line=0;
int missing_next=0;
int missing_next_line=0;
int missing_wend=0;
int missing_wend_line=0;
int missing_until=0;
int missing_until_line=0;
int missing_loop=0;
int missing_loop_line=0;
int in_loop=0;

void report_missing(int severity,char *text) {
  if (missing_loop || missing_endif || missing_next || missing_until || missing_wend) {
    error(severity,text);
    string[0]='\0';
    if (missing_endif)
      sprintf(string,"if statement starting at line %d has seen no 'endif' yet",missing_endif_line);
    else if (missing_next)
      sprintf(string,"for-loop starting at line %d has seen no 'next' yet",missing_next_line);
    else if (missing_wend)
      sprintf(string,"while-loop starting at line %d has seen no 'wend' yet",missing_wend_line);
    else if (missing_until)
      sprintf(string,"repeat-loop starting at line %d has seen no 'until' yet",missing_until_line);
    else if (missing_loop)
      sprintf(string,"do-loop starting at line %d has seen no 'loop' yet",missing_wend_line);
    if (string[0]) error(severity,string);
  }
}
     



# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison.h".  */
#ifndef YY_YY_BISON_H_INCLUDED
# define YY_YY_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    tFNUM = 258,
    tSYMBOL = 259,
    tSTRSYM = 260,
    tDOCU = 261,
    tDIGITS = 262,
    tSTRING = 263,
    tFOR = 264,
    tTO = 265,
    tSTEP = 266,
    tNEXT = 267,
    tWHILE = 268,
    tWEND = 269,
    tREPEAT = 270,
    tUNTIL = 271,
    tIMPORT = 272,
    tGOTO = 273,
    tGOSUB = 274,
    tLABEL = 275,
    tON = 276,
    tSUB = 277,
    tENDSUB = 278,
    tLOCAL = 279,
    tSTATIC = 280,
    tEXPORT = 281,
    tERROR = 282,
    tEXECUTE = 283,
    tEXECUTE2 = 284,
    tCOMPILE = 285,
    tRUNTIME_CREATED_SUB = 286,
    tINTERRUPT = 287,
    tBREAK = 288,
    tCONTINUE = 289,
    tSWITCH = 290,
    tSEND = 291,
    tCASE = 292,
    tDEFAULT = 293,
    tLOOP = 294,
    tDO = 295,
    tSEP = 296,
    tEOPROG = 297,
    tIF = 298,
    tTHEN = 299,
    tELSE = 300,
    tELSIF = 301,
    tENDIF = 302,
    tUSING = 303,
    tPRINT = 304,
    tINPUT = 305,
    tLINE = 306,
    tRETURN = 307,
    tDIM = 308,
    tEND = 309,
    tEXIT = 310,
    tAT = 311,
    tSCREEN = 312,
    tSCREENSHOT = 313,
    tREVERSE = 314,
    tCOLOUR = 315,
    tAND = 316,
    tOR = 317,
    tNOT = 318,
    tEOR = 319,
    tNEQ = 320,
    tLEQ = 321,
    tGEQ = 322,
    tLTN = 323,
    tGTN = 324,
    tEQU = 325,
    tPOW = 326,
    tREAD = 327,
    tDATA = 328,
    tRESTORE = 329,
    tOPEN = 330,
    tCLOSE = 331,
    tSEEK = 332,
    tTELL = 333,
    tAS = 334,
    tREADING = 335,
    tWRITING = 336,
    tWAIT = 337,
    tBELL = 338,
    tLET = 339,
    tARDIM = 340,
    tARSIZE = 341,
    tBIND = 342,
    tWINDOW = 343,
    tDOT = 344,
    tCIRCLE = 345,
    tCLEAR = 346,
    tFILL = 347,
    tPRINTER = 348,
    tSETUP = 349,
    tBUTTON = 350,
    tALERT = 351,
    tMENU = 352,
    tCHECKBOX = 353,
    tRADIOBUTTON = 354,
    tTEXTCONTROL = 355,
    tLISTBOX = 356,
    tDROPBOX = 357,
    tADD = 358,
    tREMOVE = 359,
    tLOCALIZE = 360,
    tFILEPANEL = 361,
    tSLIDER = 362,
    tSTATUSBAR = 363,
    tLAYOUT = 364,
    tSET = 365,
    tTEXTEDIT = 366,
    tCOUNT = 367,
    tVIEW = 368,
    tBOXVIEW = 369,
    tTABVIEW = 370,
    tTEXTURL = 371,
    tBITMAP = 372,
    tCANVAS = 373,
    tOPTION = 374,
    tDROPZONE = 375,
    tCOLORCONTROL = 376,
    tTREEBOX = 377,
    tCOLUMNBOX = 378,
    tCOLUMN = 379,
    tSORT = 380,
    tTOOLTIP = 381,
    tTOOLTIPNEW = 382,
    tCALENDAR = 383,
    tCLIPBOARD = 384,
    tCOPY = 385,
    tSUBMENU = 386,
    tSELECT = 387,
    tSCROLLBAR = 388,
    tEXPAND = 389,
    tCOLLAPSE = 390,
    tSPLITVIEW = 391,
    tSTACKVIEW = 392,
    tPOPUPMENU = 393,
    tSPINCONTROL = 394,
    tMSEND = 395,
    tNUMMESSAGE = 396,
    tTHREAD = 397,
    tSOUND = 398,
    tPLAY = 399,
    tSTOP = 400,
    tMEDIASOUND = 401,
    tSHORTCUT = 402,
    tISCOMPUTERON = 403,
    tDRAW = 404,
    tTEXT = 405,
    tFLUSH = 406,
    tELLIPSE = 407,
    tSAVE = 408,
    tRECT = 409,
    tGETCHAR = 410,
    tPUTCHAR = 411,
    tNEW = 412,
    tCURVE = 413,
    tLAUNCH = 414,
    tATTRIBUTE = 415,
    tSIN = 416,
    tASIN = 417,
    tCOS = 418,
    tACOS = 419,
    tTAN = 420,
    tATAN = 421,
    tEXP = 422,
    tLOG = 423,
    tSQRT = 424,
    tSQR = 425,
    tMYEOF = 426,
    tABS = 427,
    tSIG = 428,
    tINT = 429,
    tFRAC = 430,
    tMOD = 431,
    tRAN = 432,
    tLEN = 433,
    tVAL = 434,
    tLEFT = 435,
    tRIGHT = 436,
    tMID = 437,
    tMIN = 438,
    tMAX = 439,
    tSTR = 440,
    tINKEY = 441,
    tCHR = 442,
    tASC = 443,
    tHEX = 444,
    tDEC = 445,
    tBIN = 446,
    tUPPER = 447,
    tLOWER = 448,
    tTRIM = 449,
    tLTRIM = 450,
    tRTRIM = 451,
    tINSTR = 452,
    tRINSTR = 453,
    tSYSTEM = 454,
    tSYSTEM2 = 455,
    tPEEK = 456,
    tPEEK2 = 457,
    tPOKE = 458,
    tDATE = 459,
    tTIME = 460,
    tTOKEN = 461,
    tTOKENALT = 462,
    tSPLIT = 463,
    tSPLITALT = 464,
    tGLOB = 465,
    tMESSAGE = 466,
    tIMAGE = 467,
    tSVG = 468,
    tTRANSLATE = 469,
    tGET = 470,
    tMOUSE = 471,
    tISMOUSEIN = 472,
    tKEYBOARD = 473,
    tPASTE = 474,
    tGETNUM = 475,
    UMINUS = 476
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{


  double fnum;          /* double number */
  int inum;             /* integer number */
  int token;            /* token of command */
  int sep;              /* number of newlines */
  char *string;         /* quoted string */
  char *symbol;         /* general symbol */
  char *digits;         /* string of digits */
  char *docu;		/* embedded documentation */


};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_H_INCLUDED  */

/* Copy the second part of user declarations.  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  412
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   13412

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  231
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  109
/* YYNRULES -- Number of rules.  */
#define YYNRULES  592
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1954

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   476

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   230,     2,     2,     2,     2,
     226,   227,   223,   222,   229,   221,     2,   224,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   228,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   225
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   148,   148,   151,   152,   153,   152,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   173,   174,   174,   175,   176,
     177,   178,   179,   180,   181,   181,   183,   183,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   195,
     196,   196,   197,   198,   199,   200,   201,   202,   211,   212,
     213,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   404,   405,
     406,   407,   408,   409,   412,   413,   416,   417,   419,   420,
     423,   424,   427,   428,   431,   432,   433,   434,   435,   436,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   484,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   497,   498,   501,   501,   502,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     535,   538,   541,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   648,   649,   650,   653,   654,   657,   658,   661,   662,
     663,   664,   667,   670,   673,   673,   676,   677,   678,   681,
     682,   685,   686,   689,   685,   694,   695,   698,   699,   702,
     703,   704,   705,   708,   709,   712,   713,   714,   715,   718,
     719,   722,   723,   724,   725,   728,   729,   730,   733,   734,
     735,   736,   739,   740,   744,   757,   739,   762,   763,   766,
     767,   770,   771,   776,   776,   781,   782,   785,   786,   790,
     791,   792,   791,   796,   797,   797,   801,   801,   807,   808,
     812,   813,   812,   819,   820,   824,   824,   829,   830,   834,
     835,   835,   837,   834,   841,   842,   845,   845,   849,   850,
     853,   855,   857,   854,   861,   862,   865,   866,   866,   869,
     870,   872,   873,   877,   878,   881,   882,   884,   885,   889,
     890,   891,   892,   895,   896,   897,   898,   899,   902,   903,
     904,   907,   907,   908,   908,   909,   909,   910,   910,   911,
     911,   914,   915,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   928,   929,   930,   931,   934,   935,   937,
     938,   941,   942
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tFNUM", "tSYMBOL", "tSTRSYM", "tDOCU",
  "tDIGITS", "tSTRING", "tFOR", "tTO", "tSTEP", "tNEXT", "tWHILE", "tWEND",
  "tREPEAT", "tUNTIL", "tIMPORT", "tGOTO", "tGOSUB", "tLABEL", "tON",
  "tSUB", "tENDSUB", "tLOCAL", "tSTATIC", "tEXPORT", "tERROR", "tEXECUTE",
  "tEXECUTE2", "tCOMPILE", "tRUNTIME_CREATED_SUB", "tINTERRUPT", "tBREAK",
  "tCONTINUE", "tSWITCH", "tSEND", "tCASE", "tDEFAULT", "tLOOP", "tDO",
  "tSEP", "tEOPROG", "tIF", "tTHEN", "tELSE", "tELSIF", "tENDIF", "tUSING",
  "tPRINT", "tINPUT", "tLINE", "tRETURN", "tDIM", "tEND", "tEXIT", "tAT",
  "tSCREEN", "tSCREENSHOT", "tREVERSE", "tCOLOUR", "tAND", "tOR", "tNOT",
  "tEOR", "tNEQ", "tLEQ", "tGEQ", "tLTN", "tGTN", "tEQU", "tPOW", "tREAD",
  "tDATA", "tRESTORE", "tOPEN", "tCLOSE", "tSEEK", "tTELL", "tAS",
  "tREADING", "tWRITING", "tWAIT", "tBELL", "tLET", "tARDIM", "tARSIZE",
  "tBIND", "tWINDOW", "tDOT", "tCIRCLE", "tCLEAR", "tFILL", "tPRINTER",
  "tSETUP", "tBUTTON", "tALERT", "tMENU", "tCHECKBOX", "tRADIOBUTTON",
  "tTEXTCONTROL", "tLISTBOX", "tDROPBOX", "tADD", "tREMOVE", "tLOCALIZE",
  "tFILEPANEL", "tSLIDER", "tSTATUSBAR", "tLAYOUT", "tSET", "tTEXTEDIT",
  "tCOUNT", "tVIEW", "tBOXVIEW", "tTABVIEW", "tTEXTURL", "tBITMAP",
  "tCANVAS", "tOPTION", "tDROPZONE", "tCOLORCONTROL", "tTREEBOX",
  "tCOLUMNBOX", "tCOLUMN", "tSORT", "tTOOLTIP", "tTOOLTIPNEW", "tCALENDAR",
  "tCLIPBOARD", "tCOPY", "tSUBMENU", "tSELECT", "tSCROLLBAR", "tEXPAND",
  "tCOLLAPSE", "tSPLITVIEW", "tSTACKVIEW", "tPOPUPMENU", "tSPINCONTROL",
  "tMSEND", "tNUMMESSAGE", "tTHREAD", "tSOUND", "tPLAY", "tSTOP",
  "tMEDIASOUND", "tSHORTCUT", "tISCOMPUTERON", "tDRAW", "tTEXT", "tFLUSH",
  "tELLIPSE", "tSAVE", "tRECT", "tGETCHAR", "tPUTCHAR", "tNEW", "tCURVE",
  "tLAUNCH", "tATTRIBUTE", "tSIN", "tASIN", "tCOS", "tACOS", "tTAN",
  "tATAN", "tEXP", "tLOG", "tSQRT", "tSQR", "tMYEOF", "tABS", "tSIG",
  "tINT", "tFRAC", "tMOD", "tRAN", "tLEN", "tVAL", "tLEFT", "tRIGHT",
  "tMID", "tMIN", "tMAX", "tSTR", "tINKEY", "tCHR", "tASC", "tHEX", "tDEC",
  "tBIN", "tUPPER", "tLOWER", "tTRIM", "tLTRIM", "tRTRIM", "tINSTR",
  "tRINSTR", "tSYSTEM", "tSYSTEM2", "tPEEK", "tPEEK2", "tPOKE", "tDATE",
  "tTIME", "tTOKEN", "tTOKENALT", "tSPLIT", "tSPLITALT", "tGLOB",
  "tMESSAGE", "tIMAGE", "tSVG", "tTRANSLATE", "tGET", "tMOUSE",
  "tISMOUSEIN", "tKEYBOARD", "tPASTE", "tGETNUM", "'-'", "'+'", "'*'",
  "'/'", "UMINUS", "'('", "')'", "';'", "','", "'#'", "$accept", "program",
  "statement_list", "$@1", "$@2", "statement", "$@3", "$@4", "$@5", "$@6",
  "$@7", "$@8", "string_assignment", "to", "open_clause", "seek_clause",
  "string_scalar_or_array", "string_expression", "string_function",
  "assignment", "expression", "$@9", "$@10", "arrayref", "string_arrayref",
  "coordinates", "function", "const", "number", "symbol_or_lineno",
  "dimlist", "function_or_array", "stringfunction_or_array", "call_list",
  "$@11", "calls", "call_item", "function_definition", "$@12", "$@13",
  "$@14", "endsub", "function_name", "export", "local_list", "local_item",
  "static_list", "static_item", "paramlist", "paramitem", "for_loop",
  "$@15", "$@16", "$@17", "$@18", "next", "step_part", "next_symbol",
  "switch_number_or_string", "$@19", "sep_list", "number_or_string",
  "case_list", "$@20", "$@21", "default", "$@22", "do_loop", "$@23",
  "loop", "while_loop", "$@24", "$@25", "wend", "repeat_loop", "$@26",
  "until", "if_clause", "$@27", "$@28", "$@29", "$@30", "endif",
  "short_if", "$@31", "else_part", "elsif_part", "$@32", "$@33",
  "maybe_then", "inputlist", "$@34", "input", "readlist", "readitem",
  "datalist", "printlist", "using", "inputbody", "$@35", "$@36", "$@37",
  "$@38", "$@39", "prompt", "printintro", "hashed_number", "goto_list",
  "gosub_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,    45,    43,    42,    47,   476,    40,    41,    59,    44,
      35
};
# endif

#define YYPACT_NINF -1181

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1181)))

#define YYTABLE_NINF -520

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   11127,   -44,   -32, -1181, -1181, -1181, -1181, -1181,    95,    95,
      95,  6508, -1181, -1181, -1181, 10668,  -163,  -159, 10668,    58,
   -1181, -1181, -1181, -1181,  9148,   -25, -1181,   109,  9148,   262,
   -1181,  9148,  9148,   266,    21,  2518,  2094,  2094,  2094,  9148,
   -1181,    18, 10668,    14,   123,   103,  6728, 10668, 10052,  5628,
    6948,  5848,  4528,  4748, 10174,  5188,  7168, 10668,  4968,  6068,
    7388,  5408,  7608,  6288,  9148,    17,  7828,  4063,  4308, 10302,
   10668,  8048,    76, 10424, 10546,  8268,  8488,  8708,    -2,    78,
   10668,  1963,  8928, 10668, 10668,    38,    27,    53,    59,   107,
     111,  2094,   211,   233,   287, -1181, -1181, -1181, -1181, -1181,
     275,   284, -1181,   344, -1181, -1181, -1181, -1181, -1181, -1181,
   -1181,  9148, -1181, 10668, -1181,   394,   154, 11127, -1181, -1181,
   -1181, -1181, -1181, -1181,   188,   200, -1181, -1181,   209,   215,
     449,   227,   255,  9148,   270,   272,   289,   297,   301,   -64,
   10668, 10668,   203,   256,   -75,   -60, 10668,   315,   -74,   352,
     366,   -35,   411,   -48,   -46,   302,   380,   431,   454,   463,
    9148,   484,   397,   -63,   527,   561, -1181,   -42,   517,    20,
     531,   552,   594,   611,   647,   648,   674,   688,   689,   690,
     718,   720,   734,   736,   751,   760,   764,   774,   783,   793,
     797,   801,   818,   830,   855,   861,   870,   871,   894,   895,
     923,   924,   936,   947,   948,   958,   962,   966,   971,   974,
     975,   980,   983,   984,  1022,  1026,  1034,  1040,  1044,  1048,
    9148,  1059,   587, 10668,   629,  9148,  9148,    68, -1181,   523,
   -1181, -1181, -1181, -1181,   480,   521,   702,   719,   753,   765,
     868,   949,  1000, 10668,   888, -1181, -1181,   888, -1181,  9148,
   11127,   509,  1075,  1167,  1080,     4,  9148,   -40, -1181,    68,
    1954,  1088,  1092,  1008,  1954,  1301,     2,  1112,  1114,  1043,
   -1181, -1181,   180,   180, -1181, -1181,  1073,   888, -1181,  9148,
      47,  1954,  1095, -1181,  1097,  1954, -1181, -1181,   275,   284,
     888,  9148, 10668, 10668, -1181, 10668,  9148,     2,  -176, 10668,
     -54, 10668,  9148,  1121, 10668,  1130, 10668, 10668,     2, 10668,
   10668, 10668, 10668, 10668,     2, 10668, 10668, 10668, 10668,     2,
   -1181,   888, 10668, 10668, 10668,     2, 10668,     2,     0, 10668,
   10668, 10668, 10668,     2, 10668, 10668,     2, 10668,     2, 10668,
   10668, 10668,     2, 10668,  1131, 10668,  9148,  1132,     2, 10668,
   10668, 10668,  1135, 10668, 10668, 10668, 10668, 10668, 10668, 10668,
       2, 10668, 10668, 10668, 10668, 10668, 10668,     2, 10668,    22,
      35, 10668,  1145, 10668, 10668,   135, 10668,   156, 10668,     2,
   10668,     2, 10668,  1146,  9368,  9588,  9808,   175,  9148,  9148,
    9148,  9148,  9148,  9148, 10668,  9148,  9148,  9148, 10668,     7,
      -8,   888, 10668, 10668,  1336,  1336,  1336,  3370, 10668,    84,
    1160, 10668, -1181, -1181,  1349,  9148, 10668, -1181,  1954,  1164,
    9148,   888,  1168,  1324,  9148,    44, -1181, -1181, -1181, -1181,
    9148,  9148,  1927,  9148,  2094,  2094,   553,   553, -1181, 10668,
     193,   235,  1179, 10668, 10668, 10668, 10668, 10668, 10668, 10668,
     248, 10668, 10668, 10668, 10668, 10668,  9148, 10668, 10668, 10668,
   10668, 10668, 10668, 10668, 10668, 10668, 10668, 10668, -1181, 10668,
   10668, 10668,  1193, 10668, 10668, 10668, 10668, 10668, 10668,  9148,
   10668,  9148,  9148, 10668, 10668,  9148,  9148,  9148,  9148,  9148,
    9148,  9148,  9148,  9148,  9148,  2094,  9148,  9148,  9148,  9148,
    9148,  3613, 10668, 10668, 10668, 10668, 10668,  9148,  9148,  9148,
    3838,  9148, 10668,  9148, 10668,  9148, 10668, 10668, 10668, 10668,
   10668, 10668, 10668, 10668, 10668,  2094, 10668,  1199,  1212, 10668,
    1336, 10668,  1336, 10668,  1214,     2, 10668, 10790,   888, 10668,
   -1181,     5,   700, 10668, 10668, 10668, 10668, 10668, 10668, 10668,
   -1181, -1181, -1181, -1181,  9148,  9148,  9148,  9148,  9148,  9148,
    9148,  9148,  9148,  9148,  9148,  1219,  1228,  1211, -1181,  1232,
    1236,  1235, -1181,   -51,  1240,  1249,    68,  1954,  1443,   226,
    1444, 11127,  9148,  1276, 10668, -1181, -1181,  9148,    68,   645,
     354,  1279,    11, -1181,  1495,   -40, -1181, -1181,   610,  9148,
   -1181, -1181,  9148, -1181, -1181,   266, -1181, -1181,    37,  1954,
     560, 10668,  9148,     2,   888,   251,   888,  1282,  9148, 10668,
     257, 10668,   290,  1288, 10668,   291, 10668,   888,   316,  9148,
     888,   317,   318,   888,   326,  9148,   888,   327,   330,   332,
    9148,   338,   376,   378,  9148,   379,  9148, 10668,   381,   888,
     420,   428,  9148,   888,   888,  9148,   430,  9148,   432,   433,
     434,  9148,   448, 10668,   888,   558,  1317,     2, 10668,  9148,
     450,   451,   462, 10668,   888,   466,   496,   888,   497,   505,
     554,  9148,   555,   888,   557,   571,   572,   574,  9148,   580,
   10668, 10668,   582, 10668,   888,   584, 10668,   585,  9148,   586,
    9148,   590,  9148,   601, 10668,  9148,  1954,  9148,  1954,  9148,
    1954, 10668,     2,  1291,  1299,   632,  1382,     9,  1302,   888,
    1303,     2,  1304,   603, 10668,  9148,  9148,   609,   612,  1308,
    1314,  1319,  1322, -1181, 10004,    60,  9148,  9148,   888, -1181,
    1954,   888,   681, -1181,    68,  1954,  1327, -1181, -1181, -1181,
   10126,  1343, -1181, -1181,  1281,  1351,  1404,  1523,  1577,   599,
    1352,  1355,  1357,  1360,  1369,  1370,  1373,  1381,   613, 10668,
   10668, 10668,   888,   888,   614,   888,   888,   624,   888, 10668,
     888,   627,   628,   630,   888,  1612,   642,   664,   665,   666,
     888,   667,   691,   888,   696,   888,   888,   697,   708,   888,
   10668,   888,   709,   711,   714,   888,   888,  1883,     2,   888,
     670,  1383,  1938,   725,   726, 10498, 10620, 10742, 10864, 12247,
     568, 12258,   814, 12269, 12280,  1372, 12291, 12338, 12356, 12455,
    2024, -1181, 12466,    66,    77,   730,   742,   743,  2261,  2275,
    1057, -1181, 12477, 12502,    83, 12520,   -41, 12531,   105,   159,
     172,   173,   273,   744,   754,   346,   375,    96,  1397,   -38,
   -1181, -1181,   763,   -99,   767,   -85,   769, -1181,  9148,   460,
    9930,   888,   888, -1181, -1181,   888,   888,   888,   888,   888,
     888, -1181,    95,    95,  9148,  9148,   840,    51,   147,   423,
     -20,   168, -1181,   -28,   -28,  1550,  1550, -1181, -1181,   480,
   -1181, -1181,   521, -1181, -1181, -1181,  1591, -1181, -1181, -1181,
   -1181,  1588,  2288,  9148,    -3, 12542, 10912, -1181, -1181,  9148,
    9148, -1181, -1181,  9148, -1181,   737, -1181,  1409,  1410,  1414,
    1432,  1954,  1431,  1448,  1449, -1181, -1181, -1181,  1583,  1587,
     772,  2306,  9148, 10668, 10668,  1469,   786,  9148,   789,  9148,
   10668,   799,  9148,   817,  9148,  1479,  9148,  9148,  9148,  1483,
   10668,  9148,  9148,  1492, 10668, 10668,  9148,  1497,  9148,  1498,
     888, 10668, 10668, 10668,  1509,  1510, 10668,  1511, 10668,  9148,
    9148,  1513, 10668,   820, 10668,  9148,  9148,   888,  1521, 10668,
   10668,  9148,   823, 10668,  9148,  9148, 10668, 10668,  1522, 10668,
    9148,  9148, 10668,  9148,  1524,  9148,   888,   825, 10668,   826,
   10668,   831, 10668,  2340, 10668,  1525,  9148,  1527,  9148,   836,
   12553, 12564, 12575,   847,  9148, 10668,  9148,  9148, 10668, 10668,
    9148, 10668,  9148,  9148,  9148, 10668,   883,  1529,  2620, 10668,
   10668, -1181,  9148,  9148,  9148, -1181, -1181,    68,  1954,    68,
    1954, 11127, -1181, -1181, -1181,  9148,  9148, -1181,  9148, -1181,
   -1181,  9148,  9148,  9148, -1181, 10668, 10668, -1181,  1532,  1539,
   -1181, -1181,  9148,  9148, 10668,   885,   886,   481,  9148,  9148,
     887,  9148, 10668, 10668,  9148, 10668, 10668, 10668, 10668,  9148,
   10668,  9148, 10668, 10668,   907, 10668,  9148, 10668,  9148,  9148,
   10668, 10668,  9148, 10668, 10668, -1181, -1181, -1181, -1181, -1181,
   -1181,  9148, -1181, -1181,  9148, -1181, -1181, -1181, -1181, -1181,
   -1181, -1181,  9148, -1181, -1181, -1181,  9148,  9148,  9148,  9148,
    9148, -1181, 10668, -1181, -1181, -1181, -1181, -1181,  9148, -1181,
   -1181, -1181, -1181, -1181, -1181, 10668, 10668, -1181, -1181, -1181,
   -1181, -1181, 10668,  1762, -1181, 10668,  1762, -1181, 10668, 10668,
    1541, -1181, -1181, -1181,  1543, -1181,  1545,  1927,  1847,  1549,
    1552, -1181,  1553,  1554, -1181, -1181,   722, 11127, -1181,  9148,
    2691,  1721, 10668, -1181, 10668,   888,    68,   645,  2764,   737,
     737, 12586,  1557,  1558, -1181,  1556, -1181, -1181, -1181, -1181,
   10668, -1181, -1181,  2094,  2094, 10668, 10668,  1559,   910,   912,
   10668, 10668,   683,  2786, 10668,  1954,   913, 10668,  1954, 10668,
     937,  1954, 10668,    68,  2813,    68,  1954,  1954, 10668,   888,
    1954,  1954, 10668,   939,   941,   964,  1954, 10668,  1025,  2984,
   10668,   960,   888,   965, 10668, 10668,   976, 10668,   888,  1954,
    1954, 10668,   989, 10668,   992,  1033,  1561, 10668,   997,   998,
    3001, 10668,  1002,  1277,  1954,  1954,   888,   888, 10668,  1006,
    3037,  1954,  1011,  1954, 10668,  3048, 10668,   888, 10668,  1012,
   10668,  1021, 10668,  1027, 10668,  1954, 10668,  1954, 10668, 13188,
   13188, 13188, 10668,  1562,   888,  3079,  1287,  3093,   888,  1029,
    1564,  1035,  3185,  1565,  1566,   888, 10668, 10668,  9148,   888,
    1046,  1560, 12597, 12641,  1086, -1181,  1571, -1181,    39, 11127,
   12666, 12761, 12772, 12783,   501,    54, -1181, -1181, 12805, 12830,
     888, 10668, 10668, -1181,  1954,  1954, 10668,    68,  1954,  1054,
     888,  3228,  1060,   888,   888,   888,  1954,  1065,  4237,   888,
     888, 10668,   888,  1954,   888, 10221,  1573,  1066,  1068,    26,
     888,   888, 12841, 12852, 12863, 12874, 12885,  1110, 12896, 12907,
     133, 12947,   155,   191,   502,   -17,   536,    25,   595,   638,
   10668,    95,    95, -1181, -1181, -1181, -1181, -1181,  1763,  1772,
    1768, 12969,  9148,  1584,   675,   194, -1181,  9148, -1181, -1181,
   -1181, -1181, -1181, -1181,  1586,  1589,   888, -1181, -1181,   888,
     888, 10668,  9148, 10668,  1071,   888, 10668, 10668,  1074, 10668,
    1076,  1082, 10668,  1090, 10668,  1098,  1100, 10668,  9148,  9148,
    1101, 10668,  9148,  1106,  9148,  9148,  1129,  1151, 10668,  1170,
    1171,  9148,  1181, 10668, 10668, 10668,  1184,  9148,  9148,  9148,
     888,  9148, 10668,  1186,  9148,  9148,  9148,  1189,  9148,  1192,
    1195,  9148,  1203,  9148,   888,  9148,  1205,  1209,  1213,   888,
   10668, 10668, 10668,  9148, 10668, 10668, 10668,  9148, 10668,  9148,
    1263,  1264,  1954, 10668, -1181,  1741,  1745,  1747,  9148,   777,
    9148,    43, -1181, -1181, -1181, -1181, -1181, -1181, 10668, -1181,
   -1181,   888,  1272,  1297,  9148, 10668, 10668,  9148,  9148,   888,
   10668, 10668, 10668, 10668,  9148, -1181, -1181, -1181, -1181, -1181,
   -1181,  9148, -1181, -1181, -1181, 10668, -1181, -1181,  9148, -1181,
    9148, -1181, -1181, 10668, -1181, -1181, 10668, -1181, -1181,  1307,
   -1181, -1181,  9148, -1181, -1181,  1773,   803, 13071,  9148,  1764,
   10668, 13082,   737,  1596,  1598,   737, -1181, -1181,  1315,    68,
   11125,  1320, 10668,  1323,   888, 10668,  1331,  9148,  9148,   888,
   10668,   888,  9148, 10668,   888, 11223,  1954, 10668,  1332, 11234,
   10668,    68, 11249,    68,  1954,  9148, 10668,   888, 10668, 10668,
   11267, 10668,   888,   888,  1335, 10668, 11290,    68, 11301, 11312,
    1412, 11323,   888,  9148, 11334, 11345, 11356,  9148, 11367,  9148,
   10668,  1585, 11414, 10668, 11432, 11532,  9148,  9148,  9148,   888,
     888,   888, 11543,  1337,  1346,   888, 11554,   888,  1601, 10668,
   10668,  1348, 10668, 10668, 10668, 13093,  1592,  1605,   198, -1181,
     341, -1181, -1181, -1181,   676, 10668, 10668,    68,  1954,  1350,
     888,  1954,  1954,  1378,  1379,   888,   888, 11579, 13111,   795,
   13133, 13144,   857,   884, 10668, -1181, 11127,  9148,  1782, -1181,
    1611, -1181, 11597,  1613,   911, -1181, -1181, -1181, -1181, -1181,
   10668,  9148, 10668,  1391, 10668,   888, 10668, 11608, 11619,  1394,
   11630,  1400,  9148,  1435,  9148,  9148,  1439,  9148, 11641,   888,
    1441,  1462,  9148,  1463, 10668,   888,  9148,  9148,  9148,  9148,
    9148, 11652,  9148,  9148,  9148, 11663,  9148, 11674,  1464, 10668,
   10668,  1465,  9148,  9148, 11719, 11744, 11839,  9148, 10668, 10668,
   10668,  9148,   888,  1466, 10668,   888,   888,   888,  1770,  1615,
    1616, -1181,   777,  9148, -1181, -1181,  1468,   888, 10668, 10668,
   10668,  9148, -1181, -1181, -1181, -1181, -1181, -1181,   888, 11127,
    1802,   551, 11127, -1181, 10668,  9148,  9148, -1181,  1495,   888,
    1954,  1474, 10668,   888,  1477, 10668, 10668, 10668, 10668, 10668,
   11850,  9148,  1954,  1954, 10668, 11861, 10668,  9148, 10668, 11884,
   10668,   888, 11909,  1954,  1954,  1954, 11920, 10668, 11931, 11942,
   11953, 10668,  1954,  9148, 10668,  1478,   888, 10668,  1954,  1954,
    9148, 10668,  9148, 11964,   888,  1487,   888,  1617, 10668,   888,
   10668, -1181, -1181, 11127, -1181,  1954, 11127, 10668,   888,   888,
     888, 13155,  1768, -1181, -1181,  1768,   178,   245, 13166, 11975,
     737, 10668,   888, 10668,   888,   888,  1488,   888,   888,  9148,
   11986,  1489,  9148,   888, 12026,   888,  9148,   888,  9148,  9148,
     888,  9148, 10668,  9148,  1500, 12049,   888, 10668,   888, 12151,
     888, 12162, 10668, 10668, 10668,   888,   888,   116,  1768,   888,
   -1181, 11127, -1181, -1181, -1181, -1181, 10668, -1181,  9148, -1181,
    1502,  1508, 10668,  1954,  9148, 10668,  1954, 10668,  1954,  1954,
    1954,  1954,   888, 12173, 10668,  9148,   888, 10668,  9148,   888,
     888,   888, -1181, -1181, -1181,    69,  1768,   938, 13177, 10668,
   10668,   888, 12191,   888,   888,  9148,   888,  1954,   888, 12214,
   -1181, -1181,  1840,  1773, -1181, -1181,   888,  1514, 10668, 12225,
   10668, -1181, -1181, -1181,  9148,  1519, 10668,   888, 12236, 10668,
     888, 10668,   888,   888
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     0,   226,   482,   510,   515,    12,     0,     0,
       0,     0,    24,    26,   460,     0,     0,     0,     0,   461,
      19,    20,   493,   506,     0,   573,    48,     0,    57,     0,
     223,   224,     0,     0,     0,    54,     0,     0,     0,     0,
     214,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   215,
       0,     0,     0,     0,     4,     3,     8,    39,    41,    10,
      22,    23,    21,     0,    14,    15,    18,    17,    16,    28,
      29,     0,   444,     0,   444,     0,     0,     7,   437,   436,
      30,    31,    38,   434,   325,   244,   435,   247,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   420,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   257,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   267,   269,     0,     0,     0,     0,     0,   281,
       0,     0,     0,     0,     0,     0,     0,     0,   245,     0,
     338,   319,   324,   246,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,   444,   444,    42,   462,     0,
       7,   526,     0,   577,     0,     0,   553,   569,    50,    59,
      58,     0,     0,    60,   225,     0,     0,   545,   547,    52,
     543,   549,     0,     0,   550,   431,    53,    56,    55,     0,
       0,   588,     0,    40,     0,   213,     9,    11,     0,     0,
     227,     0,     0,     0,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     0,     0,     0,   451,   304,     0,
     446,   228,     0,     0,     0,     4,   444,   444,    32,    33,
       0,     0,   310,     0,     0,     0,     0,     0,   392,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   295,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   283,   393,     0,
     331,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    36,   308,   306,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   465,   466,    25,   463,   471,
     472,    27,   469,     0,     0,     0,   498,   497,     0,     4,
       0,     7,     0,     0,     0,   574,   575,     0,   556,   558,
      45,     0,     0,    49,   571,   569,   444,   444,     0,     0,
     235,   234,     0,   444,   444,     0,   433,   432,     0,   587,
       0,     0,     0,     0,    88,     0,   194,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   147,     0,     0,
      68,     0,     0,   167,     0,     0,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       0,     0,     0,   108,   141,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,     0,     0,   168,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   198,     0,   196,     0,
     200,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,   234,     0,     0,     0,     0,   242,
       0,     0,     0,   216,     0,     0,     0,     0,   195,     5,
     305,   233,     0,   442,   449,   450,   445,   447,   443,   483,
       0,     0,   517,   516,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   290,   398,     0,   421,   405,     0,   422,     0,
     406,   287,     0,     0,   403,     0,     0,     0,     0,     0,
     399,     0,   423,   394,     0,   424,   297,     0,     0,   402,
       0,   404,     0,     0,     0,   418,   419,     0,     0,   302,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   361,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     268,   270,     0,     0,     0,     0,     0,   282,     0,     0,
       0,   293,   294,   249,   339,   333,   335,   337,   334,   336,
     332,   248,     0,     0,     0,     0,   312,   314,   316,   313,
     315,   311,   330,   327,   326,   328,   329,   444,   444,     0,
     444,   444,     0,    43,    44,   495,   499,   509,   508,   507,
     520,     4,     0,     0,     0,     0,     0,   554,    46,    47,
       0,   561,   563,     0,   572,     0,    51,     0,     0,     0,
       0,   342,     0,     0,     0,   544,   551,   552,     0,     0,
     237,   240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   234,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   444,     0,     0,     0,   217,   218,   219,   220,   221,
     222,     7,   457,   458,   452,     0,     0,   511,     0,   384,
     280,     0,     0,     0,   385,     0,     0,   379,     0,     0,
     320,   321,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   343,   344,   345,   346,   347,
     348,     0,   350,   351,     0,   353,   354,   317,   357,   358,
     355,   356,     0,   360,   364,   365,     0,     0,     0,     0,
       0,   254,     0,   259,   260,   366,   278,   367,     0,   279,
     261,   262,   265,   263,   264,     0,     0,   266,   373,   375,
     374,   271,     0,     0,   274,     0,     0,   276,     0,     0,
       0,   285,   284,   589,    35,   591,    37,   309,   307,     0,
       0,   464,     0,     0,   470,   496,   503,     7,   527,     0,
       0,   578,     0,   576,     0,   559,   557,   558,     0,     0,
       0,     0,   539,   541,   570,   536,   438,   440,   444,   444,
       0,   546,   548,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,   162,     0,     0,   163,     0,
     144,   145,     0,    69,     0,    75,    76,    77,     0,    72,
      74,   182,     0,     0,     0,     0,   125,     0,     0,     0,
       0,     0,    95,    96,     0,     0,     0,     0,   113,   114,
     112,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,     0,   149,   154,   156,   155,   158,   159,     0,     0,
       0,   173,     0,   174,     0,     0,     0,   177,     0,     0,
       0,   181,     0,     0,     0,   206,     0,   192,     0,   199,
     197,   201,     0,     0,   115,     0,   102,   105,   103,     0,
       0,     0,     0,     0,     0,    81,     0,     0,     0,   210,
       0,     0,     0,     0,     0,     6,     0,   448,     0,     7,
       0,     0,     0,     0,     0,     0,   340,   341,     0,     0,
     395,     0,     0,   286,   298,   301,     0,   289,   288,   408,
     396,     0,     0,   427,   428,   407,   299,     0,     0,   400,
     401,     0,   414,   415,   416,   342,     0,   412,     0,     0,
     303,   430,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   467,   468,   473,   474,   500,     0,     0,
     521,     0,     0,     0,     0,     0,   555,     0,   562,   564,
     565,   444,   444,   537,     0,     0,   139,   238,   239,   236,
     241,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   211,     0,   243,     0,     0,     0,     0,   475,
       0,     4,   518,   376,   377,   378,   386,   387,     0,   322,
     323,   417,     0,   291,     0,     0,     0,     0,     0,   300,
       0,     0,     0,     0,     0,   349,   352,   359,   250,   251,
     253,     0,   362,   363,   255,     0,   368,   369,     0,   371,
       0,   272,   381,     0,   273,   383,     0,   275,   318,     0,
     590,   592,     0,   504,   494,   530,   580,     0,     0,   579,
       0,     0,     0,     0,     0,     0,   439,   441,     0,    91,
       0,     0,     0,     0,   183,     0,     0,     0,     0,   146,
       0,    70,     0,     0,   122,     0,   123,     0,     0,     0,
       0,    99,     0,    98,    97,     0,     0,   110,     0,     0,
       0,     0,   135,   134,     0,     0,     0,   127,   130,     0,
       0,   152,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,   203,     0,     0,     0,   116,
     117,   106,     0,     0,     0,    85,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,   478,   479,     0,   476,
     489,   514,   513,   512,     0,     0,     0,   410,   409,     0,
     426,   425,   296,     0,     0,   411,   413,     0,     0,     0,
       0,     0,     0,     0,     0,   501,     7,     0,   528,   584,
       0,   581,     0,     0,     0,   567,   566,   540,   542,   538,
       0,     0,     0,     0,     0,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,     0,   140,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,   231,   232,   230,     0,     0,
       0,   453,     0,     0,   484,   388,     0,   292,     0,     0,
       0,     0,   252,   256,   370,   372,   380,   382,   391,     7,
       4,   534,     7,   522,     0,     0,     0,   560,   571,    61,
      92,     0,     0,   184,     0,     0,     0,     0,     0,     0,
       0,     0,   189,   190,     0,     0,     0,     0,     0,     0,
       0,   133,     0,   131,   143,   150,     0,     0,     0,     0,
       0,     0,   166,     0,     0,     0,   186,     0,   180,   204,
       0,     0,     0,     0,   136,     0,   118,     0,     0,   209,
       0,   480,   481,     7,   477,   490,     7,     0,   429,   389,
     390,     0,   502,   535,   531,   529,     0,     0,     0,     0,
       0,     0,    62,     0,    64,    65,     0,    67,    71,     0,
       0,     0,     0,    94,     0,   111,     0,   207,     0,     0,
     148,     0,     0,     0,     0,     0,   176,     0,   185,     0,
     205,     0,     0,     0,     0,    80,   229,     4,   485,   397,
     277,     7,   524,   525,   523,   585,     0,   582,     0,   568,
       0,     0,     0,   124,     0,     0,   100,     0,   208,   128,
     151,   175,   170,     0,     0,     0,   187,     0,     0,   104,
     137,   119,   456,   455,   454,     0,   532,     0,     0,     0,
       0,    66,     0,   188,   109,     0,   169,   165,   202,     0,
     488,   487,   491,   530,   586,   583,   160,     0,     0,     0,
       0,   492,   486,   533,     0,   120,     0,   191,     0,     0,
     171,     0,   121,   161
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1181, -1181,  -103, -1181, -1181,   794, -1181, -1181, -1181, -1181,
   -1181, -1181,  1807,   491, -1181, -1181,  -323,   -15, -1181,  1808,
    1476, -1181, -1181,  1416,  -436,  2736, -1181,  1243,   -27,    -5,
   -1181,     6,    62,   -53, -1181, -1181,   800, -1181, -1181, -1181,
   -1181, -1181, -1181, -1181, -1181,   955, -1181,   954, -1181,   121,
   -1181, -1181, -1181, -1181, -1181, -1181, -1181, -1181, -1181, -1181,
   -1181,   322, -1181, -1181, -1181, -1181, -1181, -1181, -1181, -1181,
   -1181, -1181, -1181, -1181, -1181, -1181, -1181, -1181, -1181, -1181,
   -1181, -1181, -1181, -1181, -1181, -1181,   -68, -1181, -1181, -1181,
   -1180, -1181, -1181, -1181,  1261, -1181, -1181,   682,  1273, -1181,
   -1181, -1181, -1181, -1181,   102, -1181,    41, -1181, -1181
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    93,    94,   414,  1051,    95,   234,   235,   882,   883,
     257,   595,    96,   602,    97,    98,   730,   227,   228,    99,
     265,   885,   884,   764,   765,   266,   230,   274,   231,   120,
     263,   232,   233,   419,   420,   746,   747,   102,   742,  1316,
    1823,  1914,  1054,   103,   567,   568,   571,   572,  1638,  1639,
     104,   115,  1056,  1826,  1915,  1932,  1744,  1942,   105,   249,
     906,   578,  1176,  1542,  1759,  1389,  1666,   106,   250,   909,
     107,   116,  1319,  1643,   108,   117,   753,   109,   580,  1177,
    1545,  1836,  1884,   110,   581,  1763,  1668,  1881,  1933,  1834,
    1194,  1555,  1195,   269,   270,   276,   590,   917,   593,  1189,
    1190,  1552,  1768,   594,   925,   256,   282,  1164,  1166
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     244,   767,   600,   247,   121,   122,   100,   275,   585,  1398,
    1399,   586,   600,   259,   425,   921,   591,   600,   922,   600,
     277,   280,     1,     2,   123,   456,   111,   290,   126,   271,
     278,   252,   298,   300,   253,   254,   600,   444,   113,   321,
     123,   475,   328,   560,   126,   936,   549,   288,   438,  1490,
     559,   560,   447,   619,   369,   370,   610,  1641,   375,   377,
     751,   422,   101,   245,   461,   387,   464,   246,   400,   401,
     543,   544,   545,   546,   547,   548,   409,   349,   283,   284,
     384,  1930,   731,   732,   248,  1642,   752,   552,   553,   291,
     292,   554,   555,   556,   557,   558,   559,   560,   421,   118,
     552,   553,   119,   289,   554,   555,   556,   557,   558,   559,
     560,  1931,   543,   544,   545,   546,   547,   548,   457,   557,
     558,   559,   560,   100,   293,   440,   441,   350,  1154,   402,
    1155,   450,   410,   543,   544,   545,   546,   547,   548,  1912,
     445,   452,  1157,   385,  1158,   446,   453,   579,   403,   543,
     544,   545,   546,   547,   548,   448,   439,   476,  1913,   258,
     449,   543,   544,   545,   546,   547,   548,   462,   549,   465,
     479,   549,   463,   480,   466,   621,   873,   458,   481,   101,
     294,   549,   112,   123,   549,   459,  1137,   126,  1138,  1151,
     592,  1152,   574,   575,   114,   563,   564,   295,    86,    87,
      88,   561,   562,   563,   564,   255,   373,   863,   538,   865,
    1532,   541,  1533,   555,   549,   557,   558,   559,   560,   549,
    1882,   601,   549,   386,  1181,  1883,  1182,   549,   573,   647,
     587,   601,   873,   412,   576,   483,   724,   923,  1029,   560,
     484,   588,   272,   273,   549,   606,   607,   561,   562,   563,
     564,   690,  1535,   404,  1536,   601,   100,   549,   272,   273,
     561,   562,   563,   564,   691,   907,   261,   262,   908,   549,
     267,   268,   561,   562,   563,   564,   549,   614,   615,   405,
     616,  1497,   549,  1498,   620,   406,   622,  1046,   549,   625,
     549,   627,   628,  1124,   630,   631,   632,   633,   634,   549,
     636,   637,   638,   639,  1125,   549,   549,   641,   642,   643,
    1135,   645,   101,   736,   648,   649,   650,   651,   549,   653,
     654,   411,   656,  1149,   658,   659,   660,   549,   662,   413,
     664,   665,  1140,   407,   670,   671,   672,   408,   674,   675,
     676,   677,   678,   679,   680,   415,   682,   683,   684,   685,
     686,   687,  1743,   689,   416,   549,   692,   549,   694,   695,
    1524,   697,  1525,   699,   696,   701,   417,   703,   561,   562,
     563,   564,  1676,   754,   755,  1679,   715,   549,   549,   719,
     424,   549,  1527,   723,  1528,   698,  1141,   727,   728,   561,
     562,   563,   564,   735,   549,   549,   738,   549,   423,  1142,
    1143,   741,   552,   553,   711,   744,   554,   555,   556,   557,
     558,   559,   560,   549,   112,   549,   549,   442,  1529,   759,
    1530,   873,   769,  1550,   768,  1741,   114,  1742,   772,   773,
     774,   775,   776,   777,   778,   426,   780,   781,   782,   783,
     784,   427,   786,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   796,   430,   797,   798,   799,   549,   801,   802,
     803,   804,   805,   806,   770,   809,   810,   549,   813,   814,
     549,   443,  1885,   549,  1886,   760,   761,   779,   911,   549,
     943,   431,   428,   429,   565,   566,   947,   833,   834,   835,
     836,   837,   558,   559,   560,   549,   433,   844,   434,   846,
    1144,   848,   849,   850,   851,   852,   853,   854,   855,   856,
     857,   859,   549,   549,   862,   435,   864,   467,   866,   949,
     952,   869,   871,   436,   872,   569,   570,   437,   875,   876,
     877,   878,   879,   880,   881,   451,   825,   474,   549,   549,
     549,   550,   551,   927,   928,   954,   956,   957,   549,   549,
     933,   934,   549,  -519,   549,   958,   960,   762,   763,   961,
     549,   962,   561,   562,   563,   564,   858,   964,   549,   914,
     552,   553,   454,  1147,   554,   555,   556,   557,   558,   559,
     560,   275,   918,   919,   552,   553,   455,   100,   554,   555,
     556,   557,   558,   559,   560,  1833,   940,   549,   549,   468,
     549,   549,  1148,   549,   946,   965,   948,   966,   968,   951,
     971,   953,   552,   553,   929,   930,   554,   555,   556,   557,
     558,   559,   560,   543,   544,   545,   546,   547,   548,   552,
     553,   460,   970,   554,   555,   556,   557,   558,   559,   560,
     938,   939,   549,   101,   561,   562,   563,   564,   983,   972,
     549,   469,   549,   987,   549,   549,   549,   973,   992,   976,
    1889,   978,   979,   980,   543,   544,   545,   546,   547,   548,
     549,   477,   549,   549,   470,  1006,  1007,   982,  1009,   989,
     990,  1011,   549,   471,   549,  1052,  1053,  1161,   549,  1019,
     541,   991,   541,   916,   541,   993,  1023,   543,   544,   545,
     546,   547,   548,   549,   473,   478,   552,   553,  1333,  1036,
     554,   555,   556,   557,   558,   559,   560,  1375,   549,   549,
    1377,  1047,  1049,   549,   549,   994,   995,   549,  1496,  1531,
     561,   562,   563,   564,   996,   543,   544,   545,   546,   547,
     548,  1192,  1193,   482,   561,   562,   563,   564,   543,   544,
     545,   546,   547,   548,  1075,  1076,  1077,   485,   549,  1387,
    1388,   552,   553,  1534,  1080,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   549,   549,   486,   549,
     549,  1636,  1637,   997,   999,  1094,  1000,   984,   618,   561,
     562,   563,   564,   549,   549,  1110,   549,  1111,   537,   629,
    1001,  1002,   549,  1003,   549,   635,   549,   549,   549,  1005,
     640,  1008,   549,  1010,  1012,  1014,   644,   549,   646,  1016,
     487,   549,  1537,   549,   652,   549,  1064,   655,  1065,   657,
    1018,   549,  1035,   661,   549,   549,   549,   488,  1039,   669,
     539,  1040,  1074,  1078,  1169,  1170,   549,  1172,  1173,   549,
     549,   681,   549,  1079,   549,   573,  1081,  1082,   688,  1083,
     549,  1027,  1669,  1670,   549,  1538,   561,   562,   563,   564,
     700,  1085,   702,   489,   490,   552,   553,  1163,  1165,   554,
     555,   556,   557,   558,   559,   560,   549,   549,   549,   549,
     725,   726,   549,  1086,  1087,  1088,  1089,   549,   549,  1100,
     491,  1185,  1549,  1745,  1186,   549,   555,   556,   557,   558,
     559,   560,  1416,   549,   492,   493,   494,   445,   549,   549,
    1090,   561,   562,   563,   564,  1091,  1092,   874,  1208,  1209,
     549,   549,  1212,   549,   448,  1216,   549,  1093,  1095,  1220,
    1096,  1223,  1225,  1097,   495,  1229,   496,   549,   549,  1233,
    1234,  1235,   549,  1238,  1103,  1104,  1241,  1242,  1243,  1126,
     497,  1246,   498,  1248,   549,   549,   549,  1252,   452,  1254,
    1255,  1127,  1128,  1145,  1258,  1259,   549,   499,  1262,  1263,
     462,  1266,  1267,  1146,  1269,   549,   500,  1272,  1311,   549,
     501,   549,  1153,  1277,   549,  1279,  1156,  1281,  1159,  1283,
     502,  1205,   543,   544,   545,   546,   547,   548,   549,   503,
    1294,   549,  1296,  1298,  1299,  1211,  1301,   549,  1214,   504,
    1305,   549,  1753,   505,  1309,  1310,   868,   506,  1217,   543,
     544,   545,   546,   547,   548,   561,   562,   563,   564,   549,
     744,  1113,   549,  1114,   507,   549,  1219,   549,   549,  1253,
    1324,  1325,  1261,   549,  1276,  1278,   508,   100,   549,  1330,
    1280,   561,   562,   563,   564,  1288,  1337,  1339,  1340,   549,
    1342,  1343,  1344,  1345,  1390,  1347,  1292,  1349,  1350,   549,
    1352,   509,  1354,   465,  1756,  1357,  1358,   510,  1360,  1361,
     543,   544,   545,   546,   547,   548,   511,   512,   543,   544,
     545,   546,   547,   548,   942,   549,   549,   549,   549,   549,
     549,  1757,  1306,   101,  1331,  1332,  1336,  1370,   552,   553,
     513,   514,   554,   555,   556,   557,   558,   559,   560,   549,
    1372,  1373,   549,   549,   549,   549,  1351,  1374,  1767,  1412,
    1376,  1413,  1419,  1378,  1379,  1404,  1405,   552,   553,   515,
     516,   554,   555,   556,   557,   558,   559,   560,   986,   549,
     549,   549,   517,   549,   480,  1934,  1422,  1394,  1427,  1395,
    1428,   552,   553,   518,   519,   554,   555,   556,   557,   558,
     559,   560,   549,   100,   520,  1406,   549,   549,   521,  1434,
    1409,  1410,   522,  1429,  1435,  1414,  1415,   523,   549,  1418,
     524,   525,  1420,  1024,  1421,  1438,   526,  1423,  1030,   527,
     528,   549,  1033,  1425,   549,   483,  1491,  1426,  1441,   549,
     549,  1443,  1430,   583,   549,  1433,  1447,  1448,   549,  1436,
    1437,  1451,  1439,   549,   549,  1454,  1440,   598,  1442,   101,
    1456,  1461,  1446,   549,  1407,  1408,  1450,   549,   529,   549,
    1463,   549,   530,  1453,  1431,   549,  1465,   549,  1474,  1457,
     531,  1459,  1444,  1460,  1476,  1462,   532,  1464,   549,  1466,
     533,  1467,   605,  1468,   534,  1483,   549,  1469,   561,   562,
     563,   564,   549,  1504,  1131,   536,  1132,   549,   549,  1506,
     549,  1480,  1481,   549,  1507,  1512,   549,  1513,   549,  1099,
    1562,   582,   608,  1565,   549,  1567,   584,   561,   562,   563,
     564,  1568,   549,  1487,   596,  1488,  1501,  1502,   597,  1570,
     549,  1503,   549,   549,   611,   100,   612,  1572,   549,  1573,
    1577,   561,   562,   563,   564,  1580,  1509,  1520,   603,  1521,
     604,   729,   543,   544,   545,   546,   547,   548,  1553,  1554,
     624,   549,   543,   544,   545,   546,   547,   548,  1585,   626,
     663,   668,   552,   553,   673,  1539,   554,   555,   556,   557,
     558,   559,   560,   549,   693,   704,  1540,  1541,   552,   553,
    1586,   101,   554,   555,   556,   557,   558,   559,   560,   737,
     739,   743,   549,   549,   749,   748,  1558,  1559,  1561,  1588,
    1589,  1563,  1564,   549,  1566,   771,   549,  1569,   549,  1571,
    1591,   549,  1574,  1595,   549,  1603,  1578,   549,  1607,  1581,
    1583,  1609,   800,  1587,  1610,   549,   860,   549,  1592,  1593,
    1594,   549,  1613,  1597,  1616,   549,  1600,  1602,  1617,   861,
     899,   867,  1618,   552,   553,   897,  1611,   554,   555,   556,
     557,   558,   559,   560,   898,  1619,  1620,  1621,   900,  1623,
    1624,  1625,   901,  1627,   902,   552,   553,   903,  1631,   554,
     555,   556,   557,   558,   559,   560,   904,   543,   544,   545,
     546,   547,   548,  1644,   905,   549,   549,   229,   910,  1647,
    1649,  1650,  1629,  1630,   549,  1653,  1654,  1655,  1656,   549,
     251,  1645,   913,   924,   260,   920,  1452,   264,  1059,   549,
    1659,   944,   281,   281,   281,   285,  1472,   950,  1662,   549,
    1025,  1663,   561,   562,   563,   564,  1646,   576,  1026,   549,
     599,  1031,  1032,  1034,  1041,  1674,  1664,   549,   561,   562,
     563,   564,   549,  1042,  1680,   549,   985,  1683,  1043,  1682,
    1685,  1044,  1684,   549,   549,  1689,  1055,   549,  1691,   549,
    1686,  1694,  1693,  1760,  1704,  1696,  1728,   281,   549,  1058,
     549,  1699,   549,  1700,  1701,  1729,  1703,  1734,  1060,  1748,
    1705,  1066,  1067,  1068,   552,   553,  1069,   418,   554,   555,
     556,   557,   558,   559,   560,  1718,  1070,  1071,  1721,  1117,
     549,   549,  1072,   561,   562,   563,   564,  1749,  1750,   432,
    1073,  1028,  1101,   549,  1732,  1733,   549,  1735,  1736,  1737,
    1772,   560,   549,  1777,  1150,   561,   562,   563,   564,  1779,
    1746,  1747,  1175,  1061,   549,  1178,  1196,  1197,   552,   553,
    1198,  1709,   554,   555,   556,   557,   558,   559,   560,  1758,
     543,   544,   545,   546,   547,   548,  1832,   549,  1199,  1835,
    1200,   549,  1203,   549,  1781,  1769,  1204,  1771,  1784,  1773,
    1787,  1774,   100,   552,   553,  1201,  1202,   554,   555,   556,
     557,   558,   559,   560,   549,   549,   549,   549,   549,  1791,
     549,  1788,  1790,  1804,  1807,  1818,   549,  1827,  1210,   549,
     549,   540,   542,  1841,  1805,  1806,  1843,  1867,  1222,   549,
     549,   549,  1228,  1814,  1815,  1816,  1873,  1892,  1895,  1819,
    1877,  1232,   549,  1878,   549,   577,  1237,  1240,   101,  1904,
     549,  1919,   589,  1828,  1829,  1830,   549,  1920,  1244,  1245,
    1247,   549,  1251,  1944,   561,   562,   563,   564,  1949,  1837,
    1257,  1268,  1062,  1274,  1284,   609,  1286,  1842,  1307,  1326,
    1844,  1845,  1846,  1847,  1848,   100,  1327,   763,   100,  1851,
    1380,  1853,  1381,  1855,  1382,  1857,  1383,  1393,  1916,  1384,
    1385,  1386,  1860,  1401,  1402,  1403,  1864,  1484,  1411,  1866,
    1445,  1470,  1868,  1475,  1478,  1479,  1870,  1489,   561,   562,
     563,   564,  1511,  1875,  1543,  1876,  1063,   549,  1544,    -4,
    1548,  1632,  1879,  1556,  1719,  1633,  1557,  1634,  1739,  1667,
    1673,   101,   666,  1677,   101,  1678,  1890,  1762,  1891,   100,
    1731,  1740,   100,   561,   562,   563,   564,  1764,  -505,  1766,
    1820,  1084,  1821,  1822,  1941,  1315,  1874,  1902,   286,   287,
    1514,   937,  1906,   766,  1171,  1317,  1174,  1909,  1910,  1911,
     706,   708,   710,  1824,  1665,  1943,   935,   716,   926,  1396,
    1840,  1917,     0,     0,     0,     0,     0,  1921,     0,     0,
    1923,     0,  1924,   734,     0,   101,     0,   100,   101,  1926,
       0,   740,  1928,     0,     0,     0,   745,     0,     0,     0,
     750,     0,     0,     0,  1936,  1937,   756,   757,   552,   758,
     281,   281,   554,   555,   556,   557,   558,   559,   560,     0,
       0,     0,     0,  1945,     0,  1947,     0,     0,     0,     0,
       0,  1950,   785,     0,  1952,     0,  1953,     0,     0,     0,
       0,     0,     0,   101,   552,   553,     0,     0,   554,   555,
     556,   557,   558,   559,   560,   807,     0,     0,   812,     0,
       0,   815,   816,   817,   818,   819,   820,   821,   822,   823,
     824,   281,   826,   827,   828,   829,   830,   832,     0,     0,
       0,     0,     0,   838,   839,   840,   842,   843,     0,   845,
       0,   847,   554,   555,   556,   557,   558,   559,   560,   552,
     553,   281,     0,   554,   555,   556,   557,   558,   559,   560,
       0,     0,     0,     0,   388,   552,   553,     0,     0,   554,
     555,   556,   557,   558,   559,   560,     0,     0,     0,     0,
     886,   887,   888,   889,   890,   891,   892,   893,   894,   895,
     896,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   389,   390,     0,     0,     0,     0,   912,     0,
       0,     0,     0,   915,     0,     0,     0,     0,   561,   562,
     563,   564,     0,   391,     0,   931,     0,     0,     0,     0,
     392,     0,     0,     0,     0,   552,   553,     0,   941,   554,
     555,   556,   557,   558,   559,   560,     0,   123,   124,   125,
       0,   126,   127,     0,   561,   562,   563,   564,     0,     0,
       0,     0,  1098,   393,   394,   395,     0,   396,     0,     0,
       0,   397,   128,   129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   561,   562,
     563,   564,     0,     0,     0,   131,   132,   133,   134,   561,
     562,   563,   564,     0,     0,     0,     0,  1102,     0,   135,
       0,     0,   136,     0,  1013,   561,   562,   563,   564,   137,
     138,  1020,   139,  1021,     0,  1022,     0,   140,     0,     0,
     141,   142,     0,     0,   143,   144,   145,     0,     0,     0,
     146,   147,  1038,     0,     0,   148,     0,   149,     0,   150,
       0,   151,  1048,  1050,     0,   152,   153,   154,     0,     0,
       0,     0,   155,   156,     0,     0,     0,   157,     0,     0,
     158,   159,   160,   161,     0,   162,   163,   164,     0,     0,
     165,     0,   166,   167,     0,   561,   562,   563,   564,   168,
       0,     0,     0,  1122,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,     0,   212,   213,
     214,   215,   216,   217,   218,   219,     0,   220,   221,     0,
     222,   223,   224,     0,     0,   225,     0,     0,     0,     0,
     226,     0,   552,   553,   279,     0,   554,   555,   556,   557,
     558,   559,   560,     0,     0,     0,   552,   553,     0,     0,
     554,   555,   556,   557,   558,   559,   560,     0,     0,   552,
     553,     0,     0,   554,   555,   556,   557,   558,   559,   560,
    1167,  1168,     0,     0,     0,     0,     0,   552,   553,     0,
       0,   554,   555,   556,   557,   558,   559,   560,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1180,
       0,     0,     0,     0,     0,  1187,  1188,     0,     0,  1191,
       0,   552,   553,     0,     0,   554,   555,   556,   557,   558,
     559,   560,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1213,     0,  1215,     0,     0,  1218,     0,
    1221,     0,  1224,  1226,  1227,     0,     0,  1230,  1231,     0,
       0,     0,  1236,     0,  1239,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1249,  1250,     0,     0,     0,
       0,   931,     0,     0,     0,     0,     0,  1260,     0,     0,
    1264,  1265,     0,     0,     0,     0,  1270,  1271,     0,  1273,
       0,  1275,   561,   562,   563,   564,     0,     0,     0,     0,
    1129,     0,  1285,     0,  1287,     0,   561,   562,   563,   564,
       0,     0,  1295,  1297,  1130,     0,     0,     0,  1302,   561,
     562,   563,   564,     0,     0,     0,     0,  1179,  1312,  1313,
    1314,     0,   118,   125,     0,   119,   127,   561,   562,   563,
     564,   745,  1318,     0,  1320,  1206,     0,  1321,  1322,  1323,
       0,     0,     0,     0,     0,     0,     0,   129,  1328,  1329,
       0,     0,     0,     0,  1334,  1335,     0,  1338,     0,     0,
    1341,   561,   562,   563,   564,  1346,     0,  1348,     0,  1282,
       0,     0,  1353,     0,  1355,     0,     0,     0,  1359,     0,
       0,     0,     0,     0,     0,     0,     0,  1362,     0,     0,
    1363,     0,     0,     0,     0,     0,     0,     0,  1364,     0,
       0,     0,  1365,  1366,  1367,  1368,  1369,     0,     0,     0,
       0,     0,     0,     0,  1371,   142,     0,     0,   143,   236,
     237,     0,     0,     0,   146,     0,     0,     0,     0,   238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     239,   240,     0,     0,     0,     0,   155,   156,     0,     0,
       0,     0,     0,     0,     0,  1391,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   241,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   242,   281,
     281,   552,   553,     0,     0,   554,   555,   556,   557,   558,
     559,   560,     0,     0,     0,     0,     0,     0,   189,   190,
     191,     0,     0,   194,   195,   196,     0,   198,     0,   200,
     201,   202,   203,   204,   205,     0,     0,   208,     0,     0,
     211,     0,   212,   213,     0,   215,     0,   217,     0,   219,
       0,     0,   221,     0,   222,     0,   224,     0,     0,     0,
       0,     0,     0,     0,   243,     0,     0,     0,     0,     0,
       0,     0,   552,   553,     0,     0,   554,   555,   556,   557,
     558,   559,   560,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   297,     0,  1482,   303,   305,   308,   314,   319,
       0,   325,   327,     0,   333,   336,   338,   342,   344,   347,
     348,     0,   352,   360,   367,     0,     0,   372,     0,     0,
       0,   379,   381,   383,     0,     0,     0,     0,   399,     0,
       0,     0,     0,     0,     0,   552,   553,     0,     0,   554,
     555,   556,   557,   558,   559,   560,     0,     0,     0,     0,
       0,   561,   562,   563,   564,     0,     0,   552,   553,  1308,
       0,   554,   555,   556,   557,   558,   559,   560,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1547,     0,
       0,     0,     0,  1551,   552,   553,     0,     0,   554,   555,
     556,   557,   558,   559,   560,     0,     0,     0,  1560,     0,
       0,     0,     0,     0,     0,     0,   472,     0,     0,     0,
       0,     0,     0,     0,  1575,  1576,     0,     0,  1579,     0,
    1582,  1584,   561,   562,   563,   564,     0,  1590,     0,     0,
    1392,     0,     0,  1596,  1598,  1599,     0,  1601,     0,     0,
    1604,  1605,  1606,     0,  1608,     0,     0,  1612,     0,  1614,
       0,  1615,     0,     0,     0,     0,     0,     0,     0,  1622,
       0,     0,     0,  1626,     0,     0,   535,     0,     0,     0,
       0,     0,     0,     0,  1635,     0,  1640,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1648,     0,     0,  1651,  1652,   561,   562,   563,   564,     0,
    1657,     0,     0,  1397,     0,     0,     0,  1658,     0,     0,
       0,     0,     0,     0,  1660,     0,  1661,   561,   562,   563,
     564,     0,     0,     0,     0,  1417,     0,     0,   577,     0,
       0,     0,     0,     0,  1672,     0,     0,   613,     0,     0,
       0,     0,   617,     0,   561,   562,   563,   564,   623,     0,
       0,     0,  1424,  1687,  1688,   552,   553,     0,  1690,   554,
     555,   556,   557,   558,   559,   560,     0,     0,     0,     0,
       0,  1698,   552,   553,     0,     0,   554,   555,   556,   557,
     558,   559,   560,     0,     0,     0,     0,     0,     0,  1711,
       0,     0,   667,  1715,     0,  1717,     0,     0,     0,     0,
       0,     0,  1724,  1725,  1726,     0,     0,     0,   552,   553,
       0,     0,   554,   555,   556,   557,   558,   559,   560,   552,
     553,     0,     0,   554,   555,   556,   557,   558,   559,   560,
       0,     0,     0,     0,   712,   713,   714,     0,   717,   718,
       0,   720,   721,   722,     0,     0,     0,     0,     0,     0,
     552,   553,     0,  1761,   554,   555,   556,   557,   558,   559,
     560,     0,     0,     0,   552,   553,     0,  1770,   554,   555,
     556,   557,   558,   559,   560,     0,     0,     0,  1780,     0,
    1782,  1783,     0,  1785,     0,     0,     0,     0,  1789,     0,
       0,     0,  1792,  1793,  1794,  1795,  1796,     0,  1798,  1799,
    1800,     0,  1802,     0,     0,     0,     0,     0,  1808,  1809,
       0,     0,     0,  1813,     0,   561,   562,   563,   564,     0,
       0,     0,     0,  1432,     0,   808,     0,   811,     0,  1825,
       0,     0,   561,   562,   563,   564,     0,  1831,     0,     0,
    1449,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1838,  1839,     0,     0,     0,   552,   553,     0,     0,
     554,   555,   556,   557,   558,   559,   560,  1850,   561,   562,
     563,   564,     0,  1854,     0,     0,  1455,     0,     0,   561,
     562,   563,   564,     0,     0,     0,     0,  1458,     0,  1865,
       0,     0,     0,     0,     0,     0,  1869,     0,  1871,   552,
     553,     0,     0,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,     0,     0,     0,     0,  1471,     0,
       0,     0,     0,     0,   561,   562,   563,   564,     0,     0,
       0,     0,  1473,     0,     0,  1893,     0,     0,  1896,     0,
       0,     0,  1898,     0,  1899,  1900,     0,  1901,   932,  1903,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   945,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1918,   955,     0,     0,     0,     0,
    1922,   959,     0,   123,   124,   125,   963,   126,   127,     0,
     967,  1927,   969,     0,  1929,     0,     0,     0,   974,     0,
       0,   975,     0,   977,     0,     0,     0,   981,   128,   129,
       0,  1939,     0,     0,     0,   988,   561,   562,   563,   564,
       0,     0,     0,     0,  1477,     0,     0,   998,     0,     0,
    1948,     0,     0,     0,  1004,     0,     0,     0,     0,     0,
       0,   131,   132,   133,   134,     0,  1015,     0,  1017,     0,
       0,     0,     0,     0,     0,   135,     0,     0,   136,   561,
     562,   563,   564,     0,     0,   137,   138,  1505,   139,     0,
       0,  1037,     0,   140,     0,     0,   141,   142,     0,     0,
     143,   144,   145,     0,     0,     0,   146,   147,     0,     0,
       0,   148,     0,   149,     0,   150,     0,   151,     0,     0,
       0,   152,   153,   154,     0,     0,     0,     0,   155,   156,
       0,     0,     0,   157,     0,     0,   158,   159,   160,   161,
       0,   162,   163,   164,     0,     0,   165,     0,   166,   167,
       0,     0,     0,     0,     0,   168,     0,     0,     0,     0,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,     0,   212,   213,   214,   215,   216,   217,
     218,   219,     0,   220,   221,     0,   222,   223,   224,     0,
       0,   225,     0,     0,     0,     0,   226,   733,     0,     0,
       0,     0,     0,     0,  1160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,   124,   125,     0,
     126,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   131,   132,   133,   134,  1207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   136,     0,     0,     0,     0,     0,     0,   137,   138,
       0,   139,     0,     0,     0,     0,   140,     0,     0,   141,
     142,     0,     0,   143,   144,   145,     0,     0,     0,   146,
     147,     0,  1256,     0,   148,     0,   149,     0,   150,     0,
     151,     0,     0,     0,   152,   153,   154,     0,     0,     0,
       0,   155,   156,     0,     0,     0,   157,     0,     0,   158,
     159,   160,   161,     0,   162,   163,   164,     0,     0,   165,
    1293,   166,   167,     0,     0,     0,  1300,     0,   168,  1303,
    1304,     0,     0,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,     0,   212,   213,   214,
     215,   216,   217,   218,   219,     0,   220,   221,     0,   222,
     223,   224,     0,     0,   225,  1356,     0,     0,     0,   226,
     831,   123,   124,   125,     0,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,     0,     0,     0,   226,   841,   123,   124,   125,     0,
     126,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   131,   132,   133,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   136,     0,     0,     0,     0,     0,     0,   137,   138,
       0,   139,     0,     0,   353,     0,   140,     0,     0,   141,
     142,     0,     0,   143,   144,   145,   354,   355,     0,   146,
     147,     0,     0,     0,   148,     0,   149,     0,   150,     0,
     151,     0,     0,     0,   152,   153,   154,     0,   356,     0,
       0,   155,   156,     0,     0,   357,   157,   358,   359,   158,
     159,   160,   161,     0,   162,   163,   164,     0,     0,   165,
       0,   166,   167,     0,     0,  1628,     0,     0,   168,     0,
       0,     0,     0,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,     0,   212,   213,   214,
     215,   216,   217,   218,   219,     0,   220,   221,     0,   222,
     223,   224,     0,     0,   225,     0,     0,     0,     0,   226,
       0,     0,     0,     0,     0,     0,     0,     0,   552,   553,
       0,     0,   554,   555,   556,   557,   558,   559,   560,     0,
       0,   123,   124,   125,     0,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   361,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,   362,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,   363,   364,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,   365,     0,     0,     0,   155,   156,     0,     0,
     366,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,   561,   562,
     563,   564,     0,   168,     0,     0,  1508,  1817,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,   309,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,   310,   311,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,   312,     0,     0,   155,   156,     0,     0,
     313,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,   315,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,   316,   317,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
     318,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   329,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,   330,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,   331,     0,     0,   146,   147,     0,     0,   332,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   322,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   323,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   324,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,   339,   340,     0,   146,   147,     0,     0,   341,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   301,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
     302,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,   306,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   307,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,   334,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,   335,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,   345,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,   346,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
     296,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   304,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   326,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   337,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   351,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   371,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   378,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   380,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   382,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,   398,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   226,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   705,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,     0,   155,   156,     0,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,     0,     0,   225,
       0,   123,   124,   125,   707,   126,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,     0,   136,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,     0,     0,     0,
       0,   140,     0,     0,   141,   142,     0,     0,   143,   144,
     145,     0,     0,     0,   146,   147,     0,     0,     0,   148,
       0,   149,     0,   150,     0,   151,     0,     0,     0,   152,
     153,   154,     0,     0,     0,   125,   155,   156,   127,     0,
       0,   157,     0,     0,   158,   159,   160,   161,     0,   162,
     163,   164,     0,     0,   165,     0,   166,   167,     0,   129,
       0,     0,     0,   168,     0,     0,     0,     0,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,     0,   212,   213,   214,   215,   216,   217,   218,   219,
       0,   220,   221,     0,   222,   223,   224,   142,     0,   225,
     143,   236,   237,     0,   709,     0,   146,     0,     0,     0,
       0,   238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   239,   240,     0,     0,     0,   125,   155,   156,
     127,     0,     0,     0,     0,   552,   553,     0,   160,   554,
     555,   556,   557,   558,   559,   560,     0,     0,     0,   241,
       0,   129,     0,     0,     0,   168,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   190,   191,     0,     0,   194,   195,   196,     0,   198,
       0,   200,   201,   202,   203,   204,   205,     0,     0,   208,
       0,     0,   211,     0,   212,   213,     0,   215,     0,   217,
       0,   219,     0,     0,   221,     0,   222,     0,   224,   142,
       0,     0,   143,   236,   237,     0,   243,  1162,   146,     0,
       0,     0,   299,   238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239,   240,     0,     0,     0,   125,
     155,   156,   127,     0,     0,     0,     0,   552,   553,     0,
     160,   554,   555,   556,   557,   558,   559,   560,     0,     0,
       0,   241,     0,   129,     0,     0,     0,   168,     0,     0,
       0,     0,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   561,   562,   563,   564,     0,
       0,  1045,   189,   190,   191,     0,     0,   194,   195,   196,
       0,   198,     0,   200,   201,   202,   203,   204,   205,     0,
       0,   208,     0,     0,   211,     0,   212,   213,     0,   215,
       0,   217,     0,   219,     0,     0,   221,     0,   222,     0,
     224,   142,     0,     0,   143,   236,   237,     0,   243,     0,
     146,     0,   552,   553,     0,   238,   554,   555,   556,   557,
     558,   559,   560,     0,     0,     0,   239,   240,     0,     0,
       0,     0,   155,   156,     0,     0,     0,   125,     0,     0,
     127,     0,   160,     0,     0,     0,     0,     0,     0,   320,
       0,     0,     0,   241,     0,     0,     0,     0,     0,   168,
       0,   129,     0,     0,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   561,   562,   563,
     564,     0,     0,  1057,   189,   190,   191,     0,     0,   194,
     195,   196,   368,   198,     0,   200,   201,   202,   203,   204,
     205,     0,     0,   208,     0,     0,   211,     0,   212,   213,
       0,   215,     0,   217,     0,   219,     0,     0,   221,     0,
     222,     0,   224,     0,     0,     0,     0,     0,     0,   142,
     243,     0,   143,   236,   237,     0,     0,     0,   146,     0,
       0,     0,     0,   238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239,   240,     0,     0,     0,   125,
     155,   156,   127,     0,     0,     0,     0,     0,     0,     0,
     160,     0,   561,   562,   563,   564,     0,     0,     0,     0,
    1510,   241,     0,   129,     0,     0,     0,   168,     0,     0,
       0,     0,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,   190,   191,     0,     0,   194,   195,   196,
       0,   198,     0,   200,   201,   202,   203,   204,   205,     0,
       0,   208,     0,     0,   211,     0,   212,   213,     0,   215,
       0,   217,     0,   219,     0,     0,   221,     0,   222,     0,
     224,   142,     0,     0,   143,   236,   237,     0,   243,     0,
     146,     0,     0,     0,   374,   238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   239,   240,     0,     0,
       0,   125,   155,   156,   127,     0,     0,     0,     0,   552,
     553,     0,   160,   554,   555,   556,   557,   558,   559,   560,
       0,     0,     0,   241,     0,   129,     0,     0,     0,   168,
       0,     0,     0,     0,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,   190,   191,     0,     0,   194,
     195,   196,     0,   198,     0,   200,   201,   202,   203,   204,
     205,     0,     0,   208,     0,     0,   211,     0,   212,   213,
       0,   215,     0,   217,     0,   219,     0,     0,   221,     0,
     222,     0,   224,   142,     0,     0,   143,   236,   237,     0,
     243,     0,   146,     0,     0,     0,   376,   238,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   239,   240,
       0,     0,     0,   125,   155,   156,   127,     0,     0,     0,
       0,   552,   553,     0,   160,   554,   555,   556,   557,   558,
     559,   560,     0,     0,     0,   241,     0,   129,     0,     0,
       0,   168,     0,     0,     0,     0,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   561,
     562,   563,   564,     0,     0,  1105,   189,   190,   191,     0,
       0,   194,   195,   196,     0,   198,     0,   200,   201,   202,
     203,   204,   205,     0,     0,   208,     0,     0,   211,     0,
     212,   213,     0,   215,     0,   217,     0,   219,     0,     0,
     221,     0,   222,     0,   224,   142,     0,     0,   143,   236,
     237,     0,   243,     0,   146,     0,     0,     0,     0,   238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     239,   240,     0,     0,     0,   125,   155,   156,   127,     0,
       0,     0,     0,   552,   553,     0,   160,   554,   555,   556,
     557,   558,   559,   560,     0,     0,     0,   241,     0,   129,
       0,     0,     0,   168,     0,     0,     0,     0,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   561,   562,   563,   564,     0,     0,  1106,   189,   190,
     191,     0,     0,   194,   195,   196,     0,   198,     0,   200,
     201,   202,   203,   204,   205,     0,     0,   208,     0,     0,
     211,     0,   212,   213,     0,   215,     0,   217,     0,   219,
       0,     0,   221,     0,   222,     0,   224,   142,     0,     0,
     143,   236,   237,     0,   243,     0,   146,     0,     0,     0,
       0,   238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   239,   240,     0,     0,     0,   125,   155,   156,
     127,     0,     0,     0,     0,   552,   553,     0,   160,   554,
     555,   556,   557,   558,   559,   560,     0,     0,     0,   241,
       0,   129,     0,     0,     0,   168,     0,     0,     0,     0,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   561,   562,   563,   564,     0,     0,  1107,
     189,   190,   191,     0,     0,   194,   195,   196,     0,   198,
       0,   200,   201,   202,   203,   204,   205,     0,     0,   208,
       0,     0,   211,     0,   212,   213,     0,   215,     0,   217,
       0,   219,     0,     0,   221,     0,   222,     0,   224,   142,
       0,     0,   143,   236,   237,     0,   870,     0,   146,     0,
       0,     0,     0,   238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239,   240,     0,     0,     0,     0,
     155,   156,     0,     0,     0,     0,     0,     0,     0,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,     0,     0,     0,     0,     0,   168,     0,     0,
       0,     0,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   561,   562,   563,   564,     0,
       0,  1108,   189,   190,   191,     0,     0,   194,   195,   196,
       0,   198,     0,   200,   201,   202,   203,   204,   205,     0,
       0,   208,     0,     0,   211,     0,   212,   213,     0,   215,
       0,   217,     0,   219,     0,     0,   221,     0,   222,     0,
     224,     1,     2,     3,     0,     0,     4,     0,  1184,     0,
       5,     0,     6,     0,     7,     8,     9,    10,    11,  -459,
       0,    12,    13,    14,    15,    16,    17,    18,    19,     0,
      20,    21,    22,     0,     0,     0,     0,    23,     0,     0,
      24,     0,     0,     0,     0,     0,    25,    26,    27,    28,
      29,    30,    31,     0,     0,    32,   552,   553,     0,     0,
     554,   555,   556,   557,   558,   559,   560,     0,     0,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,    39,
      40,    41,     0,     0,    42,    43,     0,     0,    44,     0,
      45,     0,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,    54,     0,    55,    56,    57,     0,    58,     0,
      59,    60,    61,    62,    63,    64,    65,     0,    66,    67,
      68,     0,     0,    69,    70,    71,    72,     0,    73,     0,
      74,     0,     0,    75,    76,     0,    77,     0,     0,     0,
      78,     0,     0,    79,    80,     0,    81,    82,     0,     0,
       0,     0,     0,    83,   552,   553,    84,    85,   554,   555,
     556,   557,   558,   559,   560,   552,   553,     0,     0,   554,
     555,   556,   557,   558,   559,   560,     0,    86,    87,    88,
     552,   553,     0,    89,   554,   555,   556,   557,   558,   559,
     560,     0,     0,     0,     0,     0,     0,    90,   552,   553,
      91,     0,   554,   555,   556,   557,   558,   559,   560,     0,
       0,     0,     0,    92,     0,     0,   561,   562,   563,   564,
       0,   552,   553,     0,  1681,   554,   555,   556,   557,   558,
     559,   560,   552,   553,     0,     0,   554,   555,   556,   557,
     558,   559,   560,   552,   553,     0,     0,   554,   555,   556,
     557,   558,   559,   560,   552,   553,     0,     0,   554,   555,
     556,   557,   558,   559,   560,   552,   553,     0,     0,   554,
     555,   556,   557,   558,   559,   560,   552,   553,     0,     0,
     554,   555,   556,   557,   558,   559,   560,   552,   553,     0,
       0,   554,   555,   556,   557,   558,   559,   560,   552,   553,
       0,     0,   554,   555,   556,   557,   558,   559,   560,     0,
       0,     0,     0,     0,   561,   562,   563,   564,     0,     0,
       0,     0,  1692,     0,     0,   561,   562,   563,   564,     0,
       0,     0,     0,  1695,     0,     0,     0,     0,     0,     0,
     561,   562,   563,   564,     0,   552,   553,     0,  1697,   554,
     555,   556,   557,   558,   559,   560,     0,     0,   561,   562,
     563,   564,     0,   552,   553,     0,  1702,   554,   555,   556,
     557,   558,   559,   560,     0,     0,     0,     0,     0,     0,
       0,   561,   562,   563,   564,     0,     0,     0,     0,  1706,
       0,     0,   561,   562,   563,   564,     0,     0,     0,     0,
    1707,     0,     0,   561,   562,   563,   564,     0,     0,     0,
       0,  1708,     0,     0,   561,   562,   563,   564,     0,     0,
       0,     0,  1710,     0,     0,   561,   562,   563,   564,     0,
       0,     0,     0,  1712,     0,     0,   561,   562,   563,   564,
       0,     0,     0,     0,  1713,     0,     0,   561,   562,   563,
     564,     0,     0,     0,     0,  1714,     0,     0,   561,   562,
     563,   564,     0,   552,   553,     0,  1716,   554,   555,   556,
     557,   558,   559,   560,   552,   553,     0,     0,   554,   555,
     556,   557,   558,   559,   560,   552,   553,     0,     0,   554,
     555,   556,   557,   558,   559,   560,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   561,   562,   563,   564,     0,
     552,   553,     0,  1720,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,   563,   564,     0,   552,   553,
       0,  1722,   554,   555,   556,   557,   558,   559,   560,   552,
     553,     0,     0,   554,   555,   556,   557,   558,   559,   560,
     552,   553,     0,     0,   554,   555,   556,   557,   558,   559,
     560,   552,   553,     0,     0,   554,   555,   556,   557,   558,
     559,   560,   552,   553,     0,     0,   554,   555,   556,   557,
     558,   559,   560,   552,   553,     0,     0,   554,   555,   556,
     557,   558,   559,   560,   552,   553,     0,     0,   554,   555,
     556,   557,   558,   559,   560,   552,   553,     0,     0,   554,
     555,   556,   557,   558,   559,   560,     0,     0,     0,     0,
       0,     0,     0,   561,   562,   563,   564,     0,     0,     0,
       0,  1723,     0,     0,   561,   562,   563,   564,     0,     0,
       0,     0,  1727,     0,     0,   561,   562,   563,   564,     0,
     552,   553,     0,  1730,   554,   555,   556,   557,   558,   559,
     560,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     561,   562,   563,   564,     0,   552,   553,     0,  1751,   554,
     555,   556,   557,   558,   559,   560,     0,     0,   561,   562,
     563,   564,     0,     0,     0,     0,  1765,     0,     0,   561,
     562,   563,   564,     0,     0,     0,     0,  1775,     0,     0,
     561,   562,   563,   564,     0,     0,     0,     0,  1776,     0,
       0,   561,   562,   563,   564,     0,     0,     0,     0,  1778,
       0,     0,   561,   562,   563,   564,     0,     0,     0,     0,
    1786,     0,     0,   561,   562,   563,   564,     0,     0,     0,
       0,  1797,     0,     0,   561,   562,   563,   564,     0,     0,
       0,     0,  1801,     0,     0,   561,   562,   563,   564,     0,
     552,   553,     0,  1803,   554,   555,   556,   557,   558,   559,
     560,   552,   553,     0,     0,   554,   555,   556,   557,   558,
     559,   560,   552,   553,     0,     0,   554,   555,   556,   557,
     558,   559,   560,     0,     0,     0,     0,     0,     0,     0,
     561,   562,   563,   564,     0,   552,   553,     0,  1810,   554,
     555,   556,   557,   558,   559,   560,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   561,   562,   563,   564,     0,
     552,   553,     0,  1811,   554,   555,   556,   557,   558,   559,
     560,   552,   553,     0,     0,   554,   555,   556,   557,   558,
     559,   560,   552,   553,     0,     0,   554,   555,   556,   557,
     558,   559,   560,   552,   553,     0,     0,   554,   555,   556,
     557,   558,   559,   560,   552,   553,     0,     0,   554,   555,
     556,   557,   558,   559,   560,   552,   553,     0,     0,   554,
     555,   556,   557,   558,   559,   560,   552,   553,     0,     0,
     554,   555,   556,   557,   558,   559,   560,   552,   553,     0,
       0,   554,   555,   556,   557,   558,   559,   560,     0,     0,
     561,   562,   563,   564,     0,     0,     0,     0,  1812,     0,
       0,   561,   562,   563,   564,     0,     0,     0,     0,  1849,
       0,     0,   561,   562,   563,   564,     0,   552,   553,     0,
    1852,   554,   555,   556,   557,   558,   559,   560,     0,     0,
       0,     0,     0,     0,     0,   561,   562,   563,   564,     0,
     552,   553,     0,  1856,   554,   555,   556,   557,   558,   559,
     560,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     561,   562,   563,   564,     0,     0,     0,     0,  1858,     0,
       0,   561,   562,   563,   564,     0,     0,     0,     0,  1859,
       0,     0,   561,   562,   563,   564,     0,     0,     0,     0,
    1861,     0,     0,   561,   562,   563,   564,     0,     0,     0,
       0,  1862,     0,     0,   561,   562,   563,   564,     0,     0,
       0,     0,  1863,     0,     0,   561,   562,   563,   564,     0,
       0,     0,     0,  1872,     0,     0,   561,   562,   563,   564,
       0,     0,     0,     0,  1888,     0,     0,   561,   562,   563,
     564,     0,   552,   553,     0,  1894,   554,   555,   556,   557,
     558,   559,   560,   552,   553,     0,     0,   554,   555,   556,
     557,   558,   559,   560,   552,   553,     0,     0,   554,   555,
     556,   557,   558,   559,   560,     0,     0,   561,   562,   563,
     564,     0,   552,   553,     0,  1897,   554,   555,   556,   557,
     558,   559,   560,     0,     0,     0,     0,     0,     0,     0,
     561,   562,   563,   564,     0,   552,   553,     0,  1905,   554,
     555,   556,   557,   558,   559,   560,   552,   553,     0,     0,
     554,   555,   556,   557,   558,   559,   560,   552,   553,     0,
       0,   554,   555,   556,   557,   558,   559,   560,   552,   553,
       0,     0,   554,   555,   556,   557,   558,   559,   560,   552,
     553,     0,     0,   554,   555,   556,   557,   558,   559,   560,
     552,   553,     0,     0,   554,   555,   556,   557,   558,   559,
     560,   552,   553,     0,     0,   554,   555,   556,   557,   558,
     559,   560,   552,   553,     0,     0,   554,   555,   556,   557,
     558,   559,   560,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   561,   562,   563,   564,     0,     0,     0,     0,
    1907,     0,     0,   561,   562,   563,   564,     0,     0,     0,
       0,  1908,     0,     0,   561,   562,   563,   564,     0,   552,
     553,     0,  1925,   554,   555,   556,   557,   558,   559,   560,
       0,     0,   561,   562,   563,   564,     0,   552,   553,     0,
    1938,   554,   555,   556,   557,   558,   559,   560,     0,     0,
       0,     0,     0,     0,     0,   561,   562,   563,   564,     0,
       0,     0,     0,  1940,     0,     0,   561,   562,   563,   564,
       0,     0,     0,     0,  1946,     0,     0,   561,   562,   563,
     564,     0,     0,     0,     0,  1951,     0,     0,   561,   562,
     563,   564,     0,     0,  1109,     0,     0,     0,     0,   561,
     562,   563,   564,     0,     0,  1112,     0,     0,     0,     0,
     561,   562,   563,   564,     0,     0,  1115,     0,     0,     0,
       0,   561,   562,   563,   564,     0,     0,  1116,     0,     0,
       0,     0,   561,   562,   563,   564,   552,   553,  1118,     0,
     554,   555,   556,   557,   558,   559,   560,   552,   553,     0,
       0,   554,   555,   556,   557,   558,   559,   560,   552,   553,
       0,     0,   554,   555,   556,   557,   558,   559,   560,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   561,
     562,   563,   564,   552,   553,  1119,     0,   554,   555,   556,
     557,   558,   559,   560,     0,     0,     0,   561,   562,   563,
     564,   552,   553,  1120,     0,   554,   555,   556,   557,   558,
     559,   560,   552,   553,     0,     0,   554,   555,   556,   557,
     558,   559,   560,   552,   553,     0,     0,   554,   555,   556,
     557,   558,   559,   560,   552,   553,     0,     0,   554,   555,
     556,   557,   558,   559,   560,   552,   553,     0,     0,   554,
     555,   556,   557,   558,   559,   560,   552,   553,     0,     0,
     554,   555,   556,   557,   558,   559,   560,   552,   553,     0,
       0,   554,   555,   556,   557,   558,   559,   560,   552,   553,
       0,     0,   554,   555,   556,   557,   558,   559,   560,     0,
       0,     0,     0,     0,     0,     0,   561,   562,   563,   564,
       0,     0,  1121,     0,     0,     0,     0,   561,   562,   563,
     564,     0,     0,  1123,     0,     0,     0,     0,   561,   562,
     563,   564,   552,   553,  1133,     0,   554,   555,   556,   557,
     558,   559,   560,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   561,   562,   563,   564,   552,   553,  1134,
       0,   554,   555,   556,   557,   558,   559,   560,     0,     0,
       0,   561,   562,   563,   564,     0,     0,  1136,     0,     0,
       0,     0,   561,   562,   563,   564,     0,     0,  1139,     0,
       0,     0,     0,   561,   562,   563,   564,     0,     0,  1183,
       0,     0,     0,     0,   561,   562,   563,   564,     0,     0,
    1289,     0,     0,     0,     0,   561,   562,   563,   564,     0,
       0,  1290,     0,     0,     0,     0,   561,   562,   563,   564,
       0,     0,  1291,     0,     0,     0,     0,   561,   562,   563,
     564,     0,     0,  1400,     0,     0,     0,     0,   561,   562,
     563,   564,   552,   553,  1485,     0,   554,   555,   556,   557,
     558,   559,   560,   552,   553,     0,     0,   554,   555,   556,
     557,   558,   559,   560,   552,   553,     0,     0,   554,   555,
     556,   557,   558,   559,   560,     0,     0,     0,     0,     0,
       0,     0,   561,   562,   563,   564,   552,   553,  1486,     0,
     554,   555,   556,   557,   558,   559,   560,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   561,   562,   563,
     564,   552,   553,  1492,     0,   554,   555,   556,   557,   558,
     559,   560,   552,   553,     0,     0,   554,   555,   556,   557,
     558,   559,   560,   552,   553,     0,     0,   554,   555,   556,
     557,   558,   559,   560,   552,   553,     0,     0,   554,   555,
     556,   557,   558,   559,   560,   552,   553,     0,     0,   554,
     555,   556,   557,   558,   559,   560,   552,   553,     0,     0,
     554,   555,   556,   557,   558,   559,   560,   552,   553,     0,
       0,   554,   555,   556,   557,   558,   559,   560,   552,   553,
       0,     0,   554,   555,   556,   557,   558,   559,   560,     0,
       0,     0,   561,   562,   563,   564,     0,     0,  1493,     0,
       0,     0,     0,   561,   562,   563,   564,     0,     0,  1494,
       0,     0,     0,     0,   561,   562,   563,   564,   552,   553,
    1495,     0,   554,   555,   556,   557,   558,   559,   560,     0,
       0,     0,     0,     0,     0,     0,   561,   562,   563,   564,
     552,   553,  1499,     0,   554,   555,   556,   557,   558,   559,
     560,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   561,   562,   563,   564,     0,     0,  1500,     0,     0,
       0,     0,   561,   562,   563,   564,     0,     0,  1515,     0,
       0,     0,     0,   561,   562,   563,   564,     0,     0,  1516,
       0,     0,     0,     0,   561,   562,   563,   564,     0,     0,
    1517,     0,     0,     0,     0,   561,   562,   563,   564,     0,
       0,  1518,     0,     0,     0,     0,   561,   562,   563,   564,
       0,     0,  1519,     0,     0,     0,     0,   561,   562,   563,
     564,     0,     0,  1522,     0,     0,     0,     0,   561,   562,
     563,   564,   552,   553,  1523,     0,   554,   555,   556,   557,
     558,   559,   560,   552,   553,     0,     0,   554,   555,   556,
     557,   558,   559,   560,   552,   553,     0,     0,   554,   555,
     556,   557,   558,   559,   560,     0,     0,     0,   561,   562,
     563,   564,   552,   553,  1526,     0,   554,   555,   556,   557,
     558,   559,   560,     0,     0,     0,     0,     0,     0,     0,
     561,   562,   563,   564,   552,   553,  1546,     0,   554,   555,
     556,   557,   558,   559,   560,   552,   553,     0,     0,   554,
     555,   556,   557,   558,   559,   560,   552,   553,     0,     0,
     554,   555,   556,   557,   558,   559,   560,   552,   553,     0,
       0,   554,   555,   556,   557,   558,   559,   560,   552,   553,
       0,     0,   554,   555,   556,   557,   558,   559,   560,  -339,
    -339,     0,     0,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   561,   562,   563,   564,     0,     0,  1671,     0,
       0,     0,     0,   561,   562,   563,   564,     0,     0,  1675,
       0,     0,     0,     0,   561,   562,   563,   564,     0,     0,
    1738,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   561,   562,   563,   564,     0,     0,  1752,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   561,   562,   563,   564,     0,     0,
    1754,     0,     0,     0,     0,   561,   562,   563,   564,     0,
       0,  1755,     0,     0,     0,     0,   561,   562,   563,   564,
       0,     0,  1880,     0,     0,     0,     0,   561,   562,   563,
     564,     0,     0,  1887,     0,     0,     0,     0,   561,   562,
     563,   564,     0,     0,  1935,     0,     0,     0,     0,  -339,
    -339,  -339,  -339
};

static const yytype_int16 yycheck[] =
{
      15,   437,    10,    18,     9,    10,     0,    34,     4,  1189,
    1190,     7,    10,    28,   117,     4,    56,    10,     7,    10,
      35,    36,     4,     5,     3,    60,    70,    42,     7,     8,
      35,    56,    47,    48,    59,    60,    10,   112,    70,    54,
       3,   104,    57,    71,     7,     8,   222,    41,   112,    10,
      70,    71,   112,   229,    69,    70,     9,    14,    73,    74,
      16,   114,     0,   226,   112,    80,   112,   226,    83,    84,
      65,    66,    67,    68,    69,    70,    91,    60,    37,    38,
      82,    12,   405,   406,    26,    42,    42,    61,    62,    75,
      76,    65,    66,    67,    68,    69,    70,    71,   113,     4,
      61,    62,     7,    41,    65,    66,    67,    68,    69,    70,
      71,    42,    65,    66,    67,    68,    69,    70,   153,    68,
      69,    70,    71,   117,   110,   140,   141,   110,   227,    91,
     229,   146,    91,    65,    66,    67,    68,    69,    70,    23,
     215,   215,   227,   145,   229,   220,   220,   250,   110,    65,
      66,    67,    68,    69,    70,   215,   220,   220,    42,    50,
     220,    65,    66,    67,    68,    69,    70,   215,   222,   215,
     212,   222,   220,   215,   220,   229,   227,   212,   220,   117,
      57,   222,   226,     3,   222,   220,   227,     7,   229,   227,
     230,   229,   245,   246,   226,   223,   224,    94,   180,   181,
     182,   221,   222,   223,   224,   230,   130,   530,   223,   532,
     227,   226,   229,    66,   222,    68,    69,    70,    71,   222,
      42,   229,   222,   145,   227,    47,   229,   222,   243,   229,
     226,   229,   227,     0,   249,   215,   229,   226,   229,    71,
     220,   256,   221,   222,   222,   272,   273,   221,   222,   223,
     224,   229,   227,   226,   229,   229,   250,   222,   221,   222,
     221,   222,   223,   224,   229,    39,     4,     5,    42,   222,
       4,     5,   221,   222,   223,   224,   222,   292,   293,   226,
     295,   227,   222,   229,   299,   226,   301,   227,   222,   304,
     222,   306,   307,   227,   309,   310,   311,   312,   313,   222,
     315,   316,   317,   318,   227,   222,   222,   322,   323,   324,
     227,   326,   250,   229,   329,   330,   331,   332,   222,   334,
     335,   110,   337,   227,   339,   340,   341,   222,   343,    42,
     345,   346,   227,   226,   349,   350,   351,   226,   353,   354,
     355,   356,   357,   358,   359,    70,   361,   362,   363,   364,
     365,   366,    11,   368,    70,   222,   371,   222,   373,   374,
     227,   376,   229,   378,   229,   380,    22,   382,   221,   222,
     223,   224,  1552,   426,   427,  1555,   391,   222,   222,   394,
     226,   222,   227,   398,   229,   229,   227,   402,   403,   221,
     222,   223,   224,   408,   222,   222,   411,   222,     4,   227,
     227,   416,    61,    62,   229,   420,    65,    66,    67,    68,
      69,    70,    71,   222,   226,   222,   222,   214,   227,   434,
     229,   227,   229,   229,   439,   227,   226,   229,   443,   444,
     445,   446,   447,   448,   449,   226,   451,   452,   453,   454,
     455,   226,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   226,   469,   470,   471,   222,   473,   474,
     475,   476,   477,   478,   229,   480,   481,   222,   483,   484,
     222,   215,   227,   222,   229,   434,   435,   229,   581,   222,
     229,   226,    33,    34,     4,     5,   229,   502,   503,   504,
     505,   506,    69,    70,    71,   222,   226,   512,   226,   514,
     227,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   222,   222,   529,   226,   531,   215,   533,   229,
     229,   536,   537,   226,   539,     4,     5,   226,   543,   544,
     545,   546,   547,   548,   549,   220,   495,   140,   222,   222,
     222,    18,    19,   596,   597,   229,   229,   229,   222,   222,
     603,   604,   222,    44,   222,   229,   229,     4,     5,   229,
     222,   229,   221,   222,   223,   224,   525,   229,   222,   584,
      61,    62,   220,   227,    65,    66,    67,    68,    69,    70,
      71,   608,   228,   229,    61,    62,   220,   581,    65,    66,
      67,    68,    69,    70,    71,    44,   611,   222,   222,   219,
     222,   222,   227,   222,   619,   229,   621,   229,   229,   624,
     229,   626,    61,    62,     4,     5,    65,    66,    67,    68,
      69,    70,    71,    65,    66,    67,    68,    69,    70,    61,
      62,   220,   647,    65,    66,    67,    68,    69,    70,    71,
      80,    81,   222,   581,   221,   222,   223,   224,   663,   229,
     222,   220,   222,   668,   222,   222,   222,   229,   673,   229,
    1840,   229,   229,   229,    65,    66,    67,    68,    69,    70,
     222,   144,   222,   222,   220,   690,   691,   229,   693,   229,
     229,   696,   222,   220,   222,     4,     5,   227,   222,   704,
     705,   229,   707,    48,   709,   229,   711,    65,    66,    67,
      68,    69,    70,   222,   220,   144,    61,    62,   227,   724,
      65,    66,    67,    68,    69,    70,    71,  1153,   222,   222,
    1156,   736,   737,   222,   222,   229,   229,   222,   227,   227,
     221,   222,   223,   224,   229,    65,    66,    67,    68,    69,
      70,     4,     5,   226,   221,   222,   223,   224,    65,    66,
      67,    68,    69,    70,   769,   770,   771,   226,   222,    37,
      38,    61,    62,   227,   779,    65,    66,    67,    68,    69,
      70,    71,   221,   222,   223,   224,   222,   222,   226,   222,
     222,     4,     5,   229,   229,   800,   229,   229,   297,   221,
     222,   223,   224,   222,   222,   227,   222,   229,   211,   308,
     229,   229,   222,   229,   222,   314,   222,   222,   222,   229,
     319,   229,   222,   229,   229,   229,   325,   222,   327,   229,
     226,   222,   227,   222,   333,   222,   227,   336,   229,   338,
     229,   222,   229,   342,   222,   222,   222,   226,   229,   348,
     211,   229,   229,   229,   897,   898,   222,   900,   901,   222,
     222,   360,   222,   229,   222,   870,   229,   229,   367,   229,
     222,   229,    59,    60,   222,   227,   221,   222,   223,   224,
     379,   229,   381,   226,   226,    61,    62,   882,   883,    65,
      66,    67,    68,    69,    70,    71,   222,   222,   222,   222,
     399,   400,   222,   229,   229,   229,   229,   222,   222,   229,
     226,   916,   227,   227,   919,   222,    66,    67,    68,    69,
      70,    71,   229,   222,   226,   226,   226,   215,   222,   222,
     229,   221,   222,   223,   224,   229,   229,   227,   943,   944,
     222,   222,   947,   222,   215,   950,   222,   229,   229,   954,
     229,   956,   957,   229,   226,   960,   226,   222,   222,   964,
     965,   966,   222,   968,   229,   229,   971,   972,   973,   229,
     226,   976,   226,   978,   222,   222,   222,   982,   215,   984,
     985,   229,   229,   229,   989,   990,   222,   226,   993,   994,
     215,   996,   997,   229,   999,   222,   226,  1002,  1041,   222,
     226,   222,   229,  1008,   222,  1010,   229,  1012,   229,  1014,
     226,   229,    65,    66,    67,    68,    69,    70,   222,   226,
    1025,   222,  1027,  1028,  1029,   229,  1031,   222,   229,   226,
    1035,   222,   227,   226,  1039,  1040,   535,   226,   229,    65,
      66,    67,    68,    69,    70,   221,   222,   223,   224,   222,
    1055,   227,   222,   229,   226,   222,   229,   222,   222,   229,
    1065,  1066,   229,   222,   229,   229,   226,  1051,   222,  1074,
     229,   221,   222,   223,   224,   229,  1081,  1082,  1083,   222,
    1085,  1086,  1087,  1088,  1177,  1090,   229,  1092,  1093,   222,
    1095,   226,  1097,   215,   227,  1100,  1101,   226,  1103,  1104,
      65,    66,    67,    68,    69,    70,   226,   226,    65,    66,
      67,    68,    69,    70,   613,   222,   222,   222,   222,   222,
     222,   227,   229,  1051,   229,   229,   229,  1132,    61,    62,
     226,   226,    65,    66,    67,    68,    69,    70,    71,   222,
    1145,  1146,   222,   222,   222,   222,   229,  1152,   227,   229,
    1155,   229,   229,  1158,  1159,  1198,  1199,    61,    62,   226,
     226,    65,    66,    67,    68,    69,    70,    71,   667,   222,
     222,   222,   226,   222,   215,   227,   229,  1182,   229,  1184,
     229,    61,    62,   226,   226,    65,    66,    67,    68,    69,
      70,    71,   222,  1177,   226,  1200,   222,   222,   226,   229,
    1205,  1206,   226,   229,   229,  1210,  1211,   226,   222,  1214,
     226,   226,  1217,   712,  1219,   229,   226,  1222,   717,   226,
     226,   222,   721,  1228,   222,   215,  1319,  1232,   229,   222,
     222,   229,  1237,    56,   222,  1240,   229,   229,   222,  1244,
    1245,   229,  1247,   222,   222,   229,  1251,   229,  1253,  1177,
     229,   229,  1257,   222,  1203,  1204,  1261,   222,   226,   222,
     229,   222,   226,  1268,   229,   222,   229,   222,   229,  1274,
     226,  1276,   229,  1278,   229,  1280,   226,  1282,   222,  1284,
     226,  1286,   229,  1288,   226,   229,   222,  1292,   221,   222,
     223,   224,   222,   229,   227,   226,   229,   222,   222,   229,
     222,  1306,  1307,   222,   229,   229,   222,   229,   222,   808,
     229,   226,   229,   229,   222,   229,   226,   221,   222,   223,
     224,   229,   222,   227,   226,   229,  1331,  1332,   226,   229,
     222,  1336,   222,   222,   229,  1319,   229,   229,   222,   229,
     229,   221,   222,   223,   224,   229,  1351,   227,   226,   229,
     226,     5,    65,    66,    67,    68,    69,    70,  1401,  1402,
     229,   222,    65,    66,    67,    68,    69,    70,   229,   229,
     229,   229,    61,    62,   229,  1380,    65,    66,    67,    68,
      69,    70,    71,   222,   229,   229,  1381,  1382,    61,    62,
     229,  1319,    65,    66,    67,    68,    69,    70,    71,   229,
      41,   227,   222,   222,    70,   227,  1411,  1412,  1413,   229,
     229,  1416,  1417,   222,  1419,   226,   222,  1422,   222,  1424,
     229,   222,  1427,   229,   222,   229,  1431,   222,   229,  1434,
    1435,   229,   229,  1438,   229,   222,   227,   222,  1443,  1444,
    1445,   222,   229,  1448,   229,   222,  1451,  1452,   229,   227,
     229,   227,   229,    61,    62,   226,  1461,    65,    66,    67,
      68,    69,    70,    71,   226,  1470,  1471,  1472,   226,  1474,
    1475,  1476,   226,  1478,   229,    61,    62,   227,  1483,    65,
      66,    67,    68,    69,    70,    71,   227,    65,    66,    67,
      68,    69,    70,  1498,    41,   222,   222,    11,    44,  1504,
    1505,  1506,   229,   229,   222,  1510,  1511,  1512,  1513,   222,
      24,   229,   226,     8,    28,   226,   229,    31,   227,   222,
    1525,   229,    36,    37,    38,    39,   229,   229,  1533,   222,
     229,  1536,   221,   222,   223,   224,   229,  1542,   229,   222,
     229,   229,   229,   229,   226,  1550,   229,   222,   221,   222,
     223,   224,   222,   229,   229,   222,   229,  1562,   229,   229,
    1565,   229,   229,   222,   222,  1570,   229,   222,  1573,   222,
     229,   229,  1577,  1666,   229,  1580,   229,    91,   222,   226,
     222,  1586,   222,  1588,  1589,   229,  1591,   229,   227,   229,
    1595,   229,   227,   226,    61,    62,   226,   111,    65,    66,
      67,    68,    69,    70,    71,  1610,   227,   227,  1613,   227,
     222,   222,   229,   221,   222,   223,   224,   229,   229,   133,
     229,   229,   229,   222,  1629,  1630,   222,  1632,  1633,  1634,
     229,    71,   222,   229,   227,   221,   222,   223,   224,   229,
    1645,  1646,    41,   229,   222,    47,   227,   227,    61,    62,
     226,   229,    65,    66,    67,    68,    69,    70,    71,  1664,
      65,    66,    67,    68,    69,    70,  1759,   222,   226,  1762,
     229,   222,    79,   222,   229,  1680,    79,  1682,   229,  1684,
     229,  1686,  1666,    61,    62,   227,   227,    65,    66,    67,
      68,    69,    70,    71,   222,   222,   222,   222,   222,  1704,
     222,   229,   229,   229,   229,   229,   222,   229,   229,   222,
     222,   225,   226,   229,  1719,  1720,   229,   229,   229,   222,
     222,   222,   229,  1728,  1729,  1730,   229,   229,   229,  1734,
    1823,   229,   222,  1826,   222,   249,   229,   229,  1666,   229,
     222,   229,   256,  1748,  1749,  1750,   222,   229,   229,   229,
     229,   222,   229,   229,   221,   222,   223,   224,   229,  1764,
     229,   229,   229,   229,   229,   279,   229,  1772,   229,   227,
    1775,  1776,  1777,  1778,  1779,  1759,   227,     5,  1762,  1784,
     229,  1786,   229,  1788,   229,  1790,   227,    56,  1881,   227,
     227,   227,  1797,   226,   226,   229,  1801,   227,   229,  1804,
     229,   229,  1807,   229,   229,   229,  1811,   226,   221,   222,
     223,   224,   229,  1818,    41,  1820,   229,   222,    36,    41,
     226,    70,  1827,   227,   229,    70,   227,    70,   226,    46,
      56,  1759,   346,   227,  1762,   227,  1841,    45,  1843,  1823,
     229,   226,  1826,   221,   222,   223,   224,   226,    36,   226,
      70,   229,   227,   227,     4,  1051,   229,  1862,    41,    41,
    1359,   608,  1867,   437,   899,  1055,   902,  1872,  1873,  1874,
     384,   385,   386,  1742,  1542,  1933,   605,   391,   595,  1187,
    1768,  1886,    -1,    -1,    -1,    -1,    -1,  1892,    -1,    -1,
    1895,    -1,  1897,   407,    -1,  1823,    -1,  1881,  1826,  1904,
      -1,   415,  1907,    -1,    -1,    -1,   420,    -1,    -1,    -1,
     424,    -1,    -1,    -1,  1919,  1920,   430,   431,    61,   433,
     434,   435,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,  1938,    -1,  1940,    -1,    -1,    -1,    -1,
      -1,  1946,   456,    -1,  1949,    -1,  1951,    -1,    -1,    -1,
      -1,    -1,    -1,  1881,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,   479,    -1,    -1,   482,    -1,
      -1,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,    -1,    -1,
      -1,    -1,    -1,   507,   508,   509,   510,   511,    -1,   513,
      -1,   515,    65,    66,    67,    68,    69,    70,    71,    61,
      62,   525,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    -1,    51,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    -1,   582,    -1,
      -1,    -1,    -1,   587,    -1,    -1,    -1,    -1,   221,   222,
     223,   224,    -1,   110,    -1,   599,    -1,    -1,    -1,    -1,
     117,    -1,    -1,    -1,    -1,    61,    62,    -1,   612,    65,
      66,    67,    68,    69,    70,    71,    -1,     3,     4,     5,
      -1,     7,     8,    -1,   221,   222,   223,   224,    -1,    -1,
      -1,    -1,   229,   150,   151,   152,    -1,   154,    -1,    -1,
      -1,   158,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,
     223,   224,    -1,    -1,    -1,    61,    62,    63,    64,   221,
     222,   223,   224,    -1,    -1,    -1,    -1,   229,    -1,    75,
      -1,    -1,    78,    -1,   698,   221,   222,   223,   224,    85,
      86,   705,    88,   707,    -1,   709,    -1,    93,    -1,    -1,
      96,    97,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,   107,   726,    -1,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,   736,   737,    -1,   121,   122,   123,    -1,    -1,
      -1,    -1,   128,   129,    -1,    -1,    -1,   133,    -1,    -1,
     136,   137,   138,   139,    -1,   141,   142,   143,    -1,    -1,
     146,    -1,   148,   149,    -1,   221,   222,   223,   224,   155,
      -1,    -1,    -1,   229,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,    -1,   204,   205,
     206,   207,   208,   209,   210,   211,    -1,   213,   214,    -1,
     216,   217,   218,    -1,    -1,   221,    -1,    -1,    -1,    -1,
     226,    -1,    61,    62,   230,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
     884,   885,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   913,
      -1,    -1,    -1,    -1,    -1,   919,   920,    -1,    -1,   923,
      -1,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   947,    -1,   949,    -1,    -1,   952,    -1,
     954,    -1,   956,   957,   958,    -1,    -1,   961,   962,    -1,
      -1,    -1,   966,    -1,   968,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   979,   980,    -1,    -1,    -1,
      -1,   985,    -1,    -1,    -1,    -1,    -1,   991,    -1,    -1,
     994,   995,    -1,    -1,    -1,    -1,  1000,  1001,    -1,  1003,
      -1,  1005,   221,   222,   223,   224,    -1,    -1,    -1,    -1,
     229,    -1,  1016,    -1,  1018,    -1,   221,   222,   223,   224,
      -1,    -1,  1026,  1027,   229,    -1,    -1,    -1,  1032,   221,
     222,   223,   224,    -1,    -1,    -1,    -1,   229,  1042,  1043,
    1044,    -1,     4,     5,    -1,     7,     8,   221,   222,   223,
     224,  1055,  1056,    -1,  1058,   229,    -1,  1061,  1062,  1063,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,  1072,  1073,
      -1,    -1,    -1,    -1,  1078,  1079,    -1,  1081,    -1,    -1,
    1084,   221,   222,   223,   224,  1089,    -1,  1091,    -1,   229,
      -1,    -1,  1096,    -1,  1098,    -1,    -1,    -1,  1102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1111,    -1,    -1,
    1114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1122,    -1,
      -1,    -1,  1126,  1127,  1128,  1129,  1130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1138,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1179,   138,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,  1203,
    1204,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,
     182,    -1,    -1,   185,   186,   187,    -1,   189,    -1,   191,
     192,   193,   194,   195,   196,    -1,    -1,   199,    -1,    -1,
     202,    -1,   204,   205,    -1,   207,    -1,   209,    -1,   211,
      -1,    -1,   214,    -1,   216,    -1,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,  1308,    49,    50,    51,    52,    53,
      -1,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,   221,   222,   223,   224,    -1,    -1,    61,    62,   229,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1392,    -1,
      -1,    -1,    -1,  1397,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,  1412,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1428,  1429,    -1,    -1,  1432,    -1,
    1434,  1435,   221,   222,   223,   224,    -1,  1441,    -1,    -1,
     229,    -1,    -1,  1447,  1448,  1449,    -1,  1451,    -1,    -1,
    1454,  1455,  1456,    -1,  1458,    -1,    -1,  1461,    -1,  1463,
      -1,  1465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1473,
      -1,    -1,    -1,  1477,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1488,    -1,  1490,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1504,    -1,    -1,  1507,  1508,   221,   222,   223,   224,    -1,
    1514,    -1,    -1,   229,    -1,    -1,    -1,  1521,    -1,    -1,
      -1,    -1,    -1,    -1,  1528,    -1,  1530,   221,   222,   223,
     224,    -1,    -1,    -1,    -1,   229,    -1,    -1,  1542,    -1,
      -1,    -1,    -1,    -1,  1548,    -1,    -1,   291,    -1,    -1,
      -1,    -1,   296,    -1,   221,   222,   223,   224,   302,    -1,
      -1,    -1,   229,  1567,  1568,    61,    62,    -1,  1572,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,  1585,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,  1603,
      -1,    -1,   346,  1607,    -1,  1609,    -1,    -1,    -1,    -1,
      -1,    -1,  1616,  1617,  1618,    -1,    -1,    -1,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    -1,   388,   389,   390,    -1,   392,   393,
      -1,   395,   396,   397,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,  1667,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    61,    62,    -1,  1681,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,  1692,    -1,
    1694,  1695,    -1,  1697,    -1,    -1,    -1,    -1,  1702,    -1,
      -1,    -1,  1706,  1707,  1708,  1709,  1710,    -1,  1712,  1713,
    1714,    -1,  1716,    -1,    -1,    -1,    -1,    -1,  1722,  1723,
      -1,    -1,    -1,  1727,    -1,   221,   222,   223,   224,    -1,
      -1,    -1,    -1,   229,    -1,   479,    -1,   481,    -1,  1743,
      -1,    -1,   221,   222,   223,   224,    -1,  1751,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1765,  1766,    -1,    -1,    -1,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,  1781,   221,   222,
     223,   224,    -1,  1787,    -1,    -1,   229,    -1,    -1,   221,
     222,   223,   224,    -1,    -1,    -1,    -1,   229,    -1,  1803,
      -1,    -1,    -1,    -1,    -1,    -1,  1810,    -1,  1812,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
     221,   222,   223,   224,    -1,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,
      -1,    -1,   229,    -1,    -1,  1849,    -1,    -1,  1852,    -1,
      -1,    -1,  1856,    -1,  1858,  1859,    -1,  1861,   602,  1863,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   618,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1888,   629,    -1,    -1,    -1,    -1,
    1894,   635,    -1,     3,     4,     5,   640,     7,     8,    -1,
     644,  1905,   646,    -1,  1908,    -1,    -1,    -1,   652,    -1,
      -1,   655,    -1,   657,    -1,    -1,    -1,   661,    28,    29,
      -1,  1925,    -1,    -1,    -1,   669,   221,   222,   223,   224,
      -1,    -1,    -1,    -1,   229,    -1,    -1,   681,    -1,    -1,
    1944,    -1,    -1,    -1,   688,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    -1,   700,    -1,   702,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,   221,
     222,   223,   224,    -1,    -1,    85,    86,   229,    88,    -1,
      -1,   725,    -1,    93,    -1,    -1,    96,    97,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,   106,   107,    -1,    -1,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,    -1,   128,   129,
      -1,    -1,    -1,   133,    -1,    -1,   136,   137,   138,   139,
      -1,   141,   142,   143,    -1,    -1,   146,    -1,   148,   149,
      -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,    -1,   204,   205,   206,   207,   208,   209,
     210,   211,    -1,   213,   214,    -1,   216,   217,   218,    -1,
      -1,   221,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,    -1,    -1,    -1,   868,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,   942,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,
      97,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,   106,
     107,    -1,   986,    -1,   111,    -1,   113,    -1,   115,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,
      -1,   128,   129,    -1,    -1,    -1,   133,    -1,    -1,   136,
     137,   138,   139,    -1,   141,   142,   143,    -1,    -1,   146,
    1024,   148,   149,    -1,    -1,    -1,  1030,    -1,   155,  1033,
    1034,    -1,    -1,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
     207,   208,   209,   210,   211,    -1,   213,   214,    -1,   216,
     217,   218,    -1,    -1,   221,  1099,    -1,    -1,    -1,   226,
     227,     3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,    -1,    -1,    -1,   226,   227,     3,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      -1,    88,    -1,    -1,    91,    -1,    93,    -1,    -1,    96,
      97,    -1,    -1,   100,   101,   102,   103,   104,    -1,   106,
     107,    -1,    -1,    -1,   111,    -1,   113,    -1,   115,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,    -1,   125,    -1,
      -1,   128,   129,    -1,    -1,   132,   133,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,  1479,    -1,    -1,   155,    -1,
      -1,    -1,    -1,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
     207,   208,   209,   210,   211,    -1,   213,   214,    -1,   216,
     217,   218,    -1,    -1,   221,    -1,    -1,    -1,    -1,   226,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,     3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    91,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,   128,   129,    -1,    -1,
     132,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,   221,   222,
     223,   224,    -1,   155,    -1,    -1,   229,  1731,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    91,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,   125,    -1,    -1,   128,   129,    -1,    -1,
     132,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    91,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
     132,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    91,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,   103,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    91,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,   104,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,   120,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,   104,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,   220,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,    -1,   128,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    -1,    -1,   221,
      -1,     3,     4,     5,   226,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    97,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,     5,   128,   129,     8,    -1,
      -1,   133,    -1,    -1,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,    -1,   148,   149,    -1,    29,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
      -1,   213,   214,    -1,   216,   217,   218,    97,    -1,   221,
     100,   101,   102,    -1,   226,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,    -1,    -1,    -1,     5,   128,   129,
       8,    -1,    -1,    -1,    -1,    61,    62,    -1,   138,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,   149,
      -1,    29,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     180,   181,   182,    -1,    -1,   185,   186,   187,    -1,   189,
      -1,   191,   192,   193,   194,   195,   196,    -1,    -1,   199,
      -1,    -1,   202,    -1,   204,   205,    -1,   207,    -1,   209,
      -1,   211,    -1,    -1,   214,    -1,   216,    -1,   218,    97,
      -1,    -1,   100,   101,   102,    -1,   226,   227,   106,    -1,
      -1,    -1,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,     5,
     128,   129,     8,    -1,    -1,    -1,    -1,    61,    62,    -1,
     138,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,   149,    -1,    29,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,
      -1,   227,   180,   181,   182,    -1,    -1,   185,   186,   187,
      -1,   189,    -1,   191,   192,   193,   194,   195,   196,    -1,
      -1,   199,    -1,    -1,   202,    -1,   204,   205,    -1,   207,
      -1,   209,    -1,   211,    -1,    -1,   214,    -1,   216,    -1,
     218,    97,    -1,    -1,   100,   101,   102,    -1,   226,    -1,
     106,    -1,    61,    62,    -1,   111,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,   122,   123,    -1,    -1,
      -1,    -1,   128,   129,    -1,    -1,    -1,     5,    -1,    -1,
       8,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,   155,
      -1,    29,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,   223,
     224,    -1,    -1,   227,   180,   181,   182,    -1,    -1,   185,
     186,   187,    60,   189,    -1,   191,   192,   193,   194,   195,
     196,    -1,    -1,   199,    -1,    -1,   202,    -1,   204,   205,
      -1,   207,    -1,   209,    -1,   211,    -1,    -1,   214,    -1,
     216,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,    97,
     226,    -1,   100,   101,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,     5,
     128,   129,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,
     229,   149,    -1,    29,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   180,   181,   182,    -1,    -1,   185,   186,   187,
      -1,   189,    -1,   191,   192,   193,   194,   195,   196,    -1,
      -1,   199,    -1,    -1,   202,    -1,   204,   205,    -1,   207,
      -1,   209,    -1,   211,    -1,    -1,   214,    -1,   216,    -1,
     218,    97,    -1,    -1,   100,   101,   102,    -1,   226,    -1,
     106,    -1,    -1,    -1,   110,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,    -1,    -1,
      -1,     5,   128,   129,     8,    -1,    -1,    -1,    -1,    61,
      62,    -1,   138,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,   149,    -1,    29,    -1,    -1,    -1,   155,
      -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   180,   181,   182,    -1,    -1,   185,
     186,   187,    -1,   189,    -1,   191,   192,   193,   194,   195,
     196,    -1,    -1,   199,    -1,    -1,   202,    -1,   204,   205,
      -1,   207,    -1,   209,    -1,   211,    -1,    -1,   214,    -1,
     216,    -1,   218,    97,    -1,    -1,   100,   101,   102,    -1,
     226,    -1,   106,    -1,    -1,    -1,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
      -1,    -1,    -1,     5,   128,   129,     8,    -1,    -1,    -1,
      -1,    61,    62,    -1,   138,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,   149,    -1,    29,    -1,    -1,
      -1,   155,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,   224,    -1,    -1,   227,   180,   181,   182,    -1,
      -1,   185,   186,   187,    -1,   189,    -1,   191,   192,   193,
     194,   195,   196,    -1,    -1,   199,    -1,    -1,   202,    -1,
     204,   205,    -1,   207,    -1,   209,    -1,   211,    -1,    -1,
     214,    -1,   216,    -1,   218,    97,    -1,    -1,   100,   101,
     102,    -1,   226,    -1,   106,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,    -1,    -1,    -1,     5,   128,   129,     8,    -1,
      -1,    -1,    -1,    61,    62,    -1,   138,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,   149,    -1,    29,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,   223,   224,    -1,    -1,   227,   180,   181,
     182,    -1,    -1,   185,   186,   187,    -1,   189,    -1,   191,
     192,   193,   194,   195,   196,    -1,    -1,   199,    -1,    -1,
     202,    -1,   204,   205,    -1,   207,    -1,   209,    -1,   211,
      -1,    -1,   214,    -1,   216,    -1,   218,    97,    -1,    -1,
     100,   101,   102,    -1,   226,    -1,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,    -1,    -1,    -1,     5,   128,   129,
       8,    -1,    -1,    -1,    -1,    61,    62,    -1,   138,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,   149,
      -1,    29,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,   227,
     180,   181,   182,    -1,    -1,   185,   186,   187,    -1,   189,
      -1,   191,   192,   193,   194,   195,   196,    -1,    -1,   199,
      -1,    -1,   202,    -1,   204,   205,    -1,   207,    -1,   209,
      -1,   211,    -1,    -1,   214,    -1,   216,    -1,   218,    97,
      -1,    -1,   100,   101,   102,    -1,   226,    -1,   106,    -1,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,
      -1,   227,   180,   181,   182,    -1,    -1,   185,   186,   187,
      -1,   189,    -1,   191,   192,   193,   194,   195,   196,    -1,
      -1,   199,    -1,    -1,   202,    -1,   204,   205,    -1,   207,
      -1,   209,    -1,   211,    -1,    -1,   214,    -1,   216,    -1,
     218,     4,     5,     6,    -1,    -1,     9,    -1,   226,    -1,
      13,    -1,    15,    -1,    17,    18,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,    82,
      83,    84,    -1,    -1,    87,    88,    -1,    -1,    91,    -1,
      93,    -1,    95,    96,    97,    98,    99,   100,   101,   102,
      -1,    -1,   105,    -1,   107,   108,   109,    -1,   111,    -1,
     113,   114,   115,   116,   117,   118,   119,    -1,   121,   122,
     123,    -1,    -1,   126,   127,   128,   129,    -1,   131,    -1,
     133,    -1,    -1,   136,   137,    -1,   139,    -1,    -1,    -1,
     143,    -1,    -1,   146,   147,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,   156,    61,    62,   159,   160,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,   180,   181,   182,
      61,    62,    -1,   186,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,   200,    61,    62,
     203,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,   216,    -1,    -1,   221,   222,   223,   224,
      -1,    61,    62,    -1,   229,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,
      -1,    -1,   229,    -1,    -1,   221,   222,   223,   224,    -1,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,   223,   224,    -1,    61,    62,    -1,   229,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,   221,   222,
     223,   224,    -1,    61,    62,    -1,   229,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,   229,
      -1,    -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,
     229,    -1,    -1,   221,   222,   223,   224,    -1,    -1,    -1,
      -1,   229,    -1,    -1,   221,   222,   223,   224,    -1,    -1,
      -1,    -1,   229,    -1,    -1,   221,   222,   223,   224,    -1,
      -1,    -1,    -1,   229,    -1,    -1,   221,   222,   223,   224,
      -1,    -1,    -1,    -1,   229,    -1,    -1,   221,   222,   223,
     224,    -1,    -1,    -1,    -1,   229,    -1,    -1,   221,   222,
     223,   224,    -1,    61,    62,    -1,   229,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,
      61,    62,    -1,   229,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,   221,   222,   223,   224,    -1,    61,    62,
      -1,   229,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,    -1,
      -1,   229,    -1,    -1,   221,   222,   223,   224,    -1,    -1,
      -1,    -1,   229,    -1,    -1,   221,   222,   223,   224,    -1,
      61,    62,    -1,   229,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,   223,   224,    -1,    61,    62,    -1,   229,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,   221,   222,
     223,   224,    -1,    -1,    -1,    -1,   229,    -1,    -1,   221,
     222,   223,   224,    -1,    -1,    -1,    -1,   229,    -1,    -1,
     221,   222,   223,   224,    -1,    -1,    -1,    -1,   229,    -1,
      -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,   229,
      -1,    -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,
     229,    -1,    -1,   221,   222,   223,   224,    -1,    -1,    -1,
      -1,   229,    -1,    -1,   221,   222,   223,   224,    -1,    -1,
      -1,    -1,   229,    -1,    -1,   221,   222,   223,   224,    -1,
      61,    62,    -1,   229,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,   223,   224,    -1,    61,    62,    -1,   229,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,
      61,    62,    -1,   229,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
     221,   222,   223,   224,    -1,    -1,    -1,    -1,   229,    -1,
      -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,   229,
      -1,    -1,   221,   222,   223,   224,    -1,    61,    62,    -1,
     229,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,
      61,    62,    -1,   229,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,   223,   224,    -1,    -1,    -1,    -1,   229,    -1,
      -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,   229,
      -1,    -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,
     229,    -1,    -1,   221,   222,   223,   224,    -1,    -1,    -1,
      -1,   229,    -1,    -1,   221,   222,   223,   224,    -1,    -1,
      -1,    -1,   229,    -1,    -1,   221,   222,   223,   224,    -1,
      -1,    -1,    -1,   229,    -1,    -1,   221,   222,   223,   224,
      -1,    -1,    -1,    -1,   229,    -1,    -1,   221,   222,   223,
     224,    -1,    61,    62,    -1,   229,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,   221,   222,   223,
     224,    -1,    61,    62,    -1,   229,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,   223,   224,    -1,    61,    62,    -1,   229,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,   223,   224,    -1,    -1,    -1,    -1,
     229,    -1,    -1,   221,   222,   223,   224,    -1,    -1,    -1,
      -1,   229,    -1,    -1,   221,   222,   223,   224,    -1,    61,
      62,    -1,   229,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,   221,   222,   223,   224,    -1,    61,    62,    -1,
     229,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,
      -1,    -1,    -1,   229,    -1,    -1,   221,   222,   223,   224,
      -1,    -1,    -1,    -1,   229,    -1,    -1,   221,   222,   223,
     224,    -1,    -1,    -1,    -1,   229,    -1,    -1,   221,   222,
     223,   224,    -1,    -1,   227,    -1,    -1,    -1,    -1,   221,
     222,   223,   224,    -1,    -1,   227,    -1,    -1,    -1,    -1,
     221,   222,   223,   224,    -1,    -1,   227,    -1,    -1,    -1,
      -1,   221,   222,   223,   224,    -1,    -1,   227,    -1,    -1,
      -1,    -1,   221,   222,   223,   224,    61,    62,   227,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,   223,   224,    61,    62,   227,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,   221,   222,   223,
     224,    61,    62,   227,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,   223,   224,
      -1,    -1,   227,    -1,    -1,    -1,    -1,   221,   222,   223,
     224,    -1,    -1,   227,    -1,    -1,    -1,    -1,   221,   222,
     223,   224,    61,    62,   227,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,   223,   224,    61,    62,   227,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,   221,   222,   223,   224,    -1,    -1,   227,    -1,    -1,
      -1,    -1,   221,   222,   223,   224,    -1,    -1,   227,    -1,
      -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,   227,
      -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,
     227,    -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,
      -1,   227,    -1,    -1,    -1,    -1,   221,   222,   223,   224,
      -1,    -1,   227,    -1,    -1,    -1,    -1,   221,   222,   223,
     224,    -1,    -1,   227,    -1,    -1,    -1,    -1,   221,   222,
     223,   224,    61,    62,   227,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,   223,   224,    61,    62,   227,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,   223,
     224,    61,    62,   227,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,   221,   222,   223,   224,    -1,    -1,   227,    -1,
      -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,   227,
      -1,    -1,    -1,    -1,   221,   222,   223,   224,    61,    62,
     227,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,   222,   223,   224,
      61,    62,   227,    -1,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,   223,   224,    -1,    -1,   227,    -1,    -1,
      -1,    -1,   221,   222,   223,   224,    -1,    -1,   227,    -1,
      -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,   227,
      -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,
     227,    -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,
      -1,   227,    -1,    -1,    -1,    -1,   221,   222,   223,   224,
      -1,    -1,   227,    -1,    -1,    -1,    -1,   221,   222,   223,
     224,    -1,    -1,   227,    -1,    -1,    -1,    -1,   221,   222,
     223,   224,    61,    62,   227,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,   221,   222,
     223,   224,    61,    62,   227,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,   222,   223,   224,    61,    62,   227,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,   223,   224,    -1,    -1,   227,    -1,
      -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,   227,
      -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,   222,   223,   224,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,    -1,
     227,    -1,    -1,    -1,    -1,   221,   222,   223,   224,    -1,
      -1,   227,    -1,    -1,    -1,    -1,   221,   222,   223,   224,
      -1,    -1,   227,    -1,    -1,    -1,    -1,   221,   222,   223,
     224,    -1,    -1,   227,    -1,    -1,    -1,    -1,   221,   222,
     223,   224,    -1,    -1,   227,    -1,    -1,    -1,    -1,   221,
     222,   223,   224
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     4,     5,     6,     9,    13,    15,    17,    18,    19,
      20,    21,    24,    25,    26,    27,    28,    29,    30,    31,
      33,    34,    35,    40,    43,    49,    50,    51,    52,    53,
      54,    55,    58,    72,    73,    74,    75,    76,    77,    82,
      83,    84,    87,    88,    91,    93,    95,    96,    97,    98,
      99,   100,   101,   102,   105,   107,   108,   109,   111,   113,
     114,   115,   116,   117,   118,   119,   121,   122,   123,   126,
     127,   128,   129,   131,   133,   136,   137,   139,   143,   146,
     147,   149,   150,   156,   159,   160,   180,   181,   182,   186,
     200,   203,   216,   232,   233,   236,   243,   245,   246,   250,
     262,   263,   268,   274,   281,   289,   298,   301,   305,   308,
     314,    70,   226,    70,   226,   282,   302,   306,     4,     7,
     260,   260,   260,     3,     4,     5,     7,     8,    28,    29,
      32,    61,    62,    63,    64,    75,    78,    85,    86,    88,
      93,    96,    97,   100,   101,   102,   106,   107,   111,   113,
     115,   117,   121,   122,   123,   128,   129,   133,   136,   137,
     138,   139,   141,   142,   143,   146,   148,   149,   155,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   204,   205,   206,   207,   208,   209,   210,   211,
     213,   214,   216,   217,   218,   221,   226,   248,   249,   251,
     257,   259,   262,   263,   237,   238,   101,   102,   111,   122,
     123,   149,   160,   226,   248,   226,   226,   248,    26,   290,
     299,   251,    56,    59,    60,   230,   336,   241,    50,   248,
     251,     4,     5,   261,   251,   251,   256,     4,     5,   324,
     325,     8,   221,   222,   258,   259,   326,   248,   260,   230,
     248,   251,   337,   337,   337,   251,   243,   250,   262,   263,
     248,    75,    76,   110,    57,    94,   212,   256,   248,   110,
     248,   110,   212,   256,   110,   256,    91,   110,   256,    91,
     103,   104,   125,   132,   256,    91,   103,   104,   132,   256,
     145,   248,    20,    60,   110,   256,   110,   256,   248,    60,
      91,   103,   110,   256,   104,   120,   256,   110,   256,   103,
     104,   110,   256,    60,   256,   104,   220,   256,   256,    60,
     110,   110,   256,    91,   103,   104,   125,   132,   134,   135,
     256,    60,    91,   103,   104,   124,   132,   256,    60,   248,
     248,   110,   256,   130,   110,   248,   110,   248,   110,   256,
     110,   256,   110,   256,    82,   145,   145,   248,    51,    89,
      90,   110,   117,   150,   151,   152,   154,   158,   110,   256,
     248,   248,    91,   110,   226,   226,   226,   226,   226,   248,
     337,   110,     0,    42,   234,    70,    70,    22,   251,   264,
     265,   248,   264,     4,   226,   233,   226,   226,    33,    34,
     226,   226,   251,   226,   226,   226,   226,   226,   112,   220,
     248,   248,   214,   215,   112,   215,   220,   112,   215,   220,
     248,   220,   215,   220,   220,   220,    60,   153,   212,   220,
     220,   112,   215,   220,   112,   215,   220,   215,   219,   220,
     220,   220,   256,   220,   140,   104,   220,   144,   144,   212,
     215,   220,   226,   215,   220,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   256,   226,   211,   248,   211,
     251,   248,   251,    65,    66,    67,    68,    69,    70,   222,
      18,    19,    61,    62,    65,    66,    67,    68,    69,    70,
      71,   221,   222,   223,   224,     4,     5,   275,   276,     4,
       5,   277,   278,   248,   264,   264,   248,   251,   292,   233,
     309,   315,   226,    56,   226,     4,     7,   226,   248,   251,
     327,    56,   230,   329,   334,   242,   226,   226,   229,   229,
      10,   229,   244,   226,   226,   229,   259,   259,   229,   251,
       9,   229,   229,   256,   248,   248,   248,   256,   244,   229,
     248,   229,   248,   256,   229,   248,   229,   248,   248,   244,
     248,   248,   248,   248,   248,   244,   248,   248,   248,   248,
     244,   248,   248,   248,   244,   248,   244,   229,   248,   248,
     248,   248,   244,   248,   248,   244,   248,   244,   248,   248,
     248,   244,   248,   229,   248,   248,   251,   256,   229,   244,
     248,   248,   248,   229,   248,   248,   248,   248,   248,   248,
     248,   244,   248,   248,   248,   248,   248,   248,   244,   248,
     229,   229,   248,   229,   248,   248,   229,   248,   229,   248,
     244,   248,   244,   248,   229,   226,   251,   226,   251,   226,
     251,   229,   256,   256,   256,   248,   251,   256,   256,   248,
     256,   256,   256,   248,   229,   244,   244,   248,   248,     5,
     247,   247,   247,   227,   251,   248,   229,   229,   248,    41,
     251,   248,   269,   227,   248,   251,   266,   267,   227,    70,
     251,    16,    42,   307,   264,   264,   251,   251,   251,   248,
     337,   337,     4,     5,   254,   255,   254,   255,   248,   229,
     229,   226,   248,   248,   248,   248,   248,   248,   248,   229,
     248,   248,   248,   248,   248,   251,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     229,   248,   248,   248,   248,   248,   248,   251,   256,   248,
     248,   256,   251,   248,   248,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   337,   251,   251,   251,   251,
     251,   227,   251,   248,   248,   248,   248,   248,   251,   251,
     251,   227,   251,   251,   248,   251,   248,   251,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   337,   248,
     227,   227,   248,   247,   248,   247,   248,   227,   244,   248,
     226,   248,   248,   227,   227,   248,   248,   248,   248,   248,
     248,   248,   239,   240,   253,   252,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   226,   226,   229,
     226,   226,   229,   227,   227,    41,   291,    39,    42,   300,
      44,   233,   251,   226,   248,   251,    48,   328,   228,   229,
     226,     4,     7,   226,     8,   335,   329,   264,   264,     4,
       5,   251,   256,   264,   264,   325,     8,   258,    80,    81,
     248,   251,   244,   229,   229,   256,   248,   229,   248,   229,
     229,   248,   229,   248,   229,   256,   229,   229,   229,   256,
     229,   229,   229,   256,   229,   229,   229,   256,   229,   256,
     248,   229,   229,   229,   256,   256,   229,   256,   229,   229,
     229,   256,   229,   248,   229,   229,   244,   248,   256,   229,
     229,   229,   248,   229,   229,   229,   229,   229,   256,   229,
     229,   229,   229,   229,   256,   229,   248,   248,   229,   248,
     229,   248,   229,   251,   229,   256,   229,   256,   229,   248,
     251,   251,   251,   248,   244,   229,   229,   229,   229,   229,
     244,   229,   229,   244,   229,   229,   248,   256,   251,   229,
     229,   226,   229,   229,   229,   227,   227,   248,   251,   248,
     251,   235,     4,     5,   273,   229,   283,   227,   226,   227,
     227,   229,   229,   229,   227,   229,   229,   227,   226,   226,
     227,   227,   229,   229,   229,   248,   248,   248,   229,   229,
     248,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   248,   229,   229,   229,   229,   244,
     229,   229,   229,   229,   229,   227,   227,   227,   227,   227,
     227,   229,   227,   227,   229,   227,   227,   227,   227,   227,
     227,   227,   229,   227,   227,   227,   229,   229,   229,   229,
     229,   227,   229,   227,   227,   227,   227,   227,   229,   227,
     227,   227,   227,   227,   227,   229,   229,   227,   227,   227,
     227,   227,   229,   229,   227,   229,   229,   227,   229,   229,
     256,   227,   227,   260,   338,   260,   339,   251,   251,   264,
     264,   276,   264,   264,   278,    41,   293,   310,    47,   229,
     251,   227,   229,   227,   226,   248,   248,   251,   251,   330,
     331,   251,     4,     5,   321,   323,   227,   227,   226,   226,
     229,   227,   227,    79,    79,   229,   229,   256,   248,   248,
     229,   229,   248,   251,   229,   251,   248,   229,   251,   229,
     248,   251,   229,   248,   251,   248,   251,   251,   229,   248,
     251,   251,   229,   248,   248,   248,   251,   229,   248,   251,
     229,   248,   248,   248,   229,   229,   248,   229,   248,   251,
     251,   229,   248,   229,   248,   248,   256,   229,   248,   248,
     251,   229,   248,   248,   251,   251,   248,   248,   229,   248,
     251,   251,   248,   251,   229,   251,   229,   248,   229,   248,
     229,   248,   229,   248,   229,   251,   229,   251,   229,   227,
     227,   227,   229,   256,   248,   251,   248,   251,   248,   248,
     256,   248,   251,   256,   256,   248,   229,   229,   229,   248,
     248,   264,   251,   251,   251,   236,   270,   267,   251,   303,
     251,   251,   251,   251,   248,   248,   227,   227,   251,   251,
     248,   229,   229,   227,   251,   251,   229,   248,   251,   248,
     248,   251,   248,   248,   248,   248,   251,   248,   251,   248,
     248,   229,   248,   251,   248,   251,   256,   248,   248,   251,
     248,   248,   251,   251,   251,   251,   251,   251,   251,   251,
     248,   251,   248,   248,   248,   255,   248,   255,   248,   248,
     229,   229,   229,   227,   227,   227,   227,    37,    38,   296,
     233,   251,   229,    56,   248,   248,   328,   229,   321,   321,
     227,   226,   226,   229,   264,   264,   248,   337,   337,   248,
     248,   229,   229,   229,   248,   248,   229,   229,   248,   229,
     248,   248,   229,   248,   229,   248,   248,   229,   229,   229,
     248,   229,   229,   248,   229,   229,   248,   248,   229,   248,
     248,   229,   248,   229,   229,   229,   248,   229,   229,   229,
     248,   229,   229,   248,   229,   229,   229,   248,   229,   248,
     248,   229,   248,   229,   248,   229,   248,   248,   248,   248,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     248,   248,   251,   229,   227,   227,   227,   227,   229,   226,
      10,   233,   227,   227,   227,   227,   227,   227,   229,   227,
     227,   248,   248,   248,   229,   229,   229,   229,   229,   248,
     229,   229,   229,   229,   244,   227,   227,   227,   227,   227,
     227,   229,   227,   227,   227,   229,   227,   227,   229,   227,
     229,   227,   227,   229,   227,   227,   229,   227,   227,   248,
     260,   260,   294,    41,    36,   311,   227,   251,   226,   227,
     229,   251,   332,   264,   264,   322,   227,   227,   248,   248,
     251,   248,   229,   248,   248,   229,   248,   229,   229,   248,
     229,   248,   229,   229,   248,   251,   251,   229,   248,   251,
     229,   248,   251,   248,   251,   229,   229,   248,   229,   229,
     251,   229,   248,   248,   248,   229,   251,   248,   251,   251,
     248,   251,   248,   229,   251,   251,   251,   229,   251,   229,
     229,   248,   251,   229,   251,   251,   229,   229,   229,   248,
     248,   248,   251,   248,   248,   248,   251,   248,   256,   229,
     229,   248,    70,    70,    70,   251,     4,     5,   279,   280,
     251,    14,    42,   304,   248,   229,   229,   248,   251,   248,
     248,   251,   251,   248,   248,   248,   248,   251,   251,   248,
     251,   251,   248,   248,   229,   292,   297,    46,   317,    59,
      60,   227,   251,    56,   248,   227,   321,   227,   227,   321,
     229,   229,   229,   248,   229,   248,   229,   251,   251,   248,
     251,   248,   229,   248,   229,   229,   248,   229,   251,   248,
     248,   248,   229,   248,   229,   248,   229,   229,   229,   229,
     229,   251,   229,   229,   229,   251,   229,   251,   248,   229,
     229,   248,   229,   229,   251,   251,   251,   229,   229,   229,
     229,   229,   248,   248,   229,   248,   248,   248,   227,   226,
     226,   227,   229,    11,   287,   227,   248,   248,   229,   229,
     229,   229,   227,   227,   227,   227,   227,   227,   248,   295,
     233,   251,    45,   316,   226,   229,   226,   227,   333,   248,
     251,   248,   229,   248,   248,   229,   229,   229,   229,   229,
     251,   229,   251,   251,   229,   251,   229,   229,   229,   251,
     229,   248,   251,   251,   251,   251,   251,   229,   251,   251,
     251,   229,   251,   229,   229,   248,   248,   229,   251,   251,
     229,   229,   229,   251,   248,   248,   248,   256,   229,   248,
      70,   227,   227,   271,   280,   251,   284,   229,   248,   248,
     248,   251,   233,    44,   320,   233,   312,   248,   251,   251,
     335,   229,   248,   229,   248,   248,   248,   248,   248,   229,
     251,   248,   229,   248,   251,   248,   229,   248,   229,   229,
     248,   229,   229,   229,   248,   251,   248,   229,   248,   251,
     248,   251,   229,   229,   229,   248,   248,   233,   233,   248,
     227,   318,    42,    47,   313,   227,   229,   227,   229,   321,
     248,   248,   229,   251,   229,   229,   251,   229,   251,   251,
     251,   251,   248,   251,   229,   229,   248,   229,   229,   248,
     248,   248,    23,    42,   272,   285,   233,   248,   251,   229,
     229,   248,   251,   248,   248,   229,   248,   251,   248,   251,
      12,    42,   286,   319,   227,   227,   248,   248,   229,   251,
     229,     4,   288,   317,   229,   248,   229,   248,   251,   229,
     248,   229,   248,   248
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   231,   232,   233,   234,   235,   233,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   237,   236,   238,   236,   236,   236,
     236,   236,   236,   236,   239,   236,   240,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   241,   236,
     242,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   243,   243,
     243,   243,   243,   243,   244,   244,   245,   245,   245,   245,
     246,   246,   247,   247,   248,   248,   248,   248,   248,   248,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   250,   250,   252,   251,   253,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     254,   255,   256,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   258,   258,   258,   259,   259,   260,   260,   261,   261,
     261,   261,   262,   263,   265,   264,   266,   266,   266,   267,
     267,   269,   270,   271,   268,   272,   272,   273,   273,   274,
     274,   274,   274,   275,   275,   276,   276,   276,   276,   277,
     277,   278,   278,   278,   278,   279,   279,   279,   280,   280,
     280,   280,   282,   283,   284,   285,   281,   286,   286,   287,
     287,   288,   288,   290,   289,   291,   291,   292,   292,   293,
     294,   295,   293,   296,   297,   296,   299,   298,   300,   300,
     302,   303,   301,   304,   304,   306,   305,   307,   307,   309,
     310,   311,   312,   308,   313,   313,   315,   314,   316,   316,
     317,   318,   319,   317,   320,   320,   321,   322,   321,   323,
     323,   323,   323,   324,   324,   325,   325,   325,   325,   326,
     326,   326,   326,   327,   327,   327,   327,   327,   328,   328,
     328,   330,   329,   331,   329,   332,   329,   333,   329,   334,
     329,   335,   335,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   337,   337,   338,
     338,   339,   339
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     0,     0,     5,     0,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     3,     1,     1,
       2,     2,     3,     3,     0,     5,     0,     5,     2,     1,
       2,     1,     2,     4,     4,     3,     4,     4,     0,     3,
       0,     4,     2,     2,     1,     2,     2,     1,     2,     2,
       2,     9,    10,     8,    10,    10,    12,    10,     3,     5,
       7,    10,     5,     3,     5,     5,     5,     5,     6,     8,
      10,     5,     1,     2,     2,     7,     7,     3,     3,     4,
       5,     7,     9,     6,    10,     5,     5,     7,     7,     7,
      11,     3,     5,     5,    11,     5,     7,     8,     3,    12,
       7,    10,     5,     5,     5,     5,     7,     7,     9,    11,
      14,    16,     7,     7,    11,     5,     2,     7,    11,     5,
       7,     9,     4,     9,     7,     7,     9,    11,     3,     6,
       8,     3,     6,     9,     5,     5,     7,     3,    10,     5,
       9,    11,     7,     3,     5,     5,     5,     7,     5,     5,
      13,    17,     5,     5,     4,    12,     9,     3,     3,    12,
      11,    15,     3,     5,     5,    11,    10,     5,     6,     7,
       9,     5,     5,     7,     9,    10,     9,    11,    12,     9,
       9,    14,     5,     3,     3,     3,     3,     5,     3,     5,
       3,     5,    12,     7,     9,    10,     5,    10,    11,     9,
       5,     6,     2,     2,     1,     1,     3,     4,     4,     4,
       4,     4,     4,     1,     1,     2,     1,     2,     3,    10,
       8,     8,     8,     3,     1,     1,     6,     4,     6,     6,
       4,     6,     1,     4,     1,     1,     1,     1,     3,     3,
       6,     6,     8,     6,     4,     6,     8,     1,     3,     4,
       4,     4,     4,     4,     4,     4,     4,     1,     3,     1,
       3,     4,     6,     6,     4,     6,     4,    10,     4,     4,
       4,     1,     3,     2,     4,     4,     5,     3,     5,     5,
       3,     6,     8,     3,     3,     2,     7,     3,     5,     5,
       6,     5,     3,     5,     3,     3,     0,     4,     0,     4,
       2,     3,     3,     3,     3,     3,     3,     4,     6,     1,
       4,     4,     6,     6,     1,     1,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     4,     4,     4,     4,     4,     4,     6,
       4,     4,     6,     4,     4,     4,     4,     4,     4,     6,
       4,     3,     6,     6,     4,     4,     4,     4,     6,     6,
       8,     6,     8,     4,     4,     4,     6,     6,     6,     4,
       8,     6,     8,     6,     4,     4,     6,     6,     8,     9,
       9,     8,     2,     2,     3,     5,     5,    10,     3,     3,
       5,     5,     3,     3,     3,     3,     3,     5,     5,     7,
       7,     7,     5,     7,     5,     5,     5,     6,     3,     3,
       1,     3,     3,     3,     3,     7,     7,     5,     5,     9,
       5,     1,     2,     2,     1,     1,     1,     1,     4,     6,
       4,     6,     4,     4,     0,     2,     0,     1,     3,     1,
       1,     0,     0,     0,    11,     1,     1,     1,     1,     0,
       1,     1,     2,     1,     3,     1,     1,     4,     4,     1,
       3,     1,     1,     4,     4,     0,     1,     3,     1,     1,
       3,     3,     0,     0,     0,     0,    14,     1,     1,     0,
       2,     0,     1,     0,     7,     1,     2,     1,     1,     0,
       0,     0,     6,     0,     0,     4,     0,     4,     1,     1,
       0,     0,     8,     1,     1,     0,     4,     1,     4,     0,
       0,     0,     0,    11,     1,     1,     0,     5,     0,     2,
       0,     0,     0,     7,     0,     1,     1,     0,     4,     1,
       4,     1,     4,     1,     3,     1,     4,     1,     4,     1,
       1,     3,     3,     0,     2,     4,     1,     3,     0,     2,
       6,     0,     4,     0,     4,     0,     6,     0,     9,     0,
       3,     0,     1,     0,     2,     2,     4,     1,     4,     6,
       6,     7,    10,    12,     7,    10,    12,     2,     1,     1,
       3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    {YYACCEPT;}

    break;

  case 4:

    {if (errorlevel<=ERROR) {YYABORT;}}

    break;

  case 5:

    {if ((yyvsp[0].sep)>=0) mylineno+=(yyvsp[0].sep); else switchlib();}

    break;

  case 12:

    {report_missing(ERROR,"do not import a library in a loop or an if-statement");switchlib();}

    break;

  case 13:

    {add_command(cERROR,NULL);}

    break;

  case 19:

    {add_command(cBREAK,NULL);if (!in_loop) error(ERROR,"break outside loop");}

    break;

  case 20:

    {add_command(cCONTINUE,NULL);if (!in_loop) error(ERROR,"continue outside loop");}

    break;

  case 22:

    {create_call((yyvsp[0].symbol));add_command(cPOP,NULL);}

    break;

  case 23:

    {create_call((yyvsp[0].symbol));add_command(cPOP,NULL);}

    break;

  case 24:

    {if (function_type==ftNONE) error(ERROR,"no use for 'local' outside functions");}

    break;

  case 26:

    {if (function_type==ftNONE) error(ERROR,"no use for 'static' outside functions");}

    break;

  case 30:

    {create_goto((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));}

    break;

  case 31:

    {create_gosub((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));}

    break;

  case 32:

    {create_exception(TRUE);}

    break;

  case 33:

    {create_exception(FALSE);}

    break;

  case 34:

    {add_command(cSKIPPER,NULL);}

    break;

  case 35:

    {add_command(cNOP,NULL);}

    break;

  case 36:

    {add_command(cSKIPPER,NULL);}

    break;

  case 37:

    {add_command(cNOP,NULL);}

    break;

  case 38:

    {create_label((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol),cLABEL);}

    break;

  case 39:

    {add_command(cCHECKOPEN,NULL);}

    break;

  case 40:

    {add_command(cCLOSE,NULL);}

    break;

  case 41:

    {add_command(cCHECKSEEK,NULL);}

    break;

  case 42:

    {add_command(cCOMPILE,NULL);}

    break;

  case 43:

    {create_execute(0);add_command(cPOP,NULL);add_command(cPOP,NULL);}

    break;

  case 44:

    {create_execute(1);add_command(cPOP,NULL);add_command(cPOP,NULL);}

    break;

  case 45:

    {create_colour(0);create_print('n');create_pps(cPOPSTREAM,0);}

    break;

  case 46:

    {create_colour(0);create_pps(cPOPSTREAM,0);}

    break;

  case 47:

    {create_colour(0);create_print('t');create_pps(cPOPSTREAM,0);}

    break;

  case 48:

    {tileol=FALSE;}

    break;

  case 50:

    {tileol=TRUE;}

    break;

  case 54:

    {create_restore("");}

    break;

  case 55:

    {create_restore((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));}

    break;

  case 56:

    {add_command(cRESTORE2, NULL);}

    break;

  case 57:

    {if (get_switch_id()) create_clean_switch_mark(0,TRUE);
             if (function_type!=ftNONE) {
	       add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;
	       add_command(cPOPSYMLIST,NULL);
               create_retval(ftNONE,function_type);
               add_command(cRET_FROM_FUN,NULL);
            } else {
               add_command(cRETURN,NULL);
            }}

    break;

  case 58:

    {if (get_switch_id()) create_clean_switch_mark(1,TRUE); if (function_type==ftNONE) {error(ERROR,"can not return value"); YYABORT;} add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftNUMBER,function_type);add_command(cRET_FROM_FUN,NULL);}

    break;

  case 59:

    {if (get_switch_id()) create_clean_switch_mark(1,TRUE); if (function_type==ftNONE) {error(ERROR,"can not return value"); YYABORT;} add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftSTRING,function_type);add_command(cRET_FROM_FUN,NULL);}

    break;

  case 61:

    {create_openwin(TRUE);}

    break;

  case 62:

    {add_command(cBUTTON,NULL);}

    break;

  case 63:

    {add_command(cMENU,NULL);}

    break;

  case 64:

    {add_command(cCHECKBOX,NULL);}

    break;

  case 65:

    {add_command(cRADIOBUTTON,NULL);}

    break;

  case 66:

    {add_command(cTEXTCONTROL,NULL);}

    break;

  case 67:

    {add_command(cLISTBOX,NULL);}

    break;

  case 68:

    {add_command(cITEMCLEAR, NULL);}

    break;

  case 69:

    {add_command(cLISTBOXADD1, NULL);}

    break;

  case 70:

    {add_command(cLISTBOXADD2, NULL);}

    break;

  case 71:

    {add_command(cDROPBOX,NULL);}

    break;

  case 72:

    {add_command(cITEMADD,NULL);}

    break;

  case 73:

    {add_command(cDROPBOXCLEAR,NULL);}

    break;

  case 74:

    {add_command(cDROPBOXREMOVE,NULL);}

    break;

  case 75:

    {add_command(cITEMDEL,NULL);}

    break;

  case 76:

    {add_command(cLISTBOXDEL2,NULL);}

    break;

  case 77:

    {add_command(cLISTBOXSELECT,NULL);}

    break;

  case 78:

    {add_command(cALERT,NULL);}

    break;

  case 79:

    {add_command(cTEXT,NULL);}

    break;

  case 80:

    {add_command(cTEXT2, NULL);}

    break;

  case 81:

    {add_command(cTEXTALIGN,NULL);}

    break;

  case 82:

    {add_command(cLOCALIZE,NULL);}

    break;

  case 83:

    {add_command(cLOCALIZE2,NULL);}

    break;

  case 84:

    {add_command(cLOCALIZESTOP, NULL);}

    break;

  case 85:

    {add_command(cDRAWTEXT,NULL);}

    break;

  case 86:

    {add_command(cDRAWRECT,NULL);}

    break;

  case 87:

    {add_command(cDRAWCLEAR,NULL);}

    break;

  case 88:

    {add_command(cCLOSEWIN,NULL);}

    break;

  case 89:

    {add_command(cLAYOUT,NULL);}

    break;

  case 90:

    {add_command(cWINSET4,NULL);}

    break;

  case 91:

    {add_command(cWINSET1,NULL);}

    break;

  case 92:

    {add_command(cWINSET3,NULL);}

    break;

  case 93:

    {add_command(cSHORTCUT,NULL);}

    break;

  case 94:

    {add_command(cTEXTEDIT,NULL);}

    break;

  case 95:

    {add_command(cTEXTADD,NULL);}

    break;

  case 96:

    {add_command(cTEXTSET,NULL);}

    break;

  case 97:

    {add_command(cTEXTSET2,NULL);}

    break;

  case 98:

    {add_command(cTEXTSET3,NULL);}

    break;

  case 99:

    {add_command(cTEXTCOLOR1,NULL);}

    break;

  case 100:

    {add_command(cTEXTCOLOR2,NULL);}

    break;

  case 101:

    {add_command(cTEXTCLEAR,NULL);}

    break;

  case 102:

    {add_command(cDRAWSET1,NULL);}

    break;

  case 103:

    {add_command(cDRAWSET2,NULL);}

    break;

  case 104:

    {add_command(cWINSET2,NULL);}

    break;

  case 105:

    {add_command(cDRAWSET3,NULL);}

    break;

  case 106:

    {add_command(cDRAWSET4,NULL);}

    break;

  case 107:

    {add_command(cVIEW,NULL);}

    break;

  case 108:

    {add_command(cWINCLEAR,NULL);}

    break;

  case 109:

    {add_command(cBOXVIEW,NULL);}

    break;

  case 110:

    {add_command(cBOXVIEWSET,NULL);}

    break;

  case 111:

    {add_command(cTAB,NULL);}

    break;

  case 112:

    {add_command(cTABSET,NULL);}

    break;

  case 113:

    {add_command(cTABADD, NULL);}

    break;

  case 114:

    {add_command(cTABDEL, NULL);}

    break;

  case 115:

    {add_command(cDOT,NULL);}

    break;

  case 116:

    {add_command(cLINE,NULL);}

    break;

  case 117:

    {add_command(cCIRCLE,NULL);}

    break;

  case 118:

    {add_command(cELLIPSE,NULL);}

    break;

  case 119:

    {add_command(cCURVE,NULL);}

    break;

  case 120:

    {add_command(cSLIDER1,NULL);}

    break;

  case 121:

    {add_command(cSLIDER2,NULL);}

    break;

  case 122:

    {add_command(cSLIDER3,NULL);}

    break;

  case 123:

    {add_command(cSLIDER4,NULL);}

    break;

  case 124:

    {add_command(cSLIDER5,NULL);}

    break;

  case 125:

    {add_command(cSLIDER6,NULL);}

    break;

  case 126:

    {add_command(cLAUNCH,NULL);}

    break;

  case 127:

    {add_command(cOPTION1,NULL);}

    break;

  case 128:

    {add_command(cOPTION2,NULL);}

    break;

  case 129:

    {add_command(cOPTION4,NULL);}

    break;

  case 130:

    {add_command(cOPTION5,NULL);}

    break;

  case 131:

    {add_command(cOPTION3,NULL);}

    break;

  case 132:

    {add_command(cBITMAP,NULL);}

    break;

  case 133:

    {add_command(cBITMAPGET, NULL);}

    break;

  case 134:

    {add_command(cBITMAPGET2, NULL);}

    break;

  case 135:

    {add_command(cBITMAPGETICON, NULL);}

    break;

  case 136:

    {add_command(cBITMAPDRAW,NULL);}

    break;

  case 137:

    {add_command(cBITMAPDRAW2,NULL);}

    break;

  case 138:

    {add_command(cBITMAPREMOVE,NULL);}

    break;

  case 139:

    {add_command(cSCREENSHOT,NULL);}

    break;

  case 140:

    {add_command(cCANVAS,NULL);}

    break;

  case 141:

    {add_command(cDROPZONE,NULL);}

    break;

  case 142:

    {add_command(cCOLORCONTROL1,NULL);}

    break;

  case 143:

    {add_command(cCOLORCONTROL2,NULL);}

    break;

  case 144:

    {add_command(cTEXTCONTROL2,NULL);}

    break;

  case 145:

    {add_command(cTEXTCONTROL3,NULL);}

    break;

  case 146:

    {add_command(cTEXTCONTROL4,NULL);}

    break;

  case 147:

    {add_command(cTEXTCONTROL5,NULL);}

    break;

  case 148:

    {add_command(cTREEBOX1,NULL);}

    break;

  case 149:

    {add_command(cTREEBOX2,NULL);}

    break;

  case 150:

    {add_command(cTREEBOX3,NULL);}

    break;

  case 151:

    {add_command(cTREEBOX13,NULL);}

    break;

  case 152:

    {add_command(cTREEBOX12,NULL);}

    break;

  case 153:

    {add_command(cTREEBOX4,NULL);}

    break;

  case 154:

    {add_command(cTREEBOX5,NULL);}

    break;

  case 155:

    {add_command(cTREEBOX7,NULL);}

    break;

  case 156:

    {add_command(cTREEBOX8,NULL);}

    break;

  case 157:

    {add_command(cTREEBOX9,NULL);}

    break;

  case 158:

    {add_command(cTREEBOX10,NULL);}

    break;

  case 159:

    {add_command(cTREEBOX11,NULL);}

    break;

  case 160:

    {add_command(cBUTTONIMAGE,NULL);}

    break;

  case 161:

    {add_command(cCHECKBOXIMAGE,NULL);}

    break;

  case 162:

    {add_command(cCHECKBOXSET,NULL);}

    break;

  case 163:

    {add_command(cRADIOSET,NULL);}

    break;

  case 164:

    {add_command(cTOOLTIP,NULL);}

    break;

  case 165:

    {add_command(cTOOLTIPNEW,NULL);}

    break;

  case 166:

    {add_command(cTOOLTIPCOLOR,NULL);}

    break;

  case 167:

    {add_command(cLISTSORT,NULL);}

    break;

  case 168:

    {add_command(cTREESORT,NULL);}

    break;

  case 169:

    {add_command(cFILEBOX,NULL);}

    break;

  case 170:

    {add_command(cCOLUMNBOXADD,NULL);}

    break;

  case 171:

    {add_command(cFILEBOXADD2,NULL);}

    break;

  case 172:

    {add_command(cFILEBOXCLEAR,NULL);}

    break;

  case 173:

    {add_command(cCOLUMNBOXREMOVE,NULL);}

    break;

  case 174:

    {add_command(cCOLUMNBOXSELECT,NULL);}

    break;

  case 175:

    {add_command(cCOLUMNBOXCOLOR,NULL);}

    break;

  case 176:

    {add_command(cCALENDAR,NULL);}

    break;

  case 177:

    {add_command(cCALENDARSET,NULL);}

    break;

  case 178:

    {add_command(cSCROLLBAR,NULL);}

    break;

  case 179:

    {add_command(cSCROLLBARSET1,NULL);}

    break;

  case 180:

    {add_command(cSCROLLBARSET2,NULL);}

    break;

  case 181:

    {add_command(cSCROLLBARSET3,NULL);}

    break;

  case 182:

    {add_command(cDROPBOXSELECT,NULL);}

    break;

  case 183:

    {add_command(cMENU2,NULL);}

    break;

  case 184:

    {add_command(cMENU3,NULL);}

    break;

  case 185:

    {add_command(cSUBMENU1,NULL);}

    break;

  case 186:

    {add_command(cSUBMENU2,NULL);}

    break;

  case 187:

    {add_command(cSUBMENU3,NULL);}

    break;

  case 188:

    {add_command(cSTATUSBAR,NULL);}

    break;

  case 189:

    {add_command(cSTATUSBARSET,NULL);}

    break;

  case 190:

    {add_command(cSTATUSBARSET3,NULL);}

    break;

  case 191:

    {add_command(cSPINCONTROL1,NULL);}

    break;

  case 192:

    {add_command(cSPINCONTROL2,NULL);}

    break;

  case 193:

    {add_command(cCLIPBOARDCOPY,NULL);}

    break;

  case 194:

    {add_command(cPRINTERCONFIG,NULL);}

    break;

  case 195:

    {add_command(cMOUSESET,NULL);}

    break;

  case 196:

    {add_command(cSOUNDSTOP,NULL);}

    break;

  case 197:

    {add_command(cSOUNDSTOP,NULL);}

    break;

  case 198:

    {add_command(cSOUNDWAIT,NULL);}

    break;

  case 199:

    {add_command(cSOUNDWAIT,NULL);}

    break;

  case 200:

    {add_command(cMEDIASOUNDSTOP,NULL);}

    break;

  case 201:

    {add_command(cMEDIASOUNDSTOP,NULL);}

    break;

  case 202:

    {add_command(cSPLITVIEW1,NULL);}

    break;

  case 203:

    {add_command(cSPLITVIEW2,NULL);}

    break;

  case 204:

    {add_command(cSPLITVIEW3,NULL);}

    break;

  case 205:

    {add_command(cSTACKVIEW1,NULL);}

    break;

  case 206:

    {add_command(cSTACKVIEW2,NULL);}

    break;

  case 207:

    {add_command(cTEXTURL1, NULL);}

    break;

  case 208:

    {add_command(cTEXTURL2, NULL);}

    break;

  case 209:

    {add_command(cATTRIBUTE1, NULL);}

    break;

  case 210:

    {add_command(cATTRIBUTECLEAR, NULL);}

    break;

  case 211:

    {add_command(cPUTCHAR,NULL);}

    break;

  case 212:

    {add_command(cCLEARSCR,NULL);}

    break;

  case 213:

    {add_command(cWAIT,NULL);}

    break;

  case 214:

    {add_command(cBELL,NULL);}

    break;

  case 215:

    {create_pushdbl(-1);create_function(fINKEY);add_command(cPOP,NULL);}

    break;

  case 216:

    {create_pushdbl(-1);create_function(fINKEY);add_command(cPOP,NULL);}

    break;

  case 217:

    {create_function(fINKEY);add_command(cPOP,NULL);}

    break;

  case 218:

    {create_function(fSYSTEM2);
	add_command(cPOP,NULL);}

    break;

  case 219:

    {create_poke('s');}

    break;

  case 220:

    {create_poke('d');}

    break;

  case 221:

    {create_poke('S');}

    break;

  case 222:

    {create_poke('D');}

    break;

  case 223:

    {add_command(cEND,NULL);}

    break;

  case 224:

    {create_pushdbl(0);add_command(cEXIT,NULL);}

    break;

  case 225:

    {add_command(cEXIT,NULL);}

    break;

  case 226:

    {create_docu((yyvsp[0].symbol));}

    break;

  case 227:

    {add_command(cBIND,NULL);}

    break;

  case 228:

    {add_command(cPOPSTRSYM,dotify((yyvsp[-2].symbol),FALSE));}

    break;

  case 229:

    {create_changestring(fMID);}

    break;

  case 230:

    {create_changestring(fMID2);}

    break;

  case 231:

    {create_changestring(fLEFT);}

    break;

  case 232:

    {create_changestring(fRIGHT);}

    break;

  case 233:

    {create_doarray(dotify((yyvsp[-2].symbol),FALSE),ASSIGNSTRINGARRAY);}

    break;

  case 236:

    {create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}

    break;

  case 237:

    {create_myopen(OPEN_HAS_STREAM);}

    break;

  case 238:

    {add_command(cSWAP,NULL);create_pushstr("r");create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}

    break;

  case 239:

    {add_command(cSWAP,NULL);create_pushstr("w");create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}

    break;

  case 240:

    {add_command(cSEEK,NULL);}

    break;

  case 241:

    {add_command(cSEEK2,NULL);}

    break;

  case 242:

    {add_command(cPUSHSTRPTR,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 243:

    {create_doarray(dotify((yyvsp[-3].symbol),FALSE),GETSTRINGPOINTER);}

    break;

  case 244:

    {add_command(cPUSHSTRSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 246:

    {add_command(cSTRINGFUNCTION_OR_ARRAY,(yyvsp[0].symbol));}

    break;

  case 247:

    {if ((yyvsp[0].string)==NULL) {error(ERROR,"String not terminated");create_pushstr("");} else {create_pushstr((yyvsp[0].string));}}

    break;

  case 248:

    {add_command(cCONCAT,NULL);}

    break;

  case 250:

    {create_function(fLEFT);}

    break;

  case 251:

    {create_function(fRIGHT);}

    break;

  case 252:

    {create_function(fMID);}

    break;

  case 253:

    {create_function(fMID2);}

    break;

  case 254:

    {create_function(fSTR);}

    break;

  case 255:

    {create_function(fSTR2);}

    break;

  case 256:

    {create_function(fSTR3);}

    break;

  case 257:

    {create_pushdbl(-1);create_function(fINKEY);}

    break;

  case 258:

    {create_pushdbl(-1);create_function(fINKEY);}

    break;

  case 259:

    {create_function(fINKEY);}

    break;

  case 260:

    {create_function(fCHR);}

    break;

  case 261:

    {create_function(fUPPER);}

    break;

  case 262:

    {create_function(fLOWER);}

    break;

  case 263:

    {create_function(fLTRIM);}

    break;

  case 264:

    {create_function(fRTRIM);}

    break;

  case 265:

    {create_function(fTRIM);}

    break;

  case 266:

    {create_function(fSYSTEM);}

    break;

  case 267:

    {create_function(fDATE);}

    break;

  case 268:

    {create_function(fDATE);}

    break;

  case 269:

    {create_function(fTIME);}

    break;

  case 270:

    {create_function(fTIME);}

    break;

  case 271:

    {create_function(fPEEK2);}

    break;

  case 272:

    {create_function(fPEEK3);}

    break;

  case 273:

    {add_command(cTOKENALT2,NULL);}

    break;

  case 274:

    {add_command(cTOKENALT,NULL);}

    break;

  case 275:

    {add_command(cSPLITALT2,NULL);}

    break;

  case 276:

    {add_command(cSPLITALT,NULL);}

    break;

  case 277:

    {create_function(fGETCHAR);}

    break;

  case 278:

    {create_function(fHEX);}

    break;

  case 279:

    {create_function(fBIN);}

    break;

  case 280:

    {create_execute(1);add_command(cSWAP,NULL);add_command(cPOP,NULL);}

    break;

  case 281:

    {create_function(fMESSAGE);}

    break;

  case 282:

    {create_function(fMESSAGE);}

    break;

  case 283:

    {create_function(fMOUSEMOVE);}

    break;

  case 284:

    {create_function(fMOUSEMOVE);}

    break;

  case 285:

    {create_function(fTRANSLATE);}

    break;

  case 286:

    {create_function(fMENUTRANSLATE);}

    break;

  case 287:

    {create_function(fTEXTGET);}

    break;

  case 288:

    {create_function(fTEXTGET3);}

    break;

  case 289:

    {create_function(fTEXTGET6);}

    break;

  case 290:

    {create_function(fTEXTCONTROLGET);}

    break;

  case 291:

    {create_function(fLOAD);}

    break;

  case 292:

    {create_function(fSAVE);}

    break;

  case 293:

    {create_function(fMOUSE);}

    break;

  case 294:

    {create_function(fKEYBOARD);}

    break;

  case 295:

    {create_function(fCLIPBOARDPASTE);}

    break;

  case 296:

    {create_function(fCOLUMNBOXGET);}

    break;

  case 297:

    {create_function(fCALENDAR);}

    break;

  case 298:

    {create_function(fLISTBOXGET);}

    break;

  case 299:

    {create_function(fTREEBOXGET);}

    break;

  case 300:

    {create_function(fPOPUPMENU);}

    break;

  case 301:

    {create_function(fDROPBOXGET);}

    break;

  case 302:

    {create_function(fDRAWGET3);}

    break;

  case 303:

    {create_function(fATTRIBUTEGET1);}

    break;

  case 304:

    {add_command(cPOPDBLSYM,dotify((yyvsp[-2].symbol),FALSE));}

    break;

  case 305:

    {create_doarray((yyvsp[-2].symbol),ASSIGNARRAY);}

    break;

  case 306:

    {add_command(cORSHORT,NULL);pushlabel();}

    break;

  case 307:

    {poplabel();create_boole('|');}

    break;

  case 308:

    {add_command(cANDSHORT,NULL);pushlabel();}

    break;

  case 309:

    {poplabel();create_boole('&');}

    break;

  case 310:

    {create_boole('!');}

    break;

  case 311:

    {create_dblrelop('=');}

    break;

  case 312:

    {create_dblrelop('!');}

    break;

  case 313:

    {create_dblrelop('<');}

    break;

  case 314:

    {create_dblrelop('{');}

    break;

  case 315:

    {create_dblrelop('>');}

    break;

  case 316:

    {create_dblrelop('}');}

    break;

  case 317:

    {add_command(cTESTEOF,NULL);}

    break;

  case 318:

    {add_command(cGLOB,NULL);}

    break;

  case 319:

    {create_pushdbl((yyvsp[0].fnum));}

    break;

  case 320:

    {add_command(cARDIM,"");}

    break;

  case 321:

    {add_command(cARDIM,"");}

    break;

  case 322:

    {add_command(cARSIZE,"");}

    break;

  case 323:

    {add_command(cARSIZE,"");}

    break;

  case 324:

    {add_command(cFUNCTION_OR_ARRAY,(yyvsp[0].symbol));}

    break;

  case 325:

    {add_command(cPUSHDBLSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 326:

    {create_dblbin('+');}

    break;

  case 327:

    {create_dblbin('-');}

    break;

  case 328:

    {create_dblbin('*');}

    break;

  case 329:

    {create_dblbin('/');}

    break;

  case 330:

    {create_dblbin('^');}

    break;

  case 331:

    {add_command(cNEGATE,NULL);}

    break;

  case 332:

    {create_strrelop('=');}

    break;

  case 333:

    {create_strrelop('!');}

    break;

  case 334:

    {create_strrelop('<');}

    break;

  case 335:

    {create_strrelop('{');}

    break;

  case 336:

    {create_strrelop('>');}

    break;

  case 337:

    {create_strrelop('}');}

    break;

  case 340:

    {create_pusharrayref(dotify((yyvsp[-2].symbol),FALSE),stNUMBERARRAYREF);}

    break;

  case 341:

    {create_pusharrayref(dotify((yyvsp[-2].symbol),FALSE),stSTRINGARRAYREF);}

    break;

  case 343:

    {create_function(fSIN);}

    break;

  case 344:

    {create_function(fASIN);}

    break;

  case 345:

    {create_function(fCOS);}

    break;

  case 346:

    {create_function(fACOS);}

    break;

  case 347:

    {create_function(fTAN);}

    break;

  case 348:

    {create_function(fATAN);}

    break;

  case 349:

    {create_function(fATAN2);}

    break;

  case 350:

    {create_function(fEXP);}

    break;

  case 351:

    {create_function(fLOG);}

    break;

  case 352:

    {create_function(fLOG2);}

    break;

  case 353:

    {create_function(fSQRT);}

    break;

  case 354:

    {create_function(fSQR);}

    break;

  case 355:

    {create_function(fINT);}

    break;

  case 356:

    {create_function(fFRAC);}

    break;

  case 357:

    {create_function(fABS);}

    break;

  case 358:

    {create_function(fSIG);}

    break;

  case 359:

    {create_function(fMOD);}

    break;

  case 360:

    {create_function(fRAN);}

    break;

  case 361:

    {create_function(fRAN2);}

    break;

  case 362:

    {create_function(fMIN);}

    break;

  case 363:

    {create_function(fMAX);}

    break;

  case 364:

    {create_function(fLEN);}

    break;

  case 365:

    {create_function(fVAL);}

    break;

  case 366:

    {create_function(fASC);}

    break;

  case 367:

    {create_function(fDEC);}

    break;

  case 368:

    {create_function(fDEC2);}

    break;

  case 369:

    {if (check_compat) error(WARNING,"instr() has changed in version 2.712"); create_function(fINSTR);}

    break;

  case 370:

    {create_function(fINSTR2);}

    break;

  case 371:

    {create_function(fRINSTR);}

    break;

  case 372:

    {create_function(fRINSTR2);}

    break;

  case 373:

    {create_function(fSYSTEM2);}

    break;

  case 374:

    {create_function(fPEEK4);}

    break;

  case 375:

    {create_function(fPEEK);}

    break;

  case 376:

    {create_function(fAND);}

    break;

  case 377:

    {create_function(fOR);}

    break;

  case 378:

    {create_function(fEOR);}

    break;

  case 379:

    {create_function(fTELL);}

    break;

  case 380:

    {add_command(cTOKEN2,NULL);}

    break;

  case 381:

    {add_command(cTOKEN,NULL);}

    break;

  case 382:

    {add_command(cSPLIT2,NULL);}

    break;

  case 383:

    {add_command(cSPLIT,NULL);}

    break;

  case 384:

    {create_execute(0);add_command(cSWAP,NULL);add_command(cPOP,NULL);}

    break;

  case 385:

    {create_myopen(0);}

    break;

  case 386:

    {create_myopen(OPEN_HAS_MODE);}

    break;

  case 387:

    {create_myopen(OPEN_HAS_STREAM);}

    break;

  case 388:

    {create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);}

    break;

  case 389:

    {create_function(fDRAWIMAGE);}

    break;

  case 390:

    {create_function(fDRAWIMAGE2);}

    break;

  case 391:

    {create_function(fDRAWSVG);}

    break;

  case 392:

    {create_function(fNUMWINDOWS);}

    break;

  case 393:

    {create_function(fISMOUSEIN);}

    break;

  case 394:

    {create_function(fCOLUMNBOXCOUNT);}

    break;

  case 395:

    {create_function(fWINDOWGET);}

    break;

  case 396:

    {create_function(fVIEWGET);}

    break;

  case 397:

    {create_function(fALERT);}

    break;

  case 398:

    {create_function(fLISTBOXCOUNT);}

    break;

  case 399:

    {create_function(fTREEBOXCOUNT);}

    break;

  case 400:

    {create_function(fSCROLLBARGET);}

    break;

  case 401:

    {create_function(fSPLITVIEWGET);}

    break;

  case 402:

    {create_function(fSTACKVIEWGET);}

    break;

  case 403:

    {create_function(fTABVIEWGET);}

    break;

  case 404:

    {create_function(fSPINCONTROLGET);}

    break;

  case 405:

    {create_function(fDROPBOXCOUNT);}

    break;

  case 406:

    {create_function(fSLIDERGET);}

    break;

  case 407:

    {create_function(fCOLORCONTROLGET);}

    break;

  case 408:

    {create_function(fTEXTGET2);}

    break;

  case 409:

    {create_function(fTEXTGET4);}

    break;

  case 410:

    {create_function(fTEXTGET5);}

    break;

  case 411:

    {create_function(fDRAWGET1);}

    break;

  case 412:

    {create_function(fDRAWGET2);}

    break;

  case 413:

    {create_function(fDRAWGET4);}

    break;

  case 414:

    {create_function(fMESSAGESEND);}

    break;

  case 415:

    {create_function(fTHREADKILL);}

    break;

  case 416:

    {create_function(fTHREADGET);}

    break;

  case 417:

    {create_function(fPRINTER);}

    break;

  case 418:

    {create_function(fSOUND);}

    break;

  case 419:

    {create_function(fMEDIASOUND);}

    break;

  case 420:

    {create_function(fISCOMPUTERON);}

    break;

  case 421:

    {create_function(fLISTBOXGETNUM);}

    break;

  case 422:

    {create_function(fDROPBOXGETNUM);}

    break;

  case 423:

    {create_function(fTREEBOXGETNUM);}

    break;

  case 424:

    {create_function(fCOLUMNBOXGETNUM);}

    break;

  case 425:

    {create_function(fTREEBOXGETOPT);}

    break;

  case 426:

    {create_function(fBITMAPSAVE);}

    break;

  case 427:

    {create_function(fBITMAPLOAD);}

    break;

  case 428:

    {create_function(fBITMAPGET);}

    break;

  case 429:

    {create_function(fBITMAPCOLOR);}

    break;

  case 430:

    {create_function(fATTRIBUTEGET2);}

    break;

  case 431:

    {(yyval.fnum)=(yyvsp[0].fnum);}

    break;

  case 432:

    {(yyval.fnum)=(yyvsp[0].fnum);}

    break;

  case 433:

    {(yyval.fnum)=-(yyvsp[0].fnum);}

    break;

  case 434:

    {(yyval.fnum)=(yyvsp[0].fnum);}

    break;

  case 435:

    {(yyval.fnum)=strtod((yyvsp[0].digits),NULL);}

    break;

  case 436:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[0].digits),FALSE));}

    break;

  case 437:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 438:

    {create_dim(dotify((yyvsp[-3].symbol),FALSE),'D');}

    break;

  case 439:

    {create_dim(dotify((yyvsp[-3].symbol),FALSE),'D');}

    break;

  case 440:

    {create_dim(dotify((yyvsp[-3].symbol),FALSE),'S');}

    break;

  case 441:

    {create_dim(dotify((yyvsp[-3].symbol),FALSE),'S');}

    break;

  case 442:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[-3].symbol),FALSE));}

    break;

  case 443:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[-3].symbol),FALSE));}

    break;

  case 444:

    {add_command(cPUSHFREE,NULL);}

    break;

  case 451:

    {missing_endsub++;missing_endsub_line=mylineno;pushlabel();report_missing(WARNING,"do not define a function in a loop or an if-statement");if (function_type!=ftNONE) {error(ERROR,"nested functions not allowed");YYABORT;}}

    break;

  case 452:

    {if (exported) create_sublink((yyvsp[0].symbol)); create_label((yyvsp[0].symbol),cUSER_FUNCTION);
	               add_command(cPUSHSYMLIST,NULL);add_command(cCLEARREFS,NULL);firstref=lastref=lastcmd;
		       create_numparam();}

    break;

  case 453:

    {create_require(stFREE);add_command(cPOP,NULL);}

    break;

  case 454:

    {add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftNONE,function_type);function_type=ftNONE;add_command(cRET_FROM_FUN,NULL);lastref=NULL;create_endfunction();poplabel();}

    break;

  case 455:

    {if (missing_endsub) {sprintf(string,"%d end-sub(s) are missing (last at line %d)",missing_endsub,missing_endsub_line);error(ERROR,string);} YYABORT;}

    break;

  case 456:

    {missing_endsub--;}

    break;

  case 457:

    {function_type=ftNUMBER;current_function=my_strdup(dotify((yyvsp[0].symbol),FALSE));(yyval.symbol)=my_strdup(dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 458:

    {function_type=ftSTRING;current_function=my_strdup(dotify((yyvsp[0].symbol),FALSE));(yyval.symbol)=my_strdup(dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 459:

    {exported=FALSE;}

    break;

  case 460:

    {exported=TRUE;}

    break;

  case 461:

    {exported=FALSE;}

    break;

  case 462:

    {exported=TRUE;}

    break;

  case 465:

    {create_makelocal(dotify((yyvsp[0].symbol),FALSE),syNUMBER);}

    break;

  case 466:

    {create_makelocal(dotify((yyvsp[0].symbol),FALSE),sySTRING);}

    break;

  case 467:

    {create_makelocal(dotify((yyvsp[-3].symbol),FALSE),syARRAY);create_dim(dotify((yyvsp[-3].symbol),FALSE),'d');}

    break;

  case 468:

    {create_makelocal(dotify((yyvsp[-3].symbol),FALSE),syARRAY);create_dim(dotify((yyvsp[-3].symbol),FALSE),'s');}

    break;

  case 471:

    {create_makestatic(dotify((yyvsp[0].symbol),TRUE),syNUMBER);}

    break;

  case 472:

    {create_makestatic(dotify((yyvsp[0].symbol),TRUE),sySTRING);}

    break;

  case 473:

    {create_makestatic(dotify((yyvsp[-3].symbol),TRUE),syARRAY);create_dim(dotify((yyvsp[-3].symbol),TRUE),'D');}

    break;

  case 474:

    {create_makestatic(dotify((yyvsp[-3].symbol),TRUE),syARRAY);create_dim(dotify((yyvsp[-3].symbol),TRUE),'S');}

    break;

  case 478:

    {create_require(stNUMBER);create_makelocal(dotify((yyvsp[0].symbol),FALSE),syNUMBER);add_command(cPOPDBLSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 479:

    {create_require(stSTRING);create_makelocal(dotify((yyvsp[0].symbol),FALSE),sySTRING);add_command(cPOPSTRSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 480:

    {create_require(stNUMBERARRAYREF);create_arraylink(dotify((yyvsp[-2].symbol),FALSE),stNUMBERARRAYREF);}

    break;

  case 481:

    {create_require(stSTRINGARRAYREF);create_arraylink(dotify((yyvsp[-2].symbol),FALSE),stSTRINGARRAYREF);}

    break;

  case 482:

    {missing_next++;missing_next_line=mylineno;}

    break;

  case 483:

    {pushname(dotify((yyvsp[-1].symbol),FALSE)); /* will be used by next_symbol to check equality */
	     add_command(cRESETSKIPONCE,NULL);
	     pushgoto();add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);}

    break;

  case 484:

    { /* pushes another expression */
	     add_command(cSKIPONCE,NULL);
	     pushlabel();
	     add_command(cSTARTFOR,NULL);
	     add_command(cPOPDBLSYM,dotify((yyvsp[-6].symbol),FALSE));
	     poplabel();
	     add_command(cPUSHDBLSYM,dotify((yyvsp[-6].symbol),FALSE));
	     add_command(cFORINCREMENT,NULL);
	     add_command(cPOPDBLSYM,dotify((yyvsp[-6].symbol),FALSE));
	     add_command(cPUSHDBLSYM,dotify((yyvsp[-6].symbol),FALSE));
	     add_command(cFORCHECK,NULL);
	     add_command(cDECIDE,NULL);
             pushlabel();}

    break;

  case 485:

    {
             swap();popgoto();poplabel();}

    break;

  case 486:

    {create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}

    break;

  case 487:

    {if (missing_next) {sprintf(string,"%d next(s) are missing (last at line %d)",missing_next,missing_next_line);error(ERROR,string);} YYABORT;}

    break;

  case 488:

    {missing_next--;}

    break;

  case 489:

    {create_pushdbl(1);}

    break;

  case 491:

    {pop(stSTRING);}

    break;

  case 492:

    {if (strcmp(pop(stSTRING)->pointer,dotify((yyvsp[0].symbol),FALSE))) 
             {error(ERROR,"'for' and 'next' do not match"); YYABORT;}
           }

    break;

  case 493:

    {push_switch_id();add_command(cPUSH_SWITCH_MARK,NULL);create_break_mark(0,1);
	add_command(cCONTINUE_CORRECTION,NULL);}

    break;

  case 494:

    {create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);create_clean_switch_mark(0,FALSE);pop_switch_id();}

    break;

  case 495:

    {if ((yyvsp[0].sep)>=0) mylineno+=(yyvsp[0].sep);}

    break;

  case 496:

    {if ((yyvsp[0].sep)>=0) mylineno+=(yyvsp[0].sep);}

    break;

  case 500:

    {create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);}

    break;

  case 501:

    {add_command(cSWITCH_COMPARE,NULL);add_command(cDECIDE,NULL);add_command(cMINOR_BREAK,NULL);create_break_mark(1,0);}

    break;

  case 502:

    {add_command(cNEXT_CASE,NULL);}

    break;

  case 504:

    {if ((yyvsp[0].sep)>=0) mylineno+=(yyvsp[0].sep); create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);}

    break;

  case 506:

    {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_loop++;missing_loop_line=mylineno;pushgoto();}

    break;

  case 508:

    {if (missing_loop) {sprintf(string,"%d loop(s) are missing (last at line %d)",missing_loop,missing_loop_line);error(ERROR,string);} YYABORT;}

    break;

  case 509:

    {missing_loop--;popgoto();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}

    break;

  case 510:

    {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_wend++;missing_wend_line=mylineno;pushgoto();}

    break;

  case 511:

    {add_command(cDECIDE,NULL);
	      pushlabel();}

    break;

  case 513:

    {if (missing_wend) {sprintf(string,"%d wend(s) are missing (last at line %d)",missing_wend,missing_wend_line);error(ERROR,string);} YYABORT;}

    break;

  case 514:

    {missing_wend--;swap();popgoto();poplabel();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}

    break;

  case 515:

    {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_until++;missing_until_line=mylineno;pushgoto();}

    break;

  case 517:

    {if (missing_until) {sprintf(string,"%d until(s) are missing (last at line %d)",missing_until,missing_until_line);error(ERROR,string);} YYABORT;}

    break;

  case 518:

    {missing_until--;add_command(cDECIDE,NULL);popgoto();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);}

    break;

  case 519:

    {add_command(cDECIDE,NULL);storelabel();pushlabel();}

    break;

  case 520:

    {missing_endif++;missing_endif_line=mylineno;}

    break;

  case 521:

    {swap();matchgoto();swap();poplabel();}

    break;

  case 522:

    {poplabel();}

    break;

  case 524:

    {if (missing_endif) {sprintf(string,"%d endif(s) are missing (last at line %d)",missing_endif,missing_endif_line);error(ERROR,string);} YYABORT;}

    break;

  case 525:

    {missing_endif--;}

    break;

  case 526:

    {fi_pending++;add_command(cDECIDE,NULL);pushlabel();}

    break;

  case 527:

    {poplabel();}

    break;

  case 531:

    {add_command(cDECIDE,NULL);pushlabel();}

    break;

  case 532:

    {swap();matchgoto();swap();poplabel();}

    break;

  case 537:

    {add_command(cCHKPROMPT,NULL);}

    break;

  case 539:

    {create_myread('d',tileol);add_command(cPOPDBLSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 540:

    {create_myread('d',tileol);create_doarray(dotify((yyvsp[-3].symbol),FALSE),ASSIGNARRAY);}

    break;

  case 541:

    {create_myread('s',tileol);add_command(cPOPSTRSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 542:

    {create_myread('s',tileol);create_doarray(dotify((yyvsp[-3].symbol),FALSE),ASSIGNSTRINGARRAY);}

    break;

  case 545:

    {create_readdata('d');add_command(cPOPDBLSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 546:

    {create_readdata('d');create_doarray(dotify((yyvsp[-3].symbol),FALSE),ASSIGNARRAY);}

    break;

  case 547:

    {create_readdata('s');add_command(cPOPSTRSYM,dotify((yyvsp[0].symbol),FALSE));}

    break;

  case 548:

    {create_readdata('s');create_doarray(dotify((yyvsp[-3].symbol),FALSE),ASSIGNSTRINGARRAY);}

    break;

  case 549:

    {create_strdata((yyvsp[0].string));}

    break;

  case 550:

    {create_dbldata((yyvsp[0].fnum));}

    break;

  case 551:

    {create_strdata((yyvsp[0].string));}

    break;

  case 552:

    {create_dbldata((yyvsp[0].fnum));}

    break;

  case 556:

    {create_print('s');}

    break;

  case 557:

    {create_print('s');}

    break;

  case 558:

    {create_print('d');}

    break;

  case 559:

    {create_print('u');}

    break;

  case 560:

    {create_print('U');}

    break;

  case 561:

    {add_command(cPUSHDBLSYM,dotify((yyvsp[0].symbol),FALSE));create_pps(cPUSHSTREAM,1);}

    break;

  case 562:

    {create_pps(cPOPSTREAM,0);}

    break;

  case 563:

    {create_pushdbl(atoi((yyvsp[0].digits)));create_pps(cPUSHSTREAM,1);}

    break;

  case 564:

    {create_pps(cPOPSTREAM,0);}

    break;

  case 565:

    {create_pps(cPUSHSTREAM,1);}

    break;

  case 566:

    {create_pps(cPOPSTREAM,0);}

    break;

  case 567:

    {add_command(cMOVE,NULL);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,1);}

    break;

  case 568:

    {create_pps(cPOPSTREAM,0);}

    break;

  case 569:

    {create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,1);}

    break;

  case 570:

    {create_pps(cPOPSTREAM,0);}

    break;

  case 571:

    {create_pushstr("?");create_print('s');}

    break;

  case 572:

    {create_pushstr((yyvsp[0].string));create_print('s');}

    break;

  case 573:

    {create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 574:

    {add_command(cPUSHDBLSYM,dotify((yyvsp[0].symbol),FALSE));create_pps(cPUSHSTREAM,0);}

    break;

  case 575:

    {create_pushdbl(atoi((yyvsp[0].digits)));create_pps(cPUSHSTREAM,0);}

    break;

  case 576:

    {create_pps(cPUSHSTREAM,0);}

    break;

  case 577:

    {create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 578:

    {create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 579:

    {create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 580:

    {add_command(cMOVE,NULL);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 581:

    {add_command(cMOVE,NULL);create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 582:

    {add_command(cMOVE,NULL);create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 583:

    {add_command(cMOVE,NULL);create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);}

    break;

  case 584:

    {create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);}

    break;

  case 585:

    {create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);}

    break;

  case 586:

    {create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);}

    break;

  case 589:

    {create_goto((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));add_command(cFINDNOP,NULL);}

    break;

  case 590:

    {create_goto((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));add_command(cFINDNOP,NULL);}

    break;

  case 591:

    {create_gosub((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));add_command(cFINDNOP,NULL);}

    break;

  case 592:

    {create_gosub((function_type!=ftNONE)?dotify((yyvsp[0].symbol),TRUE):(yyvsp[0].symbol));add_command(cFINDNOP,NULL);}

    break;



      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
