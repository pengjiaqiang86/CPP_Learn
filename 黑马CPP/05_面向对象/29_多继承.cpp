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
