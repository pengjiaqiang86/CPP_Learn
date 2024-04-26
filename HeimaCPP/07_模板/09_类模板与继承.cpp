#include <iostream>

using namespace std;

/*
2024年4月24日14:55:34

类模板在继承时，需要注意：
1. 父类是类模板，子类在声明时，需要指定父类中的T的类型
2. 如果不指定，编译器无法给子类分配内存
3. 如果想灵活制指定出T的类型，子类也需要变成类模板
*/


template<class T>
class Base
{
public:
    T m;
};

// 缺少 类模板 "Base" 的参数列表
// class Son0 : public Base {};

// 指定父类T的类型
class Son1 : public Base<int> {};

// 将子类也声明为类模板
template<class T>
class Son2 : public Base<T> {};

int main(int argc, char const *argv[])
{


    system("pause");
    return 0;
}
