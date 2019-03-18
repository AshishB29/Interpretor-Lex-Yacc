#define INTEGER 257
#define SYMBOL 258
#define WHILE 259
#define IF 260
#define RETURN 261
#define PRINT 262
#define EQ 263
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union { 
    int iValue;                 /* integer value */ 
    char sIndex;                /* symbol table index */ 
    nodeType *nPtr;             /* node pointer */ 
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
