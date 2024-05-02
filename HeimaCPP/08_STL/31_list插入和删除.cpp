#include <iostream>
#include <list>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   31_list插入和删除.cpp
 * @time    :   2024/05/02 12:21:42
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
函数原型：
    push_back(elem);
    pop_back();
    push_front(elem);
    pop_front();
    insert(pos, elem);
    insert(pos, n, elem);
    insert(pos, beg, end);
    clear();
    erase(beg, end);
    erase(pos);
    remove(elem);
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

void testRemove()
{
    list<int> list1;
    for (int i = 0; i < 8; i++)
    {
        list1.push_back(i);
    }
    printList(list1);

    list1.remove(4);
    printList(list1);
}

int main(int argc, char const *argv[])
{
    testRemove();

    system("pause");
    return 0;
}
