#include <iostream>

using namespace std;

/*
2024年4月23日15:09:58

类模板的定义：

```cpp
template<typename T>
class MyClass
{};
```

*/

template<class NameType, class AgeType>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_Name = name;
        this->m_age = age;
    }

    ~Person(){}

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
    Person<string, int> p1("a", 8);
    p1.showInfo();
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
