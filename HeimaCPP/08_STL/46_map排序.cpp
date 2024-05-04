#include <iostream>
#include <map>
#include <ctime>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   46_map排序.cpp
 * @time    :   2024/05/04 14:28:56
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
map容器排序规则：按照key从小到大排序

可以利用仿函数改变排序规则
*/

class MyCompare
{
public:
    bool operator()(const int a, const int b) const
    {
        return a > b;
    }
};

void printMap(const map<int, int> &mp)
{
    for (typename map<int, int>::const_iterator iter = mp.begin(); iter != mp.end(); iter++)
    {
        cout << iter->first << " " << iter->second << "    ";
    }
    cout << endl;
}

void printMap(const map<int, int, MyCompare> &mp)
{
    for (typename map<int, int, MyCompare>::const_iterator iter = mp.begin(); iter != mp.end(); iter++)
    {
        cout << iter->first << " " << iter->second << "    ";
    }
    cout << endl;
}

void test1()
{
    map<int, int> mp;

    srand((unsigned int) time(NULL));

    for (int i = 0; i < 4; i++)
    {
        int k = rand() % 101;
        int v = rand() % 101;

        mp.insert(make_pair(k, v));
    }

    printMap(mp);
}

void test2()
{
    map<int, int, MyCompare> mp;

    srand((unsigned int) time(NULL));

    for (int i = 0; i < 4; i++)
    {
        int k = rand() % 101;
        int v = rand() % 101;

        mp.insert(make_pair(k, v));
    }

    printMap(mp);
}

int main(int argc, char const *argv[])
{
    test1();
    test2();

    system("pause");
    return 0;
}
