#include <iostream>

using namespace std;

/*
2024年4月25日13:29:47

类模板份文件编写会存在以下问题：
类模板中成员函数在创建时机是在调用阶段，导致份文件编写时链接不到

解决：
1. 直接包含cpp文件
2. 将声明和实现写在同一个文件，然后修改后缀名为hpp（约定，非强制）
*/

// 1. 第一种解决方式（一般不用）
// #include "11_Person.cpp"

// 2. .h和.cpp的内容写在一起，文件后缀为.hpp
#include "11_Person.hpp"

void test()
{
    Person<string, int> p("A", 1);
    p.showInfo();
}

int main(int argc, char const *argv[])
{   
    test();

    system("pause");
    return 0;
}
