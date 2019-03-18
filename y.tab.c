/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "assign.y"
 
#include <stdio.h> 
#include <stdlib.h> 
#include <stdarg.h> 
#include "assign.c"

/* Function Declarations */

nodeType *opr(int oper, int nops, ...); 
nodeType *id(int i); 
nodeType *con(int value); 
void freeNode(nodeType *p); 
int ex(nodeType *p); 
int yylex(void); 
void yyerror(char *s); 

/* Symbol Table */
int sym[26];
#line 21 "assign.y"
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
#line 53 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define INTEGER 257
#define SYMBOL 258
#define WHILE 259
#define IF 260
#define RETURN 261
#define PRINT 262
#define EQ 263
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    1,    1,    1,    1,    1,    1,    2,
    2,    2,    2,    2,    2,    2,    2,
};
static const YYINT yylen[] = {                            2,
    2,    2,    0,    5,    5,    5,    6,    5,    4,    1,
    1,    5,    5,    5,    5,    5,    5,
};
static const YYINT yydefred[] = {                         3,
    0,   10,   11,    0,    0,    2,    1,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    9,    0,    0,    0,
    0,    0,    0,    0,    0,    8,    6,    0,   17,   16,
   13,   15,   12,    4,    5,   14,    7,
};
static const YYINT yydgoto[] = {                          1,
    6,    7,
};
static const YYINT yysindex[] = {                         0,
  -84,    0,    0,  -78,  -42,    0,    0,  -37,  -82,  -78,
  -78,  -78,  -78,  -78,  -78,  -78,  -78,  -82, -248,  -78,
  -57,  -82,  -82,  -82,  -81,  -78,  -78,  -78,  -78,  -78,
  -82,  -78,  -78,  -79,  -77,  -82,    0,  -73,  -72,  -68,
  -67,  -65,  -64,  -55,  -54,    0,    0,  -52,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   33,   20,
};
#define YYTABLESIZE 226
static const YYINT yytable[] = {                         16,
   15,   18,   20,   19,   16,   15,    5,   20,   21,   32,
    0,   37,    8,   46,    0,   47,   18,   14,   19,   49,
   50,   17,   14,    9,   51,   52,   17,   53,   54,   23,
   24,   25,   26,   27,   28,   29,   30,   55,   56,   33,
   57,   22,    0,    0,    0,   38,   39,   40,   41,   42,
   31,   44,   45,    0,   34,   35,   36,    0,    0,    0,
    0,    0,    0,   43,    0,    0,    0,    0,   48,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    2,    3,    0,    4,    0,    4,    2,    3,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   10,   11,   12,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   10,   11,   12,    0,
   13,    0,    0,    0,    0,   13,
};
static const YYINT yycheck[] = {                         42,
   43,   59,   45,   61,   42,   43,   91,   45,   91,  258,
   -1,   93,   91,   93,   -1,   93,   59,   60,   61,   93,
   93,   64,   60,    4,   93,   93,   64,   93,   93,   10,
   11,   12,   13,   14,   15,   16,   17,   93,   93,   20,
   93,    9,   -1,   -1,   -1,   26,   27,   28,   29,   30,
   18,   32,   33,   -1,   22,   23,   24,   -1,   -1,   -1,
   -1,   -1,   -1,   31,   -1,   -1,   -1,   -1,   36,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  257,  258,   -1,  260,   -1,  260,  257,  258,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  259,  260,  261,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  259,  260,  261,   -1,
  263,   -1,   -1,   -1,   -1,  263,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 263
#define YYUNDFTOKEN 268
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,"'*'","'+'",0,"'-'",0,0,0,0,0,0,0,0,0,0,0,0,0,"';'","'<'","'='",
0,0,"'@'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,"']'",0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"INTEGER","SYMBOL","WHILE","IF","RETURN","PRINT","EQ",0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : func",
"func : func expr",
"func : func prog",
"func :",
"prog : '[' ';' prog prog ']'",
"prog : '[' '=' SYMBOL expr ']'",
"prog : '[' WHILE expr prog ']'",
"prog : '[' IF expr prog prog ']'",
"prog : IF expr prog prog ']'",
"prog : '[' RETURN expr ']'",
"expr : INTEGER",
"expr : SYMBOL",
"expr : '[' '@' expr expr ']'",
"expr : '[' '+' expr expr ']'",
"expr : '[' '-' expr expr ']'",
"expr : '[' '*' expr expr ']'",
"expr : '[' '<' expr expr ']'",
"expr : '[' EQ expr expr ']'",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 97 "assign.y"


nodeType *con(int value) { 
    nodeType *p; 
    if ((p = malloc(sizeof(nodeType))) == NULL)  /* Allocate Memory */
        yyerror("out of memory");  
    p->type = typeCon; 
    p->con.value = value; 
    return p; 
}

nodeType *id(int i) { 
    nodeType *p; 
    if ((p = malloc(sizeof(nodeType))) == NULL)       /* allocate Memory */ 
        yyerror("out of memory"); 
    p->type = typeId; 
    p->id.i = i; 
    return p; 
}

nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    int i;
    if ((p = malloc(sizeof(nodeType) + (nops-1) * sizeof(nodeType *))) == NULL)   /* Allocate Memory*/
        yyerror("out of memory");
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);
    return p;
}

