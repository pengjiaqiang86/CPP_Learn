#include <iostream>

using namespace std;

/*
1.父类中所有非静态成员属性都会被子类继承，只是父类的私有属性被编译器隐藏，无法访问
2.利用VS的开发者工具可以查看类的布局
    在开始菜单找到Developer Command Prompt for VS 20**
    切换路径到当前C++文件所在的路径
    CL /D1 reportSingleClassLayout类名 CPP源文件名
    cl /d1 reportSingleClassLayoutSon2 26_继承中的对象模型.cpp
*/

class Father {
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son1 : public Father {
public:
    int m_D;
};

int main(int argc, char const *argv[])
{
    // 父类中所有非静态成员属性都会被子类继承
    // 只是父类的私有属性被编译器隐藏，无法访问
    cout << sizeof(Son1) << endl; // 16

    system("pause");
    return 0;
}
