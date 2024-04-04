#include <iostream>

using namespace std;

/*
1.常函数
const修饰成员函数，称为常函数。
常函数中不允许修改成员变量的值，如果需要修改，则需要在成员变量之前用mutable关键字修饰

2.常对象
常对象只能修改mutable修饰的成员变量
常对象只能调用常函数
*/

class Person {
public:
    Person() {}
    
    // 常函数：
    // this指针本质上是指针常量，即不允许修改指针的指向
    // 在成员函数中加上const，修饰的是this，让this指针指向的值也不可以修改
    // 也就是 Person * const this 变为 const Person * const this
    void showPerson() const {
        // this->m_Name = "zhangsan"; // error
        this->m_Age = 18; // OK
    }

    void func() {}

    string m_Name;
    mutable int m_Age;
};

int main(int argc, char const *argv[])
{
    const Person p;
    // p.m_Name = ""; // error
    p.m_Age = 20; // OK，mutable修饰，在常函数和常对象中都可以修改

    // p.func(); // error，常对象只能调用常函数
    p.showPerson(); // OK

    system("pause");
    return 0;
}
