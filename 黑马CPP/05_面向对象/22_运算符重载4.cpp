#include <iostream>

using namespace std;

/*
重载=赋值运算符
*/

class Person {
public:
    Person() {}

    Person(string name) {
        this->m_Name = new string(name);
    }

    ~Person() {
        if (m_Name != NULL) {
            delete m_Name;
            m_Name = NULL;
        }
    }

    Person& operator=(Person & p) {
        // this->m_Name = p.m_Name; // 编译器提供的是浅拷贝？？？？？？？？？？

        if (m_Name != NULL) {
            delete m_Name;
            m_Name = NULL;
        }

        // 深拷贝，解决浅拷贝可能存在的重复释放内存的问题
        m_Name = new string(*p.m_Name);

        // 允许链式调用赋值操作
        return *this;
    }

public:
    string * m_Name;
};

int main(int argc, char const *argv[])
{
    Person p1("person1");
    Person p2("person2");
    Person p3("person3");

    p1 = p2 = p3;

    // person3 person3 person3
    cout << *(p1.m_Name) << " " << *(p2.m_Name) << " " << *(p3.m_Name) << endl;

    system("pause");
    return 0;
}
