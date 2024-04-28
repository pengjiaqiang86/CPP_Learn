#include <iostream>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   10_string插入和删除.cpp
 * @time    :   2024/04/28 15:10:16
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
string插入和删除

string& insert(int pos, const char *s);
string& insert(int pos, const string &str);
string& insert(int pos, int n, char c);

string& erase(int pos, int n = npos);
*/

void test1()
{
    string str = "hello world";
    cout << str << endl;

    str.insert(5, " c++");
    cout << str << endl;

    str.erase(5, 4);
    cout << str << endl;
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
