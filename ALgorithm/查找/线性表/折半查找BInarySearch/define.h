#define SORTSIZE 20
typedef int KeyType;
typedef char *OtherType;
typedef struct {
    KeyType key;
    OtherType other;
} SSTElemType;
typedef struct 
{
    SSTElemType base[SORTSIZE+1]; // 存放数组的首地址(0号位置不存放关键字，预留给guard)
    int length;
} SSTable;