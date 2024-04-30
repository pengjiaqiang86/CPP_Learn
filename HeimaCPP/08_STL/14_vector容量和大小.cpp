#include <iostream>
#include <vector>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   14_vector容量和大小.cpp
 * @time    :   2024/04/29 16:00:41
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
empty();                // 判断是否为空
capacity();             // 容器的容量
size();                 // 返回元素的个数
resize(int num);        // 重新指定容器的长度（以默认值填充 或 截断末位元素）
resize(int num, elem);  // 重新指定容器的长度（以elem填充 或 截断末位元素）
*/

void printVector(vector<int> &vec)
{
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
}

void test()
{
    vector<int> v1;
    for (int i = 0; i < 6; i++)
    {
        v1.push_back(i + 1);
    }
    printVector(v1);

    // empty();
    cout << "v1 empty: " << v1.empty() << endl;
    
    // capacity();
    cout << "v1 capacity: " << v1.capacity() << endl;

    // size();
    cout << "v1 size: " << v1.size() << endl;

    cout << "-------------------------" << endl;

    // resize()
    v1.resize(4); // 截断后面的元素
    printVector(v1);
    cout << "v1 resize capacity: " << v1.capacity() << endl;
    cout << "v1 resize size: " << v1.size() << endl;

    cout << "-------------------------" << endl;

    // resize()
    v1.resize(10, -1); // 以-1作为默认值填充
    printVector(v1);
    cout << "v1 resize capacity: " << v1.capacity() << endl;
    cout << "v1 resize size: " << v1.size() << endl;
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
