#include <iostream>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   06_string拼接.cpp
 * @time    :   2024/04/28 14:31:13
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
string字符串拼接

string& operator+=(const char *str);
string& operator+=(const char c);
string& operator+=(const string &str);
string append&(const char *s);
string append&(const char *s, int n); // 前n个字符
string append&(const string &s);
string append&(const string &s, int pos, int n); // 从pos开始的n个字符
*/

void test1()
{
    string str = "hello world";
    cout << str << endl;

    const char *s = " char * s ";
    str += s;
    cout << str << endl;

    str += ',';
    cout << str << endl;

    str += str;
    cout << str << endl;

    str.append(s);
    cout << str << endl;

    str.append(s, 3);
    cout << str << endl;

    str.append(str);
    cout << str << endl;

    str.append(str, 2, 4);
    cout << str << endl;
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
