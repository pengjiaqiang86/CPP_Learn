#include <iostream>

using namespace std;

class MyInteger {

friend ostream& operator<<(ostream& cout, MyInteger myInt);

public:
    MyInteger(){}

    MyInteger(int value) {
        this->m_Value = value;
    }

    // 前置++：先执行递加操作，然后返回自身的引用
    MyInteger& operator++() {
        m_Value++;
        return *this;
    }

    // 后置++：先返回，然后执行递加操作
    // 要点1：用int作为占位符，用于区分前置++和后置++（后缀“operator++”的额外参数必须是“int”类型）
    // 要点2：因为需要返回++之前的状态，因此需要创建临时变量，最后将临时变量返回
    // 要点3：返回值类型为MyInteger，而非引用，因为不能返回临时变量的引用
    MyInteger operator++(int) {
        MyInteger temp = *this;
        m_Value++;
        return temp;
    }

private:
    int m_Value;
};

ostream& operator<<(ostream& cout, MyInteger myInt) {
    cout << myInt.m_Value;
    return cout;
}

int main(int argc, char const *argv[])
{
    MyInteger myInt1(2);
    cout << myInt1 << endl;
    cout << ++myInt1 << endl;
    cout << myInt1 << endl;

    MyInteger myInt2(0);
    cout << myInt2 << endl;
    cout << myInt2++ << endl;
    cout << myInt2 << endl;


    system("pause");
    return 0;
}
