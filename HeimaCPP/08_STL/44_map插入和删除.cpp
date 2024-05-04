#include <iostream>
#include <map>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   44_map插入和删除.cpp
 * @time    :   2024/05/04 12:20:20
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
map容器插入和删除数据
    insert(elem);
    clear();
    erase(pos);
    erase(beg, end);
    erase(key);
*/

int main(int argc, char const *argv[])
{
    map<int, int> m;

    // 插入数据
    m.insert(pair<int, int>(1, 1));
    m.insert(make_pair(2, 2));
    m.insert(map<int, int>::value_type(3, 3));
    m[4] = 4;

    // 不建议用[]插入数据。可以用于用key访问数据
    cout << m[5] << endl; // 0

    system("pause");
    return 0;
}
