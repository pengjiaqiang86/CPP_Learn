#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   58_count_and_count_if.cpp
 * @date    :   2024/05/06 17:35:50
 * @author  :   Peng
 * @version :   1.0
 * @brief   :   None
 */

/*
count(iterator beg, iterator end, val);
count_if(iterator beg, iterator end, _Pred); // _Pred是谓词
*/

bool greaterThanFive(int val)
{
    return val > 5;
}

void test()
{
    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }

    int ret = count(vec.begin(), vec.end(), 5);

    if (ret == 0)
    {
        cout << "没有找到" << endl;
    }
    else
    {
        cout << ret << endl;
    }
}

void test2()
{
    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }

    int ret = count_if(vec.begin(), vec.end(), greaterThanFive);

    if (ret == 0)
    {
        cout << "没有找到符合条件的元素" << endl;
    }
    else
    {
        cout << ret << endl; // 4
    }
}

int main(int argc, char const *argv[])
{
    // test();
    test2();

    system("pause");
    return 0;
}
