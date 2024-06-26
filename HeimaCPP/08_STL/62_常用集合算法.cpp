#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   62_常用集合算法.cpp
 * @date    :   2024/05/07 22:30:17
 * @author  :   Peng
 * @version :   1.0
 * @brief   :   None
 */

/*
常用集合算法：
    set_intersection
        // 集合的交集
        // 两个序列必须有序（排序方式一致）；目标容器开辟空间大小从两个容器中取最小值
        // 返回值是交集中最后一个元素的位置
        set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator target);
    set_union
        // 集合的并集
        // 两个序列必须有序（排序方式一致）；目标容器开辟空间大小从两个容器大小之和
        set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator target);
    set_difference
        // 集合的差集
        // 两个序列必须有序（排序方式一致）
        // 返回值是叉集中最后一个元素的位置
        set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator target);
*/

void printVector(const vector<int> st)
{
    for (typename vector<int>::const_iterator iter = st.begin(); iter != st.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

void printInt(int val)
{
    cout << val << " ";
}

void testIntersection()
{
    vector<int> s1;
    vector<int> s2;

    for (int i = 0; i < 10; i++)
    {
        s1.push_back(i);
        s2.push_back(3 - i);
    }
    
    vector<int> s3;
    s3.resize( min(s1.size(), s2.size()) );
    vector<int>::iterator pos = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), s3.begin());

    for_each(s1.begin(), s1.end(), printInt);
    cout << endl;

    for_each(s2.begin(), s2.end(), printInt);
    cout << endl;

    // 注意，这里结束位置是pos，即set_intersection的返回值。下同
    for_each(s3.begin(), pos, printInt);
    cout << endl;
}

void testUnion()
{
    vector<int> s1;
    vector<int> s2;

    for (int i = 0; i < 10; i++)
    {
        s1.push_back(i);
        s2.push_back(i - 3);
    }
    
    vector<int> s3;
    s3.resize( s1.size() + s2.size() );
    vector<int>::iterator pos = set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), s3.begin());

    for_each(s1.begin(), s1.end(), printInt);
    cout << endl;

    for_each(s2.begin(), s2.end(), printInt);
    cout << endl;

    for_each(s3.begin(), pos, printInt);
    cout << endl;
}

void testDifference()
{
    vector<int> s1;
    vector<int> s2;

    for (int i = 0; i < 10; i++)
    {
        s1.push_back(i);
        s2.push_back(i - 3);
    }
    
    // s1 - s2
    vector<int> s3;
    s3.resize(s1.size());
    vector<int>::iterator pos1 = set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), s3.begin());

    // s2 - s1
    vector<int> s4;
    s4.resize(s2.size());
    vector<int>::iterator pos2 = set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), s4.begin());

    for_each(s1.begin(), s1.end(), printInt);
    cout << endl;

    for_each(s2.begin(), s2.end(), printInt);
    cout << endl;

    for_each(s3.begin(), pos1, printInt);
    cout << endl;

    for_each(s4.begin(), pos2, printInt);
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // testIntersection();
    // testUnion();
    testDifference();

    system("pause");
    return 0;
}
