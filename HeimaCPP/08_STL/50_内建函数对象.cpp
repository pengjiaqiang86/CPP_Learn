#include <iostream>
#include <functional>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   50_内建函数对象.cpp
 * @time    :   2024/05/05 13:17:23
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
内建函数对象：STL中内建了一些函数对象

分类：
    算术仿函数
    关系仿函数
    逻辑仿函数

用法：
    使用内建函数对象，需要包含头文件`functional`
    用法和一般函数完全相同

----------------------------------------------

算术仿函数：
    可以实现四则运算

函数原型：
    template<class T> T plus<T>
    template<class T> T minus<T>
    template<class T> T multiplies<T>
    template<class T> T devides<T>
    template<class T> T modulus<T>
    template<class T> T negate<T>
*/

void test()
{
    negate<int> n;
    cout << n(10) << endl; // -10

    plus<int> p;
    cout << p(1, 2) << endl; // 3

    multiplies<int> m;
    cout << m(3, 6) << endl; // 18
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
