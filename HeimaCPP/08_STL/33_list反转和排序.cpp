#include <iostream>
#include <list>
#include <algorithm>
#include <ctime>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   33_list反转和排序.cpp
 * @time    :   2024/05/02 12:36:11
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
函数原型：
    reverse();
    sort();

注意：
    所有不支持随机访问的容器，不能用标准算法，类内部会提供对应的一些算法
*/
 
template<typename T>
void printList(const list<T> &lst)
{
    for (typename list<T>::const_iterator it = lst.begin(); it != lst.end(); it++)
    {
        cout << (*it) << "  ";
    }
    cout << endl;
}

void test()
{
    srand((unsigned int) time(NULL));

    list<int> list1;
    for (int i = 0; i < 12; i++)
    {
        int random = rand() % 101;
        list1.push_back(random);
    }

    cout << "before" << endl;
    printList(list1);

    // reverse(list1.begin(), list1.end); // error
    list1.reverse();

    cout << "reverse" << endl;
    printList(list1);

    // sort(list1.begin(), list1.end()); // error
    list1.sort();

    cout << "sort" << endl;
    printList(list1);
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
