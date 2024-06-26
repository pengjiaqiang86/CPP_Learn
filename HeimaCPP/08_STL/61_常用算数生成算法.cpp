#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   61_常用算数生成算法.cpp
 * @date    :   2024/05/07 22:17:29
 * @author  :   Peng
 * @version :   1.0
 * @brief   :   None
 */

/*
算术生成算法：
算术生成算法术语小型算法，调用的时候需要包含头文件numeric

算法简介：
    accumulate  // 计算容器中元素的累加总和
        accumulate(iterator beg, iterator end, value) // value为起始值
    fill        // 向容器中添加元素
        fill(iterator beg, iterator end, value);
*/

void printInt(int val)
{
    cout << val << " ";
}

void testAccumulate()
{
    vector<int> vec1;

    for (int i = 1; i < 101; i++)
    {
        vec1.push_back(i);
    }
    
    cout << "vec1: " << endl;
    for_each(vec1.begin(), vec1.end(), printInt);
    cout << endl;

    int ret = accumulate(vec1.begin(), vec1.end(), 0);

    cout << "Accumulating result: " << endl;
    cout << ret << endl;
}

void testFill()
{
    vector<int> vec1;
    vec1.resize(10);
    
    fill(vec1.begin(), vec1.end(), 6);

    for_each(vec1.begin(), vec1.end(), printInt);
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // testAccumulate();
    testFill();

    system("pause");
    return 0;
}
