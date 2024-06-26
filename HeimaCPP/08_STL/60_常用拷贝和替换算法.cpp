#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   60_常用拷贝和替换算法.cpp
 * @date    :   2024/05/07 21:52:22
 * @author  :   Peng
 * @version :   1.0
 * @brief   :   None
 */

/*
常用拷贝和替换算法

函数：
    copy        // 容器内指定范围内元素拷贝到另外一个容器
        copy(iterator beg, iterator end, iterator dst);
    replace     // 容器内指定范围内旧元素修改为新元素
        replace(iterator beg, iterator end, oldValue, newValue);
    replace_if  // 容器内指定范围内满足条件的元素修改为新元素
        replace_if(iterator beg, iterator end, pred, newValue)
    swap        // 互换两个容器的元素
        swap(container c1, container c2);
*/

void printVector(const vector<int> &vec)
{
    for (vector<int>::const_iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;    
}

bool greatThanFive(int val)
{
    return val > 5;
}

void testCopy()
{
    vector<int> vec1;
    vector<int> vec2;

    for (int i = 0; i < 10; i++)
    {
        vec1.push_back(i);
    }
    
    cout << "vec1" << endl;
    printVector(vec1);

    vec2.resize(vec1.size());
    copy(vec1.begin(), vec1.end(), vec2.begin());

    cout << "vec2" << endl;
    printVector(vec2);
}

void testCopyIf()
{
    vector<int> vec1;
    vector<int> vec2;

    for (int i = 0; i < 10; i++)
    {
        vec1.push_back(i);
    }
    
    cout << "vec1" << endl;
    printVector(vec1);

    vec2.resize(vec1.size());
    copy_if(vec1.begin(), vec1.end(), vec2.begin(), greatThanFive);

    cout << "vec2" << endl;
    printVector(vec2);
}

void testReplace()
{
    vector<int> vec1;

    for (int i = 0; i < 10; i++)
    {
        vec1.push_back(i);
    }
    
    cout << "before" << endl;
    printVector(vec1);

    replace(vec1.begin(), vec1.end(), 5, 0);

    cout << "after" << endl;
    printVector(vec1);
}

void testReplaceIf()
{
    vector<int> vec1;

    for (int i = 0; i < 10; i++)
    {
        vec1.push_back(i);
    }
    
    cout << "before" << endl;
    printVector(vec1);

    replace_if(vec1.begin(), vec1.end(), greatThanFive, 0);

    cout << "after" << endl;
    printVector(vec1);
}

void testSwap()
{
    vector<int> vec1;
    vector<int> vec2;

    for (int i = 0; i < 10; i++)
    {
        vec1.push_back(i);
        vec2.push_back(-i);
    }
    
    cout << "vec1 before swapping" << endl;
    printVector(vec1);

    cout << "vec2 before swapping" << endl;
    printVector(vec2);

    swap(vec1, vec2);

    cout << "vec1 after swapping" << endl;
    printVector(vec1);

    cout << "vec2 after swapping" << endl;
    printVector(vec2);
}

int main(int argc, char const *argv[])
{
    // testCopy();
    // testCopyIf();
    // testReplace();
    // testReplaceIf();
    testSwap();

    system("pause");
    return 0;
}
