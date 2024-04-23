#include <iostream>

using namespace std;

/*
2024年4月22日11:37:25

函数模板的注意事项：
1. 自动类型推导，必须推导出一致的数据类型T
2. 模板必须要确定出T的数据类型，才可以使用
*/


// 1. 自动类型推导，必须推导出一致的数据类型T
template<typename T1>
void mySwap(T1 &a, T1 &b)
{
    T1 temp = a;
    a = b;
    b = temp;
}

void test1()
{
    int a = 10;
    int b = 20;
    char c = 'c';

    mySwap(a, b); // 正确
    // mySwap(a, c); // 错误
}


// 2. 模板必须要确定出T的数据类型，才可以使用
template<typename T2>
void func()
{}

void test2()
{
    // func(); // 错误。没有与参数列表匹配的 函数模板 "func" 实例
    func<int>();
}

int main(int argc, char const *argv[])
{
    // test1();
    // test2();

    return 0;
}
