#include <iostream>
#include <vector>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   48_函数对象_仿函数.cpp
 * @time    :   2024/05/05 00:30:16
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
函数对象：
    重载函数调用操作符的类，其对象称为函数对象
    函数对象使用重载的()时，行为类似函数，因此也称为仿函数
    仿函数的本质是一个类，而不是一个函数

特点：
    函数对象在使用的时候，可以像普通函数一样调用，可以有返回值和参数
    函数对象又不同于普通的函数，因为函数对象可以有自己的状态
    函数对象可以作为参数传递
*/

class MyAdd
{
public:
    int operator()(int a, int b)
    {
        return a + b;
    }
};

class MyPrinter
{
public:
    MyPrinter()
    {
        this->count = 0;
    }

    void operator()(int content)
    {
        cout << content << endl;
        count++;
    }

    int count;
};

void printVector(vector<int> &vec, MyPrinter &printer)
{
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        printer(*it);
    }
}

void test1()
{
    MyAdd add;

    // 像普通函数一样调用
    int ret = add(1, 2);
    cout << ret << endl;
}

void test2()
{
    vector<int> vec;
    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    
    MyPrinter printer;

    // 作为参数传递
    printVector(vec, printer);

    // 记录状态
    cout << "You have printed " << printer.count << " times." << endl;
}

int main(int argc, char const *argv[])
{
    // test1();
    test2();

    system("pause");
    return 0;
}
