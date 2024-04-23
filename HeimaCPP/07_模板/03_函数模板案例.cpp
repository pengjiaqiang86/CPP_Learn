#include<iostream>

using namespace std;

/*
2024年4月22日11:48:17

用函数模板封装一个排序函数，可以对不同数据类型的数组进行排序
排序由大到小；算法为选择排序
利用char和int进行测试
*/

template<typename T>
void mySort(T *arr, int len)
{
    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                T temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

// 测试int类型
void test1()
{
    int arr[] = {1, 5, 9, 2, 6, 0, 13, 8};
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    mySort(arr, 8);
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
}

// 测试char类型
void test2()
{
    char arr[] = "cpp_learning_2024";
    for (char ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    mySort(arr, 18);
    for (char ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    // test1();
    test2();

    system("pause");

    return 0;
}
