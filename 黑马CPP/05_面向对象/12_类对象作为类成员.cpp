#include <iostream>

using namespace std;

/*
C++类中的成员可以是另外一个类的对象，称该成员为 对象成员

创建子类对象时，先初始化父类，再初始化子类（Java一样）
析构函数的调用顺序刚好相反
*/

class A {
public:
    A() {
        cout << "A的无参构造函数" << endl;
    }

    ~A() {
        cout << "A的析构函数" << endl;
    }
};

class B {
public:
    B() {
        cout << "B的无参构造函数" << endl;
    }

    ~B(){
        cout << "B的析构函数" << endl;
    }

public:
    A a; // 对象成员
};

class C {
public:
    C () {
        cout << "C的无参构造函数" << endl;
    }

    ~C () {
        cout << "C的析构函数" << endl;
    }

public:
    B b;
};

void test1() {
    // 运行结果：
    // A的无参构造函数
    // B的无参构造函数
    // C的无参构造函数
    // C的析构函数
    // B的析构函数
    // A的析构函数
    C c;
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
