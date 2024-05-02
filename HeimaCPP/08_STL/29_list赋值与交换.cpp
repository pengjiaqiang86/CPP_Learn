#include <iostream>
#include <list>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   29_list赋值与交换.cpp
 * @time    :   2024/05/02 12:11:27
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
给list容器进行赋值以及交换list容器内容

函数原型：
    assign(beg, end);
    assign(n, elem);
    list& operator=(const list &lst);
    swap(lst);
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
    list<int> list1;
    for (int i = 0; i < 8; i++)
    {
        list1.push_back(i);
    }

    cout << "list1" << "\t";
    printList(list1);

    // assign(beg, end);
    list<int> list2;
    list2.assign(list1.begin(), --list1.end());

    cout << "list2" << "\t";
    printList(list2);

    // assign(n, elem);
    list<int> list3;
    list3.assign(6, 8);

    cout << "list3" << "\t";
    printList(list3);

    // operator=
    list<int> list4;
    list4 = list3;

    cout << "list4" << "\t";
    printList(list4);

    // swap
    list<int> list5;
    list5.swap(list4);

    cout << "list4 after swap" << "\t";
    printList(list4);

    cout << "list5 after swap" << "\t";
    printList(list5);
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
