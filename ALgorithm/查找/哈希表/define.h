#define _m 11 // 表长
#define _n 9 //元素个数
#define NULLKEY 0
typedef int HashElemType;
typedef char HashOther;
typedef struct __HashTable
{
    HashElemType key;
    HashOther other;
} HashTable[_m];
