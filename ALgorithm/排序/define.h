#define SORTSIZE 20
typedef int SortType;
typedef char SortOther;
typedef struct __RecordType{
    SortType key;
    SortOther other;
} RecordType;
typedef struct __RecordList{
    RecordType r[SORTSIZE + 1];//数组中的0号位置做guard
    int length;
} RecordList;
