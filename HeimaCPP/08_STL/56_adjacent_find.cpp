#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   56_adjacent_find.cpp
 * @date    :   2024/05/06 17:21:35
 * @author  :   Peng
 * @version :   1.0
 * @brief   :   None
 */

/*
adjacent_find查找相邻重复元素

函数原型：
    adjacent_find(iterator beg, iterator end);
*/

void test()
{
    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);

        if (i % 2 == 1)
        {
            vec.push_back(i); // 如果是奇数，再添加一次}
        }

        vector<int>::iterator iter = adjacent_find(vec.begin(), vec.end());

        if (iter == vec.end())
        {
            cout << "没有找到相邻重复元素" << endl;
        }
        else
        {
            cout << *iter << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    system("chcp 65001"); // 以utf-8编解码

    test();

    system("pause");
    return 0;
}
