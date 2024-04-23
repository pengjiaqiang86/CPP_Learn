#include <iostream>

using namespace std;

/*
2024年4月23日15:26:32

类模板与函数模板的区别
1. 类模板没有自动类型推导
2. 类模板在模板参数列表可以有默认参数

*/

template <class NameType, class AgeType = int>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_Name = name;
        this->m_age = age;
    }

    ~Person() {}

    void showInfo()
    {
        cout << "Name: " << this->m_Name << endl;
        cout << "Age: " << this->m_age << endl;
    }

public:
    NameType m_Name;
    AgeType m_age;
};

void test1()
{
    // 1. 类模板没有自动类型推导，必须显式指定
    // Person p1("p1", "5"); // error

    // 2. 模板参数列表可以有默认值
    Person<string, int> p1("p1", 8); // OK
    p1.showInfo();

    Person<string> p2("p2", 10); // OK
    p2.showInfo();

    Person<string, string> p3("p3", "12"); // OK
    p3.showInfo();
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
