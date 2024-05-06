#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   59_常用排序算法.cpp
 * @date    :   2024/05/06 17:48:33
 * @author  :   Peng
 * @version :   1.0
 * @brief   :   None
 */

/*
常用排序算法：
    sort(iterator beg, iterator end, _Pred);
    random_shuffle(iterator beg, iterator end);
    merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dst);
        合并容器，并存储到另外一个容器。要求待合并的两个容器必须是有序的，合并后的结果仍然是有序的
    reverse
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

void printVectorInt(vector<int> &vec)
{
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
}

void printVectorPerson(vector<Person> &vec)
{
    for (vector<Person>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << "Name: " << iter->m_Name << " Age: " << iter->m_Age << endl;
    }
}

// 内置数据类型
void testSort()
{
    srand((unsigned int) time(NULL));

    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        int temp = rand() % 101;
        vec.push_back(temp);
    }

    cout << "Before sort: " << endl;
    printVectorInt(vec);

    cout << "After sort: (ascending, default)" << endl;
    sort(vec.begin(), vec.end());
    printVectorInt(vec);

    cout << "After sort: (descending)" << endl;
    sort(vec.begin(), vec.end(), greater<int>());
    printVectorInt(vec);
}

// 内置数据类型
void testRandomShuffle1()
{
    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }

    cout << "Before shuffling: " << endl;
    printVectorInt(vec);

    cout << "After shuffling: " << endl;
    random_shuffle(vec.begin(), vec.end());
    printVectorInt(vec);
}

// 自定义数据类型
void testRandomShuffle2()
{
    // 随机种子
    srand((unsigned int) time(NULL));

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

    cout << "Before shuffling: " << endl;
    printVectorPerson(vec);

    cout << "After shuffling: " << endl;
    random_shuffle(vec.begin(), vec.end());
    printVectorPerson(vec);
}

void testMerge()
{
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vec3;

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 1)
        {
            vec1.push_back(i);
        }
        else
        {
            vec2.push_back(i);
        }        
    }

    vec3.resize(vec1.size() + vec2.size());
    merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());

    printVectorInt(vec1);
    printVectorInt(vec2);
    printVectorInt(vec3);
}

void testReverse()
{
    srand((unsigned int) time(NULL));

    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        int temp = rand() % 101;
        vec.push_back(temp);
    }

    cout << "Before reversing: " << endl;
    printVectorInt(vec);

    cout << "After reversing" << endl;
    reverse(vec.begin(), vec.end());
    printVectorInt(vec);
}

int main(int argc, char const *argv[])
{
    // testSort();
    // testRandomShuffle1();
    // testRandomShuffle2();
    // testMerge();
    testReverse();

    system("pause");
    return 0;
}
