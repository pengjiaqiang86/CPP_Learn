#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <ctime>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   52_逻辑仿函数.cpp
 * @time    :   2024/05/05 13:38:22
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
逻辑仿函数：
    template<class T> bool logical_and<T>
    template<class T> bool logical_or<T>
    template<class T> bool logical_not<T>
*/

void printVector(const vector<bool> &vec)
{
    for (typename vector<bool>::const_iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test1()
{
    vector<bool> vec;

    srand((unsigned int) time(NULL));

    for (int i = 0; i < 10; i++)
    {
        int temp = rand() % 101;
        vec.push_back(temp > 50);
    }
    
    printVector(vec);

    // 将vec搬运到vec2容器，并执行取反操作
    vector<bool> vec2;
    vec2.resize(vec.size());

    transform(vec.begin(), vec.end(), vec2.begin(), logical_not<bool>());

    printVector(vec2);
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
