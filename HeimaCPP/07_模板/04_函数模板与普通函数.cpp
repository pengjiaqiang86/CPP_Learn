#include <iostream>

using namespace std;

/*
2024年4月23日13:51:02

普通函数与函数模板重名时的调用规则

1. 如果是用函数模板和普通函数都可以实现，有限调用普通函数
2. 可以通过空模板参数列表强制调用模板函数
3. 函数模板也可以发生重载
4. 如果函数模板可以产生更好的匹配，优先调用函数模板
*/

int func(int a, int b)
{
    cout << "ordinary function" << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return a + b;
}

template<typename T>
T func(T a, T b)
{
    cout << "template function" << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return a + b;
}

// 重载
template<typename T>
T func(T a, T b, T c)
{
    cout << "overload template function" << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return a + b + c;
}


// 1. 如果是用函数模板和普通函数都可以实现，有限调用普通函数
// 2. 可以通过空模板参数列表强制调用模板函数
void test1()
{
    func(1, 2); // ordinary function
    func<>(1, 2); // template
    func<int>(1, 2); // template
}

// 3. 函数模板也可以发生重载
void test2()
{
    func<>(1, 2); // template
    func(1, 2, 3); // reload
}

// 4. 如果函数模板可以产生更好的匹配，优先调用函数模板
void test3()
{
    char a = 'a';
    char b = 'b';

    func(a, b); // template
}


int main(int argc, char const *argv[])
{
    
    // test1();
    // test2();
    test3();

    system("pause");
    return 0;
}
