#include <iostream>

using namespace std;

/*
C++中的引用
    作用：给变量起一个别名
    语法：数据类型 &别名 = 原名;
    注意事项：1.引用必须初始化；2.初始化之后不可以再改变

引用的本质：
    引用在C++内部实际上是一个指针常量
    int i = 10;
    // int& ref = i;
    int* const ref = &i;
*/

// 1. 引用的声明
void test1() {
    // 1. 声明
    int i = 10;
    int &newName = i;

    // i = 10       newName = 10
    // i = 6422036  newName = 6422036
    cout << "i = " << i << " newName = " << newName << endl;
    cout << "i = " << (int) &i << " newName = " << (int) &newName << endl;

    // 通过引用修改变量值
    // i = 20       newName = 20
    newName = 20;
    cout << "i = " << i << " newName = " << newName << endl;
}

// 2. 引用的注意事项
void test2() {
    int a = 10;

    // 1. 必须初始化
    // error: 'b' declared as reference but not initialized
    // int &b;

    // 2. 初始化之后不能修改
    // error: redeclaration of 'int& b'
    int &b = a;
    int c = 20;
    // int &b = c;
}

// 3. 常量引用
void test3() {
    // 合法
    // int a = 10;
    // int& ref = a;

    // 非法
    // error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    // int& ref = 10;

    // 合法
    // const int& ref = 10;
    // ref = 20; // error: assignment of read-only reference 'ref'
}

int main(int argc, char const *argv[])
{
    // test1();
    // test2();
    test3();

    system("pause");
    return 0;
}
