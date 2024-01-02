#define ENDFLAG 0 //结束符
typedef int BSTkeyType;
typedef char *BSTOtherInfo;
typedef struct __BSTElemType{
    BSTkeyType key;
    BSTOtherInfo other;
}BSTElemType;
typedef struct __BSTNode{
    BSTElemType data;
    __BSTNode *lchild;
    __BSTNode *rchild;
}BSTNode,BSTree;
