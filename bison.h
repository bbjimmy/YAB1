/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison interface for Yacc-like parsers in C

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
