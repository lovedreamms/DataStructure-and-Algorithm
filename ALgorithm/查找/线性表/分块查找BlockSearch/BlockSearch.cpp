#include "define.h"
#include <iostream>
using namespace std;
IndexTable INDEXTABLE;
int BlockSearch(KeyType *a, KeyType key)
{
    int left = 1;
    int right = INDEXTABLE.length;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (key > INDEXTABLE.index[mid].MaxKey)
        {
            left = mid + 1;
        }
        else if (key <= INDEXTABLE.index[mid].MaxKey)
        {
            right = mid - 1;
            for (int i = INDEXTABLE.index[mid].start; i <= INDEXTABLE.index[mid].end; i++)
            {
                if (key == a[i])
                    return i;
            }
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{

    KeyType a[19] = {0, 22, 12, 13, 8, 9, 20, 33, 42, 44, 38, 24, 48, 60, 58, 74, 49, 86, 53};
    INDEXTABLE.length = 3;
    INDEXTABLE.index[1].start = 1, INDEXTABLE.index[1].end = 6,
    INDEXTABLE.index[1].MaxKey = 22;
    INDEXTABLE.index[2].start = 7, INDEXTABLE.index[2].end = 12,
    INDEXTABLE.index[2].MaxKey = 48;
    INDEXTABLE.index[3].start = 13, INDEXTABLE.index[3].end = 18,
    INDEXTABLE.index[3].MaxKey = 86;
    std::cout << BlockSearch(a, 9) << std::endl;
    return 0;
}