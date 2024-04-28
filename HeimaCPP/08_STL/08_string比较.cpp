#include <iostream>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   08_string比较.cpp
 * @time    :   2024/04/28 14:59:46
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
string对比（按字符的ascii码比较）
= 返回 0
> 返回 1
< 返回 -1

int compare(const string &s) const;
int compare(const char *s) const;
*/

int main(int argc, char const *argv[])
{
    string str1 = "abcde";
    string str2 = "ABCDEF";
    string str3 = "abcde";

    int ret = str1.compare(str2); // 1
    cout << ret << endl;

    ret = str1.compare(str3); // 0
    cout << ret << endl;

    system("pause");
    return 0;
}
