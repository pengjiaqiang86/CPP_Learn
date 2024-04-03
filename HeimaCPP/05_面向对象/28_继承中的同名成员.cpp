#include <iostream>

using namespace std;

/*
1.继承中同名成员，通过子类调用到子类或者父类的数据

子类成员：直接访问
父类成员：需要加作用域。子类对象.父类名::父类成员

如果子类出现与父类同名的成员函数，子类的同名函数会隐藏所有父类的同名成员函数，
如果想访问父类的成员函数，需要加作用域

2.同名静态成员
静态成员和非静态成员出现同名，处理方式一致

子类同名成员，可以直接访问
父类同名成员，需要加作用域
*/

class Base {
public:
    Base() {
        this->m_A = 1;
        cout << "Base构造函数" << endl;
    }

    ~Base() {
        cout << "Base析构函数" << endl;
    }

    void func() {
        cout << "Base func()" << endl;
    }

    void func(int) {
        cout << "Base func(int)" << endl;
    }

    static void staticFunc() {
        cout << "Base staticFunc()" << endl;
    }

    static void staticFunc(int) {
        cout << "Base staticFunc(int)" << endl;
    }

    int m_A;

    static int m_Static;
};

class Son :public Base {
public:
    Son() {
        this->m_A = 2;
        cout << "Son构造函数" << endl;
    }

    ~Son() {
        cout << "Son析构函数" << endl;
    }

    void func() {
        cout << "Son func()" << endl;
    }

    static void staticFunc() {
        cout << "Son staticFunc()" << endl;
    }

    int m_A;

    static int m_Static;
};

// 初始化静态变量（类内声明，类外初始化）
int Base::m_Static = 100;
int Son::m_Static = 200;

// 非静态成员
void test1() {

    cout << "-------------------" << endl;
    cout << "非静态成员：" << endl;
    Son s;

    // 成员变量
    cout << "Son m_A: " << s.m_A << endl;
    cout << "Base m_A: " << s.Base::m_A << endl;

    // 成员函数
    s.func();
    // s.func(2); // 无法访问
    s.Base::func();
    s.Base::func(2);
}

// 静态成员
void test2() {

    cout << "-------------------" << endl;
    cout << "静态成员，通过子类对象访问：" << endl;
    Son s;

    // 静态属性
    cout << "Son m_Static: " << s.m_Static << endl;
    cout << "Base m_Static: " << s.Base::m_Static << endl;

    // 静态函数
    s.staticFunc();
    // s.staticFunc(2);// 无法访问
    s.Base::staticFunc();
    s.Base::staticFunc(2);

    cout << "静态成员，通过类名访问：" << endl;
    cout << "Son m_Static: " << Son::m_Static << endl;
    cout << "Base m_Static: " << Base::m_Static << endl;
    cout << "Base m_Static: " << Son::Base::m_Static << endl;

    // 静态函数
    Son::staticFunc();
    // Son::staticFunc(2);// 无法访问
    Base::staticFunc();
    Base::staticFunc(2);
}

int main(int argc, char const *argv[])
{
    // 非静态成员
    test1();

    // 静态成员
    test2();

    system("pause");
    return 0;
}
