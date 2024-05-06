#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   53_for_each.cpp
 * @time    :   2024/05/05 13:59:35
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
遍历算法：
    for_each   // 遍历容器
    transform  // 将一个容器搬运到另一个容器
*/

// void printVector(vector<int> &vec)
// {
//     for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
// }

void printInt(int val)
{
    cout << val << " ";
}

class PrintInt
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test1()
{
    vector<int> vec;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        int temp = rand() % 101;
        vec.push_back(temp);
    }

    // 普通函数
    for_each(vec.begin(), vec.end(), printInt);
    cout << endl;

    // 仿函数
    for_each(vec.begin(), vec.end(), PrintInt());
    cout << endl;
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
