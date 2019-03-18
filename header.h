typedef enum { typeCon, typeId, typeOpr } nodeEnum;

/* constants */
typedef struct {
    int value;
} conNode;

/* identifiers */
typedef struct {
    int i;
} idNode;

/* operators */
typedef struct {
    int oper;
    int nops;
    struct nodeTypeTag *op[1];
} oprNode;

typedef struct nodeTypeTag {
    nodeEnum type;

    union {
        conNode con;
        idNode id;
        oprNode opr;
    };
} nodeType;

extern int sym[26];
