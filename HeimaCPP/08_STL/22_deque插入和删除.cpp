#include <iostream>
#include <deque>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   22_deque插入和删除.cpp
 * @time    :   2024/04/30 23:34:46
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
插入和删除

两端插入：
    push_back(elem);    // 在容器尾添加一个数据
    push_front(elem);   // 在容器头部添加一个数据
    pop_back();         // 删除容器最后一个数据
    pop_front();        // 删除容器第一个数据

指定位置插入和删除
    insert(pos, elem);      // 在pos位置插入elem的拷贝，返回新数据的地址
    insert(pos, n, elem);   // 在pos位置插入n个elem，返回新数据的地址
    insert(pos, beg, end);  // 在pos位置插入[beg, end)区间的数据，无返回值
    clear();                // 清空
    erase(beg, end);        // 删除[beg, end)区间的数据，返回下一个数据的位置
    erase(pos);             // 删除pos位置的数据，返回下一个数据的位置
*/

void printDeque(const deque<int> &deq)
{
    for (deque<int>::const_iterator iter = deq.begin(); iter != deq.end(); iter++)
    {
        cout << *iter << "  ";
    }
    cout << endl;
}

void test1()
{
    // 创建deque对象
    deque<int> deq1;
    for (int i = 0; i < 8; i++)
    {
        // push_back(elem);
        deq1.push_back(i);
    }
    
    // push_front(elem);
    deq1.push_front(-1);

    printDeque(deq1); // -1 0 ... 7

    // pop_back(); pop_front();
    deq1.pop_back();
    deq1.pop_front();

    printDeque(deq1);
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
