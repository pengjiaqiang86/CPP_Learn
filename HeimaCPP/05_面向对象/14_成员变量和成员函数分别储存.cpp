#include <iostream>

using namespace std;

/*
成员变量和成员函数是分开储存的
只有非静态成员变量属于类对象
*/

class Test1 {};


class Test2 {
public:
    int m_A; // 非静态成员变量，属于类的对象
    static int m_B; // 静态成员变量，不属于类的对象
    void func() {} // 非静态成员函数，不属于类的对象
    static void func2() {} // 静态成员函数
};

int Test2::m_B = 0;


int main(int argc, char const *argv[])
{
    Test1 t1;
    // 空对象占用内存为1个字节
    cout << "size of t1: " << sizeof(t1) << endl; // 1

    Test2 t2;
    // 只有m_A：4字节；     添加m_B：4字节
    // 添加func()：4字节；  添加func2()：4字节
    // 因为后三者都不属于某一个类的对象
    cout << "size of t2: " << sizeof(t2) << endl; // 4

    system("pause");
    return 0;
}
