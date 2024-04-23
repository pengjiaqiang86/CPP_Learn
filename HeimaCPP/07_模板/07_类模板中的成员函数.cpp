#include <iostream>

using namespace std;

/*
2024年4月23日15:41:32

类模板中的成员函数在调用的时候才创建
*/

class Person1
{
public:
    void showPerson1()
    {
        cout << "Person1" << endl;
    }
};

class Person2
{
public:
    void showPerson2()
    {
        cout << "Person2" << endl;
    }
};

template <class T>
class TestClass
{
public:
    T field;

public:
    void func1()
    {
        field.showPerson1();
    }

    void func2()
    {
        field.showPerson2();
    }
};

int main(int argc, char const *argv[])
{
    TestClass<Person1> m;

    m.func1();
    // m.func2(); // error: 'class Person1' has no member named 'showPerson2'

    system("pause");
    return 0;
}
