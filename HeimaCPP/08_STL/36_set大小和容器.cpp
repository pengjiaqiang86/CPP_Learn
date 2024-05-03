#include <iostream>
#include <set>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   36_set大小和容器.cpp
 * @time    :   2024/05/03 11:08:30
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
 */

/*
函数原型
    size();
    empty();
    swap();

set不允许resize操作
*/

void printSet(const set<int> &st)
{
    for (typename set<int>::const_iterator iter = st.begin(); iter != st.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{


    system("pause");
    return 0;
}
