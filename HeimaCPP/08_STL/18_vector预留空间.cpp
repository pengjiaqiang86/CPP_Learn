#include <iostream>
#include <vector>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   18_vector预留空间.cpp
 * @time    :   2024/04/30 22:30:50
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
vector预留空间，减少动态扩容时的扩展次数

reserve(int len); // 容器预留len个元素长度，预留位置不初始化，元素不可访问
*/


// 判断动态扩容的次数 方法1
void test1()
{
    vector<int> vec;
    int capacity = vec.capacity();
    int count = 0;

    for (int i = 0; i < 10000; i++)
    {
        vec.push_back(i);

        if (capacity != vec.capacity())
        {
            capacity = vec.capacity();
            count++;
        }
    }
    
    cout << count << endl;
}

// 判断动态扩容的次数 方法2
void test2()
{
    vector<int> vec;
    int *p = NULL;
    int count = 0;

    for (int i = 0; i < 10000; i++)
    {
        vec.push_back(i);

        if (p != &vec[0])
        {
            p = &vec[0];
            count++;
        }
    }
    
    cout << count << endl;
}

// 预分配内存后，动态扩容的次数
void test3()
{
    vector<int> vec;
    vec.reserve(10000);

    int *p = NULL;
    int count = 0;

    for (int i = 0; i < 10000; i++)
    {
        vec.push_back(i);

        if (p != &vec[0])
        {
            p = &vec[0];
            count++;
        }
    }
    
    cout << count << endl;
}

int main(int argc, char const *argv[])
{
    // test1(); // 15
    // test2(); // 15
    test3(); // 1

    system("pause");
    return 0;
}
