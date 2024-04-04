#include <iostream>

using namespace std;

/*
重载关系运算符
*/

class MyInteger {
public:
    MyInteger() {}

    MyInteger(int value) {
        this->m_Value = value;
    }

    bool operator>(MyInteger & myInt) const {
        if (this->m_Value > myInt.m_Value) return true;
        return false;
    }

    bool operator==(MyInteger & myInt) const {
        if (this->m_Value == myInt.m_Value) return true;
        return false;
    }

    bool operator!=(MyInteger & myInt) const {
        if (this->m_Value != myInt.m_Value) return true;
        return false;
    }

    int m_Value;
};

int main(int argc, char const *argv[])
{
    MyInteger myInt1 = MyInteger(1);
    MyInteger myInt2 = MyInteger(2);

    cout << (myInt1 > myInt2) << endl; // 0
    cout << (myInt1 == myInt2) << endl; // 0
    cout << (myInt1 != myInt2) << endl; // 1

    system("pause");
    return 0;
}
