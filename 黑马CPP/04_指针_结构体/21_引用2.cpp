#include <iostream>

using namespace std;


// 1. 引用做函数的参数
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapTest() {
    int a = 10, b = 20;
    cout << a << " " << b << endl; // 10 20

    swap(a, b);
    cout << a << " " << b << endl; // 20 10
}

// 2. 引用做为函数的返回值
// 注意：不要返回局部变量的引用（类似于不要返回局部变量的指针）
int& returnRef() {
    // g++ warning: reference to local variable 'a' returned
    int a = 10; // 局部变量，存放在内存的栈区
    return a;
}

void returnRefTest() {
    int a = returnRef();
    cout << a << endl;
}

// 3. 函数的调用可以作为表达式的左值
int& returnRef2() {
    static int a = 10; // 静态变量，存放在内存的全局区
    return a;
}

void returnRefTest2() {
    int& a = returnRef2();
    cout << a << endl; // 10

    returnRef2() = 20;
    cout << a << endl; // 20
}

int main(int argc, char const *argv[]) {
    // swapTest();
    // returnRefTest(); 
    // returnRefTest2();

    system("pause");
    return 0;
}
