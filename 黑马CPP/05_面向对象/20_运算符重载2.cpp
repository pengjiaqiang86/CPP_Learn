#include <iostream>

using namespace std;

/*
重载左移运算符<<，实现在cout中输出对象
*/

class Number {
public:
    Number (){};

    Number (int value) {
        this->m_Value = value;
    }

    ~Number (){};

    int m_Value;

    // 1.重载成员函数
    // 无法实现想要的效果：cout << numner;
    // 因为定义为成员函数后，调用形式只能为 number.operator<<(cout)，即number << cout
    // void operator <<(ostream& cout) {
    //     return;
    // }
};

// 2.重载全局函数
// 这种定义无法实现链式调用，因为返回值是void
// ```cpp
// void operator <<(ostream& cout, Number& num) {
//         cout << num.m_Value;
// }
// ```
// 这种写法可以实现链式调用
ostream& operator <<(ostream& cout, Number& num) {
    cout << num.m_Value;
    return cout;
}

int main(int argc, char const *argv[])
{
    Number num1(5);
    
    cout << num1 << endl;

    system("pause");
    return 0;
}
