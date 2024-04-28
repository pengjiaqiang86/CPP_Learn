#include <iostream>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   11_string子串.cpp
 * @time    :   2024/04/28 15:16:02
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
string子串

string substr(int pos = 0, int n = npos) const;
*/

void test1()
{
    string str = "hello world";
    string substring = str.substr(0, 5);
    cout << substring << endl;
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
