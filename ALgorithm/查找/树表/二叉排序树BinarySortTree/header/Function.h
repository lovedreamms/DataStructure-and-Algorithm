#include "Function.cpp"

extern BSTree *CreatBTree(BSTree *T);
// C++ 中不允许在函数声明和定义中都给参数设置默认值，
// 只能在函数声明或者函数定义的一处给参数设置默认值。
// 您需要修改代码，将函数声明和定义中只有一处给参数 T 设置默认值。

extern void CreatBTree(BSTree **T);

extern void PrintTree(BSTree *T);