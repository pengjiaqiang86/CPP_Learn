#include <iostream>
#include <string>

using namespace std;

/*
2024年4月21日17:01:33

函数模板
1. 定义
    template<typename T>

2. 使用（声明和实现一个函数）
    T func(T a, T b) 表示一个返回值类型为T，有两个T类型形参的函数

3. 函数的调用
    编译器自动推导类型：func(a, b) 或显式指定类型 func<int>(a, b)

模板的作用实际上是 提高代码复用性 和 将类型参数化
*/

void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapDouble(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

void swapString(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}


// 声明一个模板
template <typename T>

void swapT(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}


void test1()
{
    cout << "========== Swap Int ==========" << endl;
    int ai = 10;
    int bi = 20;

    cout << "a = " << ai << endl;
    cout << "b = " << bi << endl;

    swapInt(ai, bi);

    cout << "a = " << ai << endl;
    cout << "b = " << bi << endl;

    cout << "========== Swap Double ==========" << endl;
    double ad = 10.0;
    double bd = 20.0;

    cout << "a = " << ad << endl;
    cout << "b = " << bd << endl;

    swapDouble(ad, bd);

    cout << "a = " << ad << endl;
    cout << "b = " << bd << endl; 

    cout << "========== Swap String ==========" << endl;
    string as = "10";
    string bs = "20";

    cout << "a = " << as << endl;
    cout << "b = " << bs << endl;

    swapString(as, bs);

    cout << "a = " << as << endl;
    cout << "b = " << bs << endl; 
}

void test2()
{
    cout << "========== Template Swap Int ==========" << endl;
    int ai = 10;
    int bi = 20;

    cout << "a = " << ai << endl;
    cout << "b = " << bi << endl;

    // swapT(ai, bi);
    swapT<int>(ai, bi);

    cout << "a = " << ai << endl;
    cout << "b = " << bi << endl;

    cout << "========== Template Swap Double ==========" << endl;
    double ad = 10.0;
    double bd = 20.0;

    cout << "a = " << ad << endl;
    cout << "b = " << bd << endl;

    // swapT(ad, bd);
    swapT<double>(ad, bd);

    cout << "a = " << ad << endl;
    cout << "b = " << bd << endl; 

    cout << "========== Template Swap String ==========" << endl;
    string as = "10";
    string bs = "20";

    cout << "a = " << as << endl;
    cout << "b = " << bs << endl;

    // swapT(as, bs);
    swapT<string>(as, bs);

    cout << "a = " << as << endl;
    cout << "b = " << bs << endl; 
}

int main(int argc, char const *argv[])
{
    
    test1();
    test2();

    return 0;
}
