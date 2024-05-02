#include <iostream>
#include <queue>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   27_queue.cpp
 * @time    :   2024/05/02 11:15:38
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
queue是一种先进先出（First In First Out）的数据结构
有两个出口，一端新增数据，另一端移除数据
只有队头和队尾才可以被外界使用，因此也不允许遍历

构造函数：
    queue<T> que;
    queue(const queue &que);

赋值操作：
    queue& operator=(const queue &que);

数据存取：
    push(elem);
    pop();
    back();
    front();

大小操作：
    empty();
    size();
*/

void test()
{
    queue<int>que;
    for (int i = 0; i < 6; i++)
    {
        que.push(i);
    }
    
    while (!que.empty())
    {
        // front: 0 back: 5
        // front: 1 back: 5
        // front: 2 back: 5
        // front: 3 back: 5
        // front: 4 back: 5
        // front: 5 back: 5
        cout << "front: " << que.front() << " back: " << que.back()
             << " size: " << que.size() << endl;
        que.pop();
    }
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
