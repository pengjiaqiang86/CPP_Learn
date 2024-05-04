#include <iostream>
#include <set>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   41_set容器排序.cpp
 * @time    :   2024/05/04 11:38:35
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
set容器默认排序是按照从小到大，可以利用仿函数改变排序规则
*/

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};

class MyCompare
{
public:
    bool operator()(const int a, const int b) const
    {
        return a > b;
    }

    bool operator()(const Person &p1, const Person &p2) const
    {
        return p1.m_Age > p2.m_Age;
    }
};


void printSet(const set<int> st)
{
    for (typename set<int>::const_iterator iter = st.begin(); iter != st.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

void printSet(const set<int, MyCompare> st)
{
    for (typename set<int, MyCompare>::const_iterator iter = st.begin(); iter != st.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

void printSet(const set<Person, MyCompare> st)
{
    for (typename set<Person, MyCompare>::const_iterator iter = st.begin(); iter != st.end(); iter++)
    {
        cout << iter->m_Name << " " << iter->m_Age << ";\t";
    }
    cout << endl;
}

// 内置数据类型
void test1()
{
    set<int> set1;

    set1.insert(1);
    set1.insert(3);
    set1.insert(-3);
    set1.insert(7);
    set1.insert(5);

    printSet(set1);

    cout << "=================" << endl;

    set<int, MyCompare> set2;

    set2.insert(1);
    set2.insert(3);
    set2.insert(-3);
    set2.insert(7);
    set2.insert(5);

    printSet(set2);
}

// 自定义数据类型
void test2()
{
    set<Person, MyCompare> set1;

    Person p1("a", 3);
    Person p2("z", 1);
    Person p3("s", 5);
    Person p4("d", 2);

    set1.insert(p1);
    set1.insert(p2);
    set1.insert(p3);
    set1.insert(p4);

    printSet(set1);
}

int main(int argc, char const *argv[])
{
    // test1();
    test2();

    system("pause");
    return 0;
}
