#include <iostream>
#include <string>

using namespace std;

/**
 * encoding : utf-8
 * @file    :   04_string容器.cpp
 * @time    :   2024/04/28 14:02:34
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
string是C++风格的字符串
string是一个类，内部封装了char *，管理着这个字符串，是一个char *的容器

特点：
string类内部封装了很多成员方法（e.g. find replace insert）
string类管理char *分配的内存，不需要担心数组越界和取值越界等，由类内部进行负责

构造函数：
    string();
    string(const char *s);
    string(const string &str);
    string(int n, char c);
*/


int main(int argc, char const *argv[])
{
    string str1;
    cout << str1 << endl;

    const char *s = "cpp learn";
    string str2(s);
    cout << str2 << endl;

    string str3(str2);
    cout << str3 << endl;

    string str4(6, 's');
    cout << str4 << endl;

    system("pause");
    return 0;
}
