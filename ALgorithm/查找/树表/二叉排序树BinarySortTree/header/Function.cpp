#include "define.h"
#include <iostream>
using namespace std;
BSTree *CreatBTree(BSTree *T = NULL)
{
    BSTkeyType key;
    cin >> key;
    if (0 == key)
    {
        T = NULL;
        return NULL;
    }
    else
    {
        if (!(T = new BSTNode))
        {
            cout << "内存分配失败！" << endl;
        }
        cout << T << endl;
        T->data.key = key;
        T->lchild = CreatBTree(T->lchild);
        T->rchild = CreatBTree(T->rchild);
    }
    return T;
}

void CreatBTree(BSTree **T)
{
    BSTkeyType key;
    cin >> key;
    if (0 == key)
    {
        *T = NULL;
    }
    else
    {
        if (!(*T = new BSTNode))
        {
            cout << "内存分配失败！" << endl;
        }
        cout << T << endl;
        (*T)->data.key = key;
        CreatBTree(&(*T)->lchild);
        CreatBTree(&(*T)->rchild);
    }
}

void PrintTree(BSTree *T)
{
    bool flag = (T == NULL);
    if (flag)
    {
        ;
    }
    else
    {
        cout << T->data.key << endl;
        PrintTree(T->lchild);
        PrintTree(T->rchild);
    }
}