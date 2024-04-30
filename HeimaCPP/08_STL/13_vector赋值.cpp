#include <iostream>
#include <vector>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   13_vector赋值.cpp
 * @time    :   2024/04/29 15:54:06
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
vector赋值

vector& operator=(const vector &vec);
assign(beg, end);
assign(n, elem);
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
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    // vector& operator=(const vector &vec);
    vector<int> v2 = v1;
    printVector(v2);

    // assign(beg, end);
    vector<int> v3;
    v3.assign(v1.begin(), v1.end()-2);
    printVector(v3);

    // assign(n, elem);
    vector<int> v4;
    v4.assign(6, 8);
    printVector(v4);
}

int main(int argc, char const *argv[])
{
    test();

    system("pause");
    return 0;
}
