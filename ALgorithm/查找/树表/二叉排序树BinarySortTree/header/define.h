#define ENDFLAG 0
typedef int BSTkeyType;
typedef char *BSTOtherInfo;
typedef struct __BSTElemType{
    BSTkeyType key;
    BSTOtherInfo other;
}BSTElemType;
typedef struct __BSTNode{
    BSTElemType data;
    struct __BSTNode *lchild;
    struct __BSTNode *rchild;
}BSTNode,BSTree;
