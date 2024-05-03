#include <iostream>
#include <set>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   38_set查找和统计.cpp
 * @time    :   2024/05/03 11:18:57
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
set容器查找和统计数据

函数原型：
    find(key);  // 如果存在，返回该元素的迭代器；否则返回set.end()
    count(key); // 统计key元素的个数 0 1
*/

void test()
{
    set<int> s1;

    s1.insert(2);
    s1.insert(4);
    s1.insert(6);
    s1.insert(8);

    set<int>::iterator pos1 = s1.find(6);
    int count1 = s1.count(6);

    cout << (pos1 != s1.end()) << endl;
    cout << count1 << endl;

    cout << "=========================" << endl;

    set<int>::iterator pos2 = s1.find(10);
    int count2 = s1.count(10);

    cout << (pos2 != s1.end()) << endl;
    cout << count2 << endl;
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
