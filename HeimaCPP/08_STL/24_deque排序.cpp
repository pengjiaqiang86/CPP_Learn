#include <iostream>
#include <deque>
#include <ctime>
#include <algorithm>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   24_deque排序.cpp
 * @time    :   2024/04/30 23:48:55
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
利用算法对deque容器进行排序

sort(iterator beg, iterator end); // 对beg和end区间内的元素进行排序
*/

void printDeque(const deque<int> &deq)
{
    for (deque<int>::const_iterator iter = deq.begin(); iter != deq.end(); iter++)
    {
        cout << *iter << "  ";
    }
    cout << endl;
}

void test()
{
    // 生成随机数
	// 包含ctime头文件：#include <ctime>
	// 生成随机种子：srand((unsigned int) time(NULL));
	// 生成随机数：rand() % 101 // 生成0-100之间的随机数
    srand((unsigned int) time(NULL));

    deque<int> deq;

    for (int i = 0; i < 12; i++)
    {
        int temp = rand() % 101; // 0 ~ 100内的随机数
        deq.push_back(temp);
    }
    
    cout << "before" << endl;
    printDeque(deq);

    // 排序
    sort(deq.begin(), deq.end());

    cout << "after" << endl;
    printDeque(deq);
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
