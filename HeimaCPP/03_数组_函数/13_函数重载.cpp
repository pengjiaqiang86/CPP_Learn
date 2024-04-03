#include <iostream>

using namespace std;

/*
函数的重载：可以让函数同名，提高复用性

条件：
1. 在同一个作用域下
2. 函数名称相同，但函数的参数类型 或 参数个数 或 参数顺序不同

注意：
1. 函数的返回值不可以作为函数重载的条件。编译器无法重载仅按照返回值区分的函数
2. 引用作为函数重载的条件
3. 函数重载碰到函数默认参数（出现二义性，会出错，应尽量避免）
*/

// 1. 函数重载
void func() {
    cout << "func" << endl;
}

void func(int a) {
    cout << "func(int a)" << endl;
}

void func(int a, double b) {
    cout << "func(int a, double b)" << endl;
}

void func(double a, int b) {
    cout << "func(double a, int b)" << endl;
}

// 2. 函数重载，而且函数参数是引用
void refFunc(int& a) {
    cout << "refFunc (int& a)" << endl;
}

void refFunc(const int& a) {
    cout << "refFunc (const int& a)" << endl;
}

// 3. 函数重载与函数默认参数同时出现时，可能会出现的问题
void defaultParams(int a, int b = 5) {
    cout << (a + b) << endl;
}

// void defaultParams(int a) {
//     cout << a << endl;
// }

int main(int argc, char const *argv[])
{
    // 1. 函数重载
    // func();
    // func(1);
    // func(1, 2.0);
    // func(1.0, 2);

    // 2. 函数重载，而且函数参数是引用
    // int a = 10;
    // refFunc(a); // refFunc (int& a)

    // const int b = 20;
    // refFunc(b); // refFunc (const int& a)

    // refFunc(10); // refFunc (const int& a)

    // 3. 函数重载与函数默认参数同时出现时，可能会出现的问题
    defaultParams(1); // error

    system("pause");
    return 0;
}
