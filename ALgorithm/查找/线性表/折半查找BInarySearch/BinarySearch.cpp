#include "define.h"
#include <iostream>
int BinarySearch(SSTable *ST, KeyType key);
int main()
{
    SSTable ST;
    ST.length = 9;
    SSTElemType *p = ST.base + 1;
    for (int i = 1; i <= ST.length; i++)
    {
        KeyType key = i;
        p->key = key;
        p++;
    }
    int flag = BinarySearch(&ST, 10);
    std::cout << flag << std::endl;
}
int BinarySearch(SSTable *ST, KeyType key)
{
    int low = 1, high = ST->length;
    ST->base[0].key = key;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (ST->base[mid].key == ST->base[0].key)
        {
            return mid;
        }
        else if (ST->base[mid].key > ST->base[0].key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}