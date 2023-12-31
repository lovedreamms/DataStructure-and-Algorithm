#define MAXBLOCK 20
typedef int KeyType;
typedef struct
{
    KeyType MaxKey;
    int start, end;
} IndexElemType;
typedef struct __IndexTable
{
    IndexElemType index[MAXBLOCK];
    int length;
} IndexTable;