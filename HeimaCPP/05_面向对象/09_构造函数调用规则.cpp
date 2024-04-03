#include <iostream>

using namespace std;

/*
C++中定义一个类之后，编译器至少会给类添加三个函数：
1.默认构造函数（无参，空函数体）
    如果用户定义了有参构造函数，C++不再提供默认无参构造函数，但是会提供默认拷贝构造函数
2.默认析构函数（无参，空函数体）
3.默认拷贝构造函数
    如果用户定义拷贝构造函数，C++不会再提供其他构造函数
*/

int main(int argc, char const *argv[])
{
    system("pause");
    return 0;
}
