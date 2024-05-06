#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   57_binary_search.cpp
 * @date    :   2024/05/06 17:28:47
 * @author  :   Peng
 * @version :   1.0
 * @brief   :   None
 */

/*
binary_search查找指定元素是否存在，返回true或flse

函数原型：
    binary_search(iterator beg, iterator end, val);

要求：
    容器元素必须有序
*/

void test()
{
    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    
    bool isFound = binary_search(vec.begin(), vec.end(), -1);

    cout << isFound << endl;
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
