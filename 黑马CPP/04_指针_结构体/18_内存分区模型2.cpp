#include <iostream>
#include <string>

using namespace std;


/*
C++程序在执行时，内存划分为4部分
1. 代码区：存放CPU执行的机器指令。特点：共享、只读
2. 全局区：存放全局变量、静态变量（static修饰）和常量（1.字符串常量和2.const修饰的全局变量）
        程序结束之后，由操作系统释放
3. 栈区：编译器自动分配和释放，存放函数的参数和局部变量等
        注意：不要返回局部变量的地址
4. 堆区：程序员分配和释放，如果程序员不释放，则在程序结束后由操作系统回收
        在C++中利用new关键字开辟
*/


// g++: warning: address of local variable 'a' 
// returned [-Wreturn-local-addr]
//
// int* funcStack() {
//     int a = 10;
//     return &a;
// }

int* funcPile() {
    int* p = new int(10);
    return p;
}

int main(int argc, char const *argv[])
{
    // 1. 返回局部变量的地址
    // int* p = funcStack();
    // cout << p << endl; // 0

    // 2. new关键字在堆区创建变量
    int* p = funcPile();
    cout << p << endl; // 0xde24f0

    system("pause");
    return 0;
}

