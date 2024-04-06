#include <iostream>

using namespace std;

/*
C++允许多继承
语法：class 子类名 : 继承类型 父类1, 继承类型 父类2 ...
问题：父类出现同名成员，需要加作用域加以区分。一般不推荐使用多继承
*/

class Base1 {

public:
    Base1() {
        this->m_A = 1;
    }
    ~Base1() {}

    int m_A;
};

class Base2 {

public:
    Base2() {
        this->m_A = 2;
        this->m_B = 2;
    }
    ~Base2() {}

    int m_A;
    int m_B;
};

/*
查看Son类内部结构
命令：切换到文件所在路径；VS Developer Command Prompt；cl/d1 reportSingleClassLayoutSon 29_多继承.cpp

class Son       size(16):
        +---
 0      | +--- (base class Base1)
 0      | | m_A
        | +---
 4      | +--- (base class Base2)
 4      | | m_A
 8      | | m_B
        | +---
12      | m_C
        +---
*/

class Son : public Base1, public Base2 {

public:
    Son() {
        this->m_C = 3;
    }
    ~Son() {}

    int m_C;
};

int main(int argc, char const *argv[]) {
    Son s;

    cout << "Sizeof Son instance = " << sizeof(s) << endl; // 16

    // cout << s.m_A << endl; // 错误："Son::m_A" 不明确
    cout << "Base1 m_A = " << s.Base1::m_A <<endl; // OK
    cout << "Base2 m_A = " << s.Base2::m_A <<endl; // OK
    cout << "Son m_B = " << s.m_B << endl;
    cout << "Son m_C = " << s.m_C << endl;

    system("pause");
    return 0;
}
