#include <iostream>
#include <string>

using namespace std;


/*
C++程序在执行时，内存划分为4部分
1. 代码区：存放CPU执行的机器指令。特点：共享、只读
2. 全局区：存放全局变量、静态变量（static修饰）和常量（1.字符串常量和2.const修饰的全局变量）
           程序结束之后，由操作系统释放
3. 栈区
4. 堆区
*/


// 全局变量
int global_a = 10;
int global_b = 20;

// const修饰的全局变量
const int const_global_a = 10;
const int const_global_b = 20;

int main(int argc, char const *argv[])
{

    // 局部变量
    int local_a = 10;
    int local_b = 20;

    // 静态变量
    static int static_a = 10;
    static int static_b = 20;

    /*
    global a:       4206608
    global b:       4206612
    local a:        6422044
    local b:        6422040
    static a:       4206616
    static b:       4206620
    ==============================
    string:         4210808
    const global a  4210692
    const global b  4210696
    const local a   6422036
    const local b   6422032

    可以看出全局变量和静态变量存放在相近的区域，即全局区
    */
    cout << "global a: " << (int) &global_a << endl;
    cout << "global b: " << (int) &global_b << endl;
    cout << "local a: " << (int) &local_a << endl;
    cout << "local b: " << (int) &local_b << endl;
    cout << "static a: " << (int) &static_a << endl;
    cout << "static b: " << (int) &static_b << endl;

    cout << "=============================="<< endl;

    // 字符串常量
    cout << "string: " << (int)&"Hello World" << endl;

    // const修饰的变量
    // const修饰的全局变量 和 const修饰的局部变量
    const int const_local_a = 10;
    const int const_local_b = 20;

    cout << "const global a " << (int) &const_global_a << endl;
    cout << "const global b " << (int) &const_global_b << endl;
    cout << "const local a " << (int) &const_local_a << endl;
    cout << "const local b " << (int) &const_local_b << endl;


    system("pause");
    return 0;
}

