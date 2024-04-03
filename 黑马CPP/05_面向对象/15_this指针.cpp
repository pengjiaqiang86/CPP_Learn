#include <iostream>

using namespace std;

/*
this指针：this指针指向被调用的成员函数所属的对象

用途：
1.当形参与成员变量重名时，用this区分二者
2.在类的非静态成员函数中，可以用*this返回对象本身

特点：
this指针隐含在每一个非静态成员函数中，不需要定义可以直接使用
*/

class Number {
public:
    int value;

    Number(int value) {
        // 1.区分成员变量与形参
        this->value = value;
    }

    // 2.返回对象本身
    Number& add(Number& num) {
        this->value += num.value;
        return *this;
    }

    Number& subtract(Number& num) {
        this->value -= num.value;
        return *this;
    }

    Number& multipliy(Number& num) {
        this->value *= num.value;
        return *this;
    }
};

int main(int argc, char const *argv[])
{
    Number num1(5);
    Number num2(3);

    num1.add(num2).multipliy(num2);
    // 24；如果所有方法的返回值类型都是Number（不是引用），则打印8，
    // 因为执行完第一步加后，其余操作都是在num1的副本上进行
    cout << num1.value << endl;

    system("pause");
    return 0;
}
