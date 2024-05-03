#include <iostream>
#include <set>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   39_set和multiset.cpp
 * @time    :   2024/05/03 11:26:43
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
set不允许插入重复数据，multiset可以
*/

void test1()
{
    set<int> s1;

    // 第一次插入数据
    pair<set<int>::iterator, bool> ret = s1.insert(1);

    if (ret.second)
    {
        cout << "success" << endl;
    }
    else
    {
        cout << "failure" << endl;
    }

    // 第二次插入数据
    ret = s1.insert(1);

    if (ret.second)
    {
        cout << "success" << endl;
    }
    else
    {
        cout << "failure" << endl;
    }
}

void test2()
{
    multiset<int> s1;

    // 第一次插入数据
    // insert返回值只有iterator
    set<int>::iterator ret = s1.insert(1);

    // 第二次插入数据
    ret = s1.insert(1);
}

int main(int argc, char const *argv[])
{
    test1();
    test2();

    system("pause");
    return 0;
}
