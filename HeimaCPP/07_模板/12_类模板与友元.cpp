#include <iostream>

using namespace std;


/*
2024年4月25日14:06:23

全局函数的类内外实现

类内实现：直接在类内声明友元即可
类外实现：需要让编译器知道全局函数的存在

建议全局函数做类内实现
*/


// 2.3 全局函数的类外实现（showPerson2之前还需要声明Person模板类的存在）
template<class T1, class T2>
class Person;

// 2.1 全局函数的类外实现
// 如果声明了函数模板，可以将类实现写到后面，否则需要将实现体写到类的前面让编译器提前看到
template<typename T1, typename T2>
void showPerson2(Person<T1, T2> &p)
{
    cout << "Name = " << p.m_Name << "\t";
    cout << "Age = "  << p.m_Age  << endl;
}

template<class T1, class T2>
class Person
{
    // 1. 类内实现
    friend void showPerson1(Person<T1, T2> &p)
    {
        cout << "Name = " << p.m_Name << "\t";
        cout << "Age = "  << p.m_Age  << endl;
    }

    // 2.2 声明友元函数
    // friend void showPerson2(Person<T1, T2> &p); 这样声明的是普通函数，需要修改为：
    // 
    friend void showPerson2<>(Person<T1, T2> &p);

public:
    Person(T1 name, T2 age)
    {
        this->m_Name = name;
        this->m_Age  = age;
    }

private:
    T1 m_Name;
    T2 m_Age;
};


void test1()
{
    Person<string, int> p1("p1", 1);
    showPerson1(p1);
}

void test2()
{
    Person<string, int> p2("p2", 2);
    showPerson2(p2);
}

int main(int argc, char const *argv[])
{
    // test1();
    test2();

    system("pause");
    return 0;
}
