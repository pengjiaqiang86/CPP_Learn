#include <iostream>
#include <vector>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   15_vector插入和删除.cpp
 * @time    :   2024/04/30 21:45:37
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
push_back(ele); // 尾部插入元素ele
pop_back(); // 删除最后一个元素
insert(const_iterator pos, ele); // 迭代器指向的位置pos插入元素ele
insert(const_iterator pos, int count, ele); // 迭代器指向的位置pos插入count个元素ele
erase(const_iterator pos); // 删除迭代器指向的元素
erase(const_iterator start, const_iterator end); // 删除迭代器从start到end的元素
clear(); // 删除容器所有的元素
*/

void printVector(vector<int> &vec)
{
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
}

void test()
{
    vector<int> vec;

    // push_back(ele)
    for (int i = 0; i < 8; i++)
    {
        vec.push_back(i);
    }
    printVector(vec);

    // pop_back()
    vec.pop_back();
    printVector(vec);

    // insert(const_iterator pos, ele)
    vec.insert(vec.begin()+2, -1);
    printVector(vec);

    // insert(const_iterator pos, int count, ele)
    vec.insert(vec.begin(), 3, -2);
    printVector(vec);

    // erase(const_iterator pos)
    vec.erase(vec.begin());
    printVector(vec);

    // erase(const_iterator start, const_iterator end)
    vec.erase(vec.begin()+1, vec.begin()+3);
    printVector(vec);

    // clear()
    vec.clear();
    printVector(vec);
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
