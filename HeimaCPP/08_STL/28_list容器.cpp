#include <iostream>
#include <list>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   28_list容器.cpp
 * @time    :   2024/05/02 11:42:09
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
list容器

功能：将数据进行链式存储
    链表是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序通过链表的指针链接实现
    链表由一系列节点组成，节点包括数据域和指针域

STL中的链表是一个双向循环链表

优缺点：
    采用动态内存分配，不会造成内存浪费和溢出
    可以快速插入和删除任意位置的元素
    容器遍历速度没有数组快；占用的空间比数组大

其他：
    List有一个重要性质：插入和删除不会造成原有List迭代器的失效，这对于vector是不成立的
    （插入和删除元素之后，vector可能会重新分配内存，导致原有迭代器指向无效空间）
    STL中List和vector是最常用的两个容器，各有优缺点
*/

/*
构造函数：
    list<T> lst;
    list(beg, end);
    list(n, elem);
    list(const list &lst);
*/

template<typename T>
void printList(const list<T> &lst)
{
    for (typename list<T>::const_iterator iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout << (*iter) << "  ";
    }
    cout << endl;
}

void test1()
{
    // 默认构造函数
    list<int> list1;

    for (int i = 0; i < 6; i++)
    {
        list1.push_back(i);
    }
    printList(list1);

    // list(beg, end);
    list<int> list2(list1.begin(), ------list1.end());
    printList(list2);

    // 拷贝构造函数
    list<int> list3(list2);
    printList(list3);

    // list(const list &lst);
    list<int> list4(6, 8);
    printList(list4);
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
