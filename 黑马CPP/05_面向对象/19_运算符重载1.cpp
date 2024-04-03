#include <iostream>

using namespace std;

/*
1.加法运算符：
2.左移运算符：
3.递增运算符：
4.赋值运算符：
5.关系运算符：
6.函数调用：
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
    Number operator +(Number& num) {
        Number temp;
        temp.m_Value = this->m_Value + num.m_Value;
        return temp;
    }
};

// 2.重载全局函数
// Number operator +(Number& num1, Number& num2) {
//         Number temp;
//         temp.m_Value = num1.m_Value + num2.m_Value;
//         return temp;
// }

int main(int argc, char const *argv[])
{
    Number num1(5);
    Number num2(10);
    Number num3 = num1 + num2; // 简写
    Number num4 = num1.operator+(num2); // 成员函数
    // Number num5 = operator+(num1, num2); // 全局函数

    cout << num1.m_Value << endl;
    cout << num2.m_Value << endl;
    cout << num3.m_Value << endl;
    cout << num4.m_Value << endl;

    system("pause");
    return 0;
}
