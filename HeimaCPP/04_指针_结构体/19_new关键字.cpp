#include <iostream>

using namespace std;

/*
堆区的数据，由程序员负责开辟、管理和释放
    开辟：new关键字，返回指针
    释放：delete关键字

    案例：整形变量 和 整形数组的分配和释放
    int * ptrInt = new int(10);
    delete ptrInt;
    int * ptrArray = new int[10];
    delete [] ptrArray;
*/

// new一个变量
int * funcNewVar() {
    int * ptr = new int(10);

    return ptr;
}

void testNewVar() {
    // new & delete一个整型变量
    int * ptr = funcNewVar();
    cout << *ptr << endl; // 10

    // 删除变量并再次打印
    delete ptr;
    cout << *ptr << endl; // 7301328
}

// new一个数组
int * funcNewArray() {
    int * arr = new int[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = i; // 初始化
    }

    return arr;
}

void testNewArray() {
    // new一个整型数组
    int * ptr2 = funcNewArray();
    for (int i = 0; i < 10; i++) {
        cout << ptr2[i] << '\t';
    }
    cout << endl;

    // 删除数组并再次打印
    delete [] ptr2;
    for (int i = 0; i < 10; i++) {
        cout << ptr2[i] << '\t';
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    testNewVar();

    testNewArray();

    system("pause");
    return 0;
}
