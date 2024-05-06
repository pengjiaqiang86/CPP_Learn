#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   51_关系仿函数.cpp
 * @time    :   2024/05/05 13:27:47
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
关系仿函数：
    greater
    greater_equal
    less
    less_equal
    equal_to
    not_equal_to
*/

void test1()
{
    greater<int> g;
    cout << g(1, 2) << endl; // 0
    cout << g(2, 1) << endl; // 1
}

void test2()
{
    vector<int> vec;

    srand((unsigned int) time(NULL));

    for (int i = 0; i < 10; i++)
    {
        int temp = rand() % 101;
        vec.push_back(temp);
    }
    
    // sort(vec.begin(), vec.end(), MyCompare()); // 自定义仿函数
    sort(vec.begin(), vec.end(), greater<int>()); // 内建仿函数
}

int main(int argc, char const *argv[])
{
    test1();
    test2();

    system("pause");
    return 0;
}
