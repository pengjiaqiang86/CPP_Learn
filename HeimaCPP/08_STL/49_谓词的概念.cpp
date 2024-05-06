#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   49_谓词的概念.cpp
 * @time    :   2024/05/05 00:48:45
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
概念：
    返回bool类型的仿函数称为谓词
    operator()接收一个参数，那么这个谓词称为一元谓词
    operator()接收一个参数，那么这个谓词称为二元谓词
*/

class GreaterThanFive
{
public:
    bool operator()(int i)
    {
        return i > 5;
    }
};

class DescendSort
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

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
    vector<int> vec;
    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    
    // 返回一个迭代器类型
    // 如果找到，返回的位置是第一个满足条件的元素的位置，否则是end()
    vector<int>::iterator it = find_if(vec.begin(), vec.end(), GreaterThanFive());

    if (it != vec.end())
    {
        cout << "Found!" << endl;
        cout << *it << endl;
    }
    else
    {
        cout << "Did not find." << endl;
    }
}

void test2()
{
    vector<int> vec;

    srand((unsigned int) time(NULL));

    // 向vector容器随机添加元素
    for (int i = 0; i < 10; i++)
    {
        int temp = rand() % 100;
        vec.push_back(temp);
    }
    
    cout << "Before sorting: " << endl;
    printVector(vec);

    // 利用algorithm提供的排序算法排序
    // 默认升序排列
    // sort(vec.begin(), vec.end());
    // cout << "After sorting: (Ascending)" << endl;
    // printVector(vec);

    // 利用algorithm提供的排序算法排序
    // 为重载的sort函数提供二愿谓词参数，实现降序排列
    sort(vec.begin(), vec.end(), DescendSort());
    cout << "After sorting: (Descending)" << endl;
    printVector(vec);
}

int main(int argc, char const *argv[])
{
    // test1();
    test2();

    system("pause");
    return 0;
}
