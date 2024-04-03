#include <iostream>

using namespace std;

/*
静态成员：也就是在成员变量和成员方法之前加上static关键字，成为静态成员
静态成员也存在访问权限
静态成员有两种调用方式：对象.成员 或 类名::成员

1.静态成员变量：
    所有对象共享同一个数据
    在编译阶段就分配了内存
    类内声明，类外初始化
2.静态成员函数：
    所有对象共享同一个函数
    静态成员函数只能访问静态成员变量
*/

class Person {
public:
    // 类内定义
    static int m_A;
    int m_C;

    static void func() {
        cout << m_A << endl;
        // cout << m_C << endl; // error 静态成员不能访问非静态成员
        cout << "func" << endl;
    }

private:
    static int m_B;
};

// 类外初始化
int Person::m_A = 2;
int Person::m_B = 6;

int main(int argc, char const *argv[])
{
    // 所有对象共享数据
    Person p1;
    cout << Person::m_A << endl; // 2
    Person p2;    p2.m_A = 1;
    cout << Person::m_A << endl; // 1

    // 静态成员的访问权限
    // cout << Person::m_B << endl; // error，不可访问

    system("pause");
    return 0;
}
