#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   54_transform.cpp
 * @time    :   2024/05/05 14:10:17
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
tramsform算法：
    搬运一个容器到另一个容器

函数原型：
    transform(iterator beg1, iterator end1, iterator beg2, _func);
    beg1是源容器的开始迭代器，end1是源容器的结束迭代器
    beg2是目标容器的开始迭代器，_func为函数或函数对象
*/

void printVector(vector<int> &vec)
{
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
}

int func(int val)
{
    return -val;
}

class Func
{
public:
    int operator()(int val)
    {
        return -val;
    }
};

void test1()
{
    vector<int> vecSrc;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        int temp = rand() % 101;
        vecSrc.push_back(temp);
    }

    vector<int> vecDst;
    vecDst.resize(vecSrc.size());

    // 普通函数
    transform(vecSrc.begin(), vecSrc.end(), vecDst.begin(), func);
    printVector(vecSrc);

    // 仿函数
    transform(vecSrc.begin(), vecSrc.end(), vecDst.begin(), Func());
    printVector(vecDst);
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
