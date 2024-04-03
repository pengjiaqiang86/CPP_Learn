#include <iostream>

using namespace std;

/*
函数调用运算符重载()也可以重载
由于重载后的使用方式非常像函数调用，因此成为仿函数
仿函数没有固定写法，非常灵活
*/

class Printer {
public:
    // inline void Printer::operator()(std::string str)
    void operator() (string str) {
        cout << str << endl;
    }
};

int main(int argc, char const *argv[])
{
    Printer p;
    p("Hello World");

    // 匿名对象调用仿函数
    Printer()("Hello World!");

    system("pause");
    return 0;
}
