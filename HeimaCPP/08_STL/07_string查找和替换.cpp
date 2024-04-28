#include <iostream>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   07_string查找和替换.cpp
 * @time    :   2024/04/28 14:41:54
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
字符串查找和替换

int find(const string &str, int pos = 0) const;         // str第一次出现的位置，从pos开始找
int find(const char *s, int pos = 0) const;             // s...
int find(const char *s, int pos, int n) const;          // 从pos位置查找s的前n个字符第一次位置
int find(const char c, int pos = 0) const;              // c第一次出现的位置
int rfind(const string &str, int pos = npos) const;     // str最后一次出现的位置，从pos开始查找
int rfind(const char *s, int pos = npos) const;         // s...
int rfind(const char *s, int pos, int n) const;         // 从pos位置查找s的前n个字符最后一次位置
int rfind(const char c, int pos = 0) const;             // 字符c最后一次出现的位置

string & replace(int pos, int n, const string &str);    // 替换从pos开始n个字符为str
string & replace(int pos, int n, const char *s);        // 替换从pos开始的n个字符为s
*/

void test1()
{
    string str = "this is a test of cpp string find and replace and ...";

    int ret = str.find("is", 0);
    cout << ret << endl;

    ret = str.rfind("is");
    cout << ret << endl;
}

void test2()
{
    string str = "this is a test of cpp string find and replace and ...";
    str.replace(0, 4, "tthhiiss"); // 字符串长度为9，但是也能替换掉原有的3个字符
    cout << str << endl; // tthhiiss is a.....
}

int main(int argc, char const *argv[])
{
    // test1();
    test2();

    system("pause");
    return 0;
}
