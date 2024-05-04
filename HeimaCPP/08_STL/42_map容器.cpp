#include <iostream>
#include <map>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   42_map容器.cpp
 * @time    :   2024/05/04 12:05:59
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
map容器简介：
    map所有元素都是pair
    pair第一个元素是key，第二个原始是value
    所有元素都会根据元素的key自动排序（默认从小到大）

本质：
    map/multimap术语关联式容器，底层结构是二叉树

优点：
    可以根据key快速找到value

map和multimap：
    map不允许有重复key
    multimap允许有重复key值

构造函数与赋值操作：
    map<T1, T2> mp;
    map(const map &mp);
    map& operator=(const map &mp);
*/
void printMap(map<int, string> &mp)
{
    for (map<int, string>::iterator iter = mp.begin(); iter != mp.end(); iter++)
    {
        cout << "Key: " << iter->first << " Value: " << iter->second << "\t\t";
    }
    cout << endl;
}

void test()
{
    map<int, string> mp;

    mp.insert(pair<int, string>(3, "9"));
    mp.insert(pair<int, string>(1, "1"));
    mp.insert(pair<int, string>(5, "25"));

    printMap(mp);
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
