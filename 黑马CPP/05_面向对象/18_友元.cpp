#include <iostream>

using namespace std;

/*
友元：在程序中，有一些私有属性，也想让类外的一些特殊函数或类访问，需要使用友元
作用：让一个函数或类访问另一个类的私有成员
关键字：friend
三种实现方式：1.全局函数做友元 2.类做友元 3.成员函数做友元
*/

class Test1;
class Test2;
class Test3;


class Test3 {
public:
    Test3();

    // 允许info1访问私有属性
    void info1();

    // 不允许info2访问私有属性
    void info2();

public:
    Test1 * t;
};


class Test1 {

// 1.全局函数作为友元，friend关键字+函数声明
// 位置没有限制，也不需要加public或private
friend void globalFunction();

// 2.类作为友元，friend关键字+类声明
friend class Test2;

// 3.类的成员函数作为友元，friend关键字+类声明
friend void Test3::info1();
friend void Test3::info2();

public:
    Test1(){
        m_A = 3;
        m_B = 4;
    }

    Test1(int a, int b) {
        m_A = a;
        m_B = b;
    }

public:
    int m_A;

private:
    int m_B;
};


class Test2 {
public:
    Test2() {}

    void info() {
        t = new Test1;
        cout << "public m_A: " << t->m_A << endl;
        cout << "private m_B: " << t->m_B << endl;
    }

public:
    Test1 * t;
};

// 在类外实现Test3的构造方法
Test3::Test3() {
    this->t = new Test1;
}

void Test3::info1() {
        cout << "public m_A: " << t->m_A << endl;
        cout << "private m_B: " << t->m_B << endl;
}

void Test3::info2() {
        cout << "public m_A: " << t->m_A << endl;
        cout << "private m_B: " << t->m_B << endl;
}

// 1.全局函数作为友元
void globalFunction() {
    Test1 t1(1, 2);
    cout << "public m_A: " << t1.m_A << endl;
    cout << "private m_B: " << t1.m_B << endl;
}

// 2.类作为友元
void friendClass() {
    Test2 t;
    t.info();
}

// 3.类的成员函数作为友元
void friendMethod() {
    Test3 t;
    t.info1();
    t.info2();
}

int main(int argc, char const *argv[])
{
    globalFunction();

    friendClass();

    friendMethod();

    system("pause");
    return 0;
}
