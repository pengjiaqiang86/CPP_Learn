#include <iostream>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   40_pair对组.cpp
 * @time    :   2024/05/03 11:38:02
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
pair对组

功能描述：
    成对出现的数据，利用对组可以返回两个数据

创建方式：
    pair<type, type> p(value1, value2);
    pair<type, type> p = make_pair(value1, value2);
*/

void test1()
{
    pair<string, int> p1("tom", 2);
    cout << p1.first << endl;
    cout << p1.second << endl;

    pair<string, int> p2 = make_pair("jerry", 1);
    cout << p2.first << endl;
    cout << p2.second << endl;
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
