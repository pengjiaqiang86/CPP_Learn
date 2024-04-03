#include <iostream>

using namespace std;

/*
继承中的构造与析构

顺序：
Base构造
Son构造
Son析构
Base析构
*/

class Base {
public:
    Base() {
        cout << "Base构造函数" << endl;
    }

    ~Base() {
        cout << "Base析构函数" << endl;
    }
};

class Son : public Base {
public:
    Son() {
        cout << "Son构造函数" << endl;
    }

    ~Son() {
        cout << "Son析构函数" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Son s = Son();

    system("pause");
    return 0;
}
