#include <iostream>
#include "define.h"
using namespace std;
void input(RecordList *RL);
void InsertSort(RecordList *RL)
{
    int j = 0;
    for (int i = 2; i <= RL->length;i++)
    {
        if(RL->r[i].key < RL->r[i-1].key)
        {
            RL->r[0].key = RL->r[i].key;
            for (j = i - 2; RL->r[0].key <= RL->r[j].key;j--)
            {
                RL->r[j + 1].key = RL->r[j].key;
            }
            RL->r[j].key = RL->r[0].key;
        }
    }
}
int main()
{
    RecordList RL;
    RL.length = 9;
    input(&RL);
    InsertSort(&RL);
    for (int i = 1; i <= RL.length; i++)
    {
        printf("%d\n",RL.r[i].key);
    }
    printf("hello world");
    return 0;
}
void input(RecordList *RL)
{
    RecordType *p = RL->r + 1;
    for (int i = 1; i <= RL->length; i++)
    {
        SortType key;
        scanf(" %d", &key);
        p->key = key;
        p++;
    }
    p = NULL;
    
}