#include <iostream>
#include <vector>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   17_vector.cpp
 * @time    :   2024/04/30 22:06:41
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
实现两个容器内元素的互换
swap(vec); // 将vec与本身的元素互换
*/

void printVector(vector<int> &vec)
{
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
}

void test1()
{
    // 定义vec1
    vector<int> vec1;
    for (int i = 0; i < 8; i++)
    {
        vec1.push_back(i);
    }
    
    cout << "vec1" << endl;
    printVector(vec1);

    // 定义vec2
    vector<int> vec2;
    for (int i = 0; i < 8; i++)
    {
        vec2.push_back(-7 + i);
    }

    cout << "vec2" << endl;
    printVector(vec2);

    // swap交换
    vec1.swap(vec2);

    // 打印交换后的vector
    cout << "vec1 after swap" << endl;
    printVector(vec1);

    cout << "vec2 after swap" << endl;
    printVector(vec2);
}

// 实际用途示例
void test2()
{
    vector<int> vec;
    for (int i = 0; i < 100000; i++)
    {
        vec.push_back(i);
    }

    cout << "capacity: " << vec.capacity() << endl; // 131072
    cout << "size: " << vec.size() << endl; // 100000
    

    vec.resize(3);

    cout << "capacity: " << vec.capacity() << endl; // 131072
    cout << "size: " << vec.size() << endl; // 3


    // vec.shrink_to_fit();
    vector<int>(vec).swap(vec); // 利用拷贝构造函数创建匿名对象，然后交换

    cout << "capacity: " << vec.capacity() << endl; // 3
    cout << "size: " << vec.size() << endl; // 3
}


int main(int argc, char const *argv[])
{
    // test1();
    test2();

    system("pause");
    return 0;
}
