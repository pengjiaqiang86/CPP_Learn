#include <iostream>

using namespace std;

/*
2024年4月24日14:12:08

类模板实例化的对象，作为函数的参数

三种传参方式：
1. 指定传入的类型
2. 参数模板化
3. 整个类模板化
*/

template<class T1, class T2>
class Person
{
public:
    Person(T1 name, T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    ~Person(){}

    void info()
    {
        cout << "Name = " << this->m_Name << "\t";
        cout << "Age = " << this->m_Age << endl;
    }

public:
    T1 m_Name;
    T2 m_Age;
};

// 1. 指定传入类型
void func1(Person<string, int> &p)
{
    p.info();
}

void test1()
{
    Person<string, int> p("a", 1);
    func1(p);
}

// 2. 参数模板化
template<typename FuncT1, typename FuncT2>
void func2(Person<FuncT1, FuncT2> &p)
{
    p.info();
}

void test2()
{
    Person<string, int> p("b", 2);
    func2(p);
}

// 3. 整个类模板化
template<typename T>
void func3(T &p)
{
    p.info();
}

void test3()
{
    Person<string, int> p("c", 3);
    func3(p);
}

int main(int argc, char const *argv[])
{
    // test1();
    // test2();
    test3();

    system("pause");
    return 0;
}
