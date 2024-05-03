#include <iostream>
#include <list>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   34_list排序案例.cpp
 * @time    :   2024/05/03 10:39:41
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

class Person
{
public:
    Person(string name, int age, int height)
    {
        this->m_Name = name;
        this->m_Age = age;
        this->m_Height = height;
    }

    string m_Name;
    int m_Age;
    int m_Height;
};

void printPerson(const list<Person> listPerson)
{
    for (typename list<Person>::const_iterator iter = listPerson.begin(); iter != listPerson.end(); iter++)
    {
        cout << "Name: " << iter->m_Name << " Age: " << iter->m_Age << " Height: " << iter->m_Height << endl;
    }
}

bool comparePerson(const Person &p1, const Person &p2)
{
    return p1.m_Age < p2.m_Age;
}

void test1()
{
    list<Person> listPerson;

    Person p1("p1", 35, 175);
    Person p2("p2", 45, 180);
    Person p3("p3", 40, 170);
    Person p4("p4", 25, 190);
    Person p5("p5", 35, 160);
    Person p6("p6", 35, 200);

    listPerson.push_back(p1);
    listPerson.push_back(p2);
    listPerson.push_back(p3);
    listPerson.push_back(p4);
    listPerson.push_back(p5);
    listPerson.push_back(p6);

    printPerson(listPerson);

    cout << "---------------- Sort ----------------" << endl;
    listPerson.sort(comparePerson);

    printPerson(listPerson);
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
