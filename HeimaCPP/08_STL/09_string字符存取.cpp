#include <iostream>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   09_string字符存取.cpp
 * @time    :   2024/04/28 15:04:38
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
string字符存取

char& operator[](int n);
char& at(int n);
*/

int main(int argc, char const *argv[])
{
    string str = "hello world";

    // 读字符1
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    cout << endl;

    // 读字符2
    for (int i = 0; i < str.size(); i++)
    {
        cout << str.at(i);
    }
    cout << endl;

    // 修改
    str[0] = 'a';
    str.at(1) = 'x';
    cout << str << endl;

    system("pause");
    return 0;
}
