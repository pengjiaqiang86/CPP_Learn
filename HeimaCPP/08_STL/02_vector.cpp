#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
2024年4月27日15:41:40

vector存放自定义数据类型
*/

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    void printInfo()
    {
        cout << "Name = " << this->m_Name << '\t';
        cout << "Age = " << this->m_Age << endl;
    }

public:
    string m_Name;
    int m_Age;
};

void test1()
{
    vector<Person> v;
    
    Person p1("a", 1);
    Person p2("b", 2);
    Person p3("c", 3);
    Person p4("d", 4);
    Person p5("e", 5);
    Person p6("f", 6);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    v.push_back(p6);

    for (vector<Person>::iterator iter = v.begin(); iter != v.end(); iter++)
    {
        // (*iter).printInfo();
        iter->printInfo();
    }
}

void test2()
{
    vector<Person*> v;
    
    Person p1("a", 1);
    Person p2("b", 2);
    Person p3("c", 3);
    Person p4("d", 4);
    Person p5("e", 5);
    Person p6("f", 6);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);
    v.push_back(&p6);

    for (vector<Person*>::iterator iter = v.begin(); iter != v.end(); iter++)
    {
        // (**iter).printInfo();
        (*iter)->printInfo();
    }
}

int main(int argc, char const *argv[])
{
    // test1();
    test2();
    
    system("pause");
    return 0;
}
