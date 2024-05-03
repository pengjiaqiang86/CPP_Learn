#include <iostream>
#include <set>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   35_set容器.cpp
 * @time    :   2024/05/03 10:56:55
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
set容器基本概念
    简介：
        所有元素在添加时会自动被排序

    本质：
        set和multiset属于关联式容器，底层结构是二叉树

    set和multiset：
        set不允许有重复元素
        multiset允许有重复元素

set构造函数与赋值
    set<T>st;
    set(const set &st);

    set& operator=(const set &st);

    insert(elem); // 插入时自动排序
*/

void printSet(const set<int> st)
{
    for (typename set<int>::const_iterator iter = st.begin(); iter != st.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

void test()
{
    set<int> s1;
    s1.insert(3);
    s1.insert(1);
    s1.insert(3);
    s1.insert(5);

    printSet(s1); // 1 3 5

    set<int> s2(s1);

    printSet(s2);
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
