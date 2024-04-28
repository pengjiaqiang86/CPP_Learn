#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
2024年4月27日16:05:56

vector容器的嵌套
*/

void test1()
{
    vector<vector<int>> v;

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < 8; i++)
    {
        v1.push_back(i);
        v2.push_back(8 * i);
    }

    v.push_back(v1);
    v.push_back(v2);

    for (vector<vector<int>>::iterator it1 = v.begin(); it1 != v.end(); it1++)
    {
        for (vector<int>::iterator it2 = (*it1).begin(); it2 != (*it1).end(); it2++)
        {
            cout << *it2 << "\t";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;

    
}
