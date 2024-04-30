#include <iostream>
#include <vector>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   16_vector数据存取.cpp
 * @time    :   2024/04/30 21:57:39
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
at(int idx);    // 返回索引idx所指的数据
operator{};     // 返回索引idx所指的数据
front();        // 返回容器第一个数据元素
back();         // 返回容器最后一个数据元素
*/

void test1()
{
    vector<int> vec;
    for (int i = 0; i < 8; i++)
    {
        vec.push_back(i);
    }

    cout << vec.at(3) << endl;   // 3
    cout << vec[6] << endl;      // 6
    cout << vec.front() << endl; // 0
    cout << vec.back() << endl;  // 7
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
