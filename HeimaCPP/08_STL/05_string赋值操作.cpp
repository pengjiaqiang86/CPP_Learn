#include <iostream>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   05_string赋值操作.cpp
 * @time    :   2024/04/28 14:14:44
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
string赋值：
    string& operator=(const char *s);
    string& operator=(const string &s);
    string& operator=(char c);
    string& assign(const char *s);
    string& assign(const char *s, int n);
    string& assign(const string &s);
    string& assign(int n, char c);
*/

void test1()
{
    // string& operator=(const char *s);
    string str1;
    str1 = "hello world";
    cout << "str1 = " << str1 << endl;

    // string& operator=(const string &s);
    string str2;
    str2 = str1;
    cout << "str2 = " << str2 << endl;
    cout << "&str1 = " << (uint64_t) &str1 << endl; // 6421936
    cout << "&str2 = " << (uint64_t) &str2 << endl; // 6421904

    // string& operator=(char c);
    string str3;
    str3 = 'h';
    cout << "str3 = " << str3 << endl;

    // string& assign(const char *s);
    string str4;
    str4.assign("hello world");
    cout << "str4 = " << str4 << endl;

    // string& assign(const char *s, int n);
    string str5;
    str5.assign("hello world ", 3);
    cout << "str5 = " << str5 << endl;

    // string& assign(const string &s);
    string str6;
    str6.assign(str4);
    cout << "str6 = " << str6 << endl;
    cout << "&str4 = " << (uint64_t) &str4 << endl; // 6421856
    cout << "&str6 = " << (uint64_t) &str6 << endl; // 6421792

    // string& assign(int n, char c);
    string str7;
    str7.assign(6, 'c');
    cout << "str7 = " << str7 << endl;
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
