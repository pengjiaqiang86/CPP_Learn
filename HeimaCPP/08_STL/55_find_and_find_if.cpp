#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   55_常用查找算法.cpp
 * @time    :   2024/05/06 16:47:41
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
常用查找算法：
    find            // 查找元素
    find_if         // 按条件查找
        find_if(iterator beg, iterator end, _Pred)
    adjacent_find   // 查找相邻重复元素
    binary_search   // 二分查找
    count           // 统计元素个数
    count_if        // 按条件统计元素个数
*/


class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    bool operator==(const Person &p)
    {
        if (p.m_Name == this->m_Name && p.m_Age == this->m_Age)
        {
            return true;
        }
        return false;
    }

    string m_Name;
    int m_Age;
};

class FindPerson
{
public:
    bool operator()(Person &p)
    {
        return p.m_Age = 12;
    }
};

class GreaterThanFive
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};

class OlderThanFive
{
public:
    bool operator()(const Person &p)
    {
        return p.m_Age > 5;
    }
};

// 查找内置数据类型
void testFind1()
{
    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 1)
            vec.push_back(i); // 奇数
    }

    vector<int>::iterator pos = find(vec.begin(), vec.end(), 5);

    if (pos != vec.end())
    {
        cout << *pos << endl;
    }
    else
    {
        cout << "未查找到" << endl;
    }
}

// 查找自定义数据类型
void testFind2()
{
    vector<Person> vec;

    string nameSeed = "ABCDEFGHIJ";

    for (int i = 0; i < 10; i++)
    {
        string name = "Person_";
        name += nameSeed[i];

        int age = i + 6;
        
        Person p(name, age);

        vec.push_back(p);
    }

    Person p("Person_G", 12);

    // 注意，还需要重载Person类的==运算符
    vector<Person>::iterator pos = find(vec.begin(), vec.end(), p);

    if (pos != vec.end())
    {
        cout << "Name: " << (*pos).m_Name << " Age: " << (*pos).m_Age << endl;
    }
    else
    {
        cout << "未查找到" << endl;
    }
}

// 内置数据类型
void testFindIf1()
{
    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }

    vector<int>::iterator pos = find_if(vec.begin(), vec.end(), GreaterThanFive());

    if (pos != vec.end())
    {
        cout << *pos << endl; // 6
    }
    else
    {
        cout << "未查找到" << endl;
    }
}

// 自定义数据类型
void testFindIf2()
{
    vector<Person> vec;

    string nameSeed = "ABCDEFGHIJ";

    for (int i = 0; i < 10; i++)
    {
        string name = "Person_";
        name += nameSeed[i];

        int age = i + 1;
        
        Person p(name, age);

        vec.push_back(p);
    }

    vector<Person>::iterator pos = find_if(vec.begin(), vec.end(), OlderThanFive());

    if (pos != vec.end())
    {
        cout << "Name: " << (*pos).m_Name << " Age: " << (*pos).m_Age << endl;
    }
    else
    {
        cout << "未查找到" << endl;
    }
}

int main(int argc, char const *argv[])
{
    // testFind1();
    // testFind2();
    // testFindIf1();
    testFindIf2();

    system("pause");
    return 0;
}