void freeNode(nodeType *p) {
    int i;
    if (!p) return;
    if (p->type == typeOpr) {
        for (i = 0; i < p->opr.nops; i++)
            freeNode(p->opr.op[i]);
    }
    free (p);
}

void yyerror(char *s) {
    extern char* yytext;
    extern int yylineno;
    fprintf(stdout, "%s\nLine No: %d\nAt char: %c\n", s, yylineno,*yytext);
}

int main(void) {
    yyparse();
    return 0;
}
#line 317 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 42 "assign.y"
	{printf("%d",ex(yystack.l_mark[0].nPtr));}
break;
case 2:
#line 44 "assign.y"
	{ ex(yystack.l_mark[0].nPtr); freeNode(yystack.l_mark[0].nPtr); }
break;
case 4:
#line 50 "assign.y"
	{ yyval.nPtr = opr(';', 2, yystack.l_mark[-2].nPtr, yystack.l_mark[-1].nPtr); }
break;
case 5:
#line 53 "assign.y"
	{ yyval.nPtr = opr('=', 2, id(yystack.l_mark[-2].sIndex), yystack.l_mark[-1].nPtr); }
break;
case 6:
#line 56 "assign.y"
	{ yyval.nPtr = opr(WHILE, 2, yystack.l_mark[-2].nPtr, yystack.l_mark[-1].nPtr); }
break;
case 7:
#line 59 "assign.y"
	{ yyval.nPtr = opr(IF, 3, yystack.l_mark[-3].nPtr, yystack.l_mark[-2].nPtr, yystack.l_mark[-1].nPtr); }
break;
case 8:
#line 63 "assign.y"
	{ yyval.nPtr = opr(IF, 3, yystack.l_mark[-3].nPtr, yystack.l_mark[-2].nPtr, yystack.l_mark[-1].nPtr); }
break;
case 9:
#line 68 "assign.y"
	{ yyval.nPtr = opr(PRINT, 1, yystack.l_mark[-1].nPtr); }
break;
case 10:
#line 72 "assign.y"
	{ yyval.nPtr= con(yystack.l_mark[0].iValue); }
break;
case 11:
#line 75 "assign.y"
	{ yyval.nPtr = id(yystack.l_mark[0].sIndex); }
break;
case 12:
#line 79 "assign.y"
	{yyval.nPtr= opr('@', 2, yystack.l_mark[-2].nPtr,yystack.l_mark[-1].nPtr);}
break;
case 13:
#line 82 "assign.y"
	{ yyval.nPtr = opr('+', 2, yystack.l_mark[-2].nPtr,yystack.l_mark[-1].nPtr); }
break;
case 14:
#line 85 "assign.y"
	{ yyval.nPtr = opr('-', 2, yystack.l_mark[-2].nPtr,yystack.l_mark[-1].nPtr); }
break;
case 15:
#line 88 "assign.y"
	{ yyval.nPtr = opr('*', 2, yystack.l_mark[-2].nPtr, yystack.l_mark[-1].nPtr); }
break;
case 16:
#line 91 "assign.y"
	{ yyval.nPtr = opr('<', 2, yystack.l_mark[-2].nPtr, yystack.l_mark[-1].nPtr); }
break;
case 17:
#line 94 "assign.y"
	{ yyval.nPtr = opr(EQ, 2, yystack.l_mark[-2].nPtr, yystack.l_mark[-1].nPtr); }
break;
#line 583 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
