#include <iostream>
#include <deque>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   19_deque容器.cpp
 * @time    :   2024/04/30 22:42:30
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
deque(double-ended queue)是双端数组，可以对头端进行插入和删除操作

特点：
    vector对于头部的插入删除效率低，而且数据量越大，效率越低
    deque相对而言，对头部的插入删除速度比vector快
    vector访问元素的速度比deque快

构造函数：
    deque<T> deq;
    deque(beg, end);
    deque(n, elem);
    deque(const deque &deq);
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
    // deque<T> deq;
    deque<int> deq1;
    for (int i = 0; i < 8; i++)
    {
        deq1.push_back(i);
    }

    printDeque(deq1);

    // deque(beg, end);
    deque<int> deq2(deq1.begin(), deq1.end());

    printDeque(deq2);

    // deque(n, elem);
    deque<int> deq3(3, 6);

    printDeque(deq3);

    // deque(const deque &deq);
    deque<int> deq4(deq3);

    printDeque(deq4);
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
