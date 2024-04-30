#include <iostream>
#include <vector>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   12_vector容器.cpp
 * @time    :   2024/04/29 15:25:26
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
vector数据结构与数组非常相似，也称为单端数组
数组是静态空间，但是vector是动态扩展

构造函数：
vector<T> v;                    // 采用模板竖线类实现，默认构造函数
vector(v.begin(), v.end());     // 将v[begin(), end()]区间内的元素拷贝给本身
vector(n, elem);                // 构造函数将n个elem拷贝给本身
vector(const vector &vec);      // 拷贝构造函数
*/

template<typename T>
void printVector(vector<T> &vec)
{
    // 注意，这里必须加上typename关键词，不然出现错误
    // https://blog.csdn.net/danielzou/article/details/6458985
    for (typename vector<T>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
}

void test()
{
    // 构造函数1
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    // 构造函数2
    vector<int> v2(v1.begin(), v1.end());
    printVector(v2);

    // 构造函数3
    vector<int> v3(8, 6);
    printVector(v3);

    // 构造函数4
    vector<int> v4(v3);
    printVector(v4);
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
