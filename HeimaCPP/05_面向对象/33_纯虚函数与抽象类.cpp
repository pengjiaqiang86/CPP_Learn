#include <iostream>

using namespace std;

/*
2024年1月26日13:50:22

在多态中，父类虚函数的实现是毫无意义的，主要都是调用子类重写的内容
因此可以将虚函数改为纯虚函数。当类中有了纯虚函数，这个类成为抽象类
语法：virtual 返回值类型 函数名(参数列表) = 0;
特点：抽象类无法实例化对象；子类必须重写父类的纯虚函数，否则也属于抽象类
*/

class AbstractCalculator {
public:
    // 纯虚函数
    virtual int getResult() = 0;

    int m_Num1;
    int m_Num2;
};

class AddCalculator : public AbstractCalculator {
public:
    int getResult() {
        return m_Num1 + m_Num2;
    }
};

class SubCalculator : public AbstractCalculator {
public:
    int getResult() {
        return m_Num1 - m_Num2;
    }
};

class MulCalculator : public AbstractCalculator {
public:
    int getResult() {
        return m_Num1 * m_Num2;
    }
};

int main(int argc, char const *argv[])
{
    AbstractCalculator *cal = new AddCalculator();
    cal->m_Num1 = 10;
    cal->m_Num2 = 20;
    cout << cal->m_Num1 << " + " << cal->m_Num2 << " = " << cal->getResult() << endl;

    delete cal;

    cal = new SubCalculator();
    cal->m_Num1 = 10;
    cal->m_Num2 = 20;
    cout << cal->m_Num1 << " - " << cal->m_Num2 << " = " << cal->getResult() << endl;

    delete cal;

    cal = new MulCalculator();
    cal->m_Num1 = 10;
    cal->m_Num2 = 20;
    cout << cal->m_Num1 << " * " << cal->m_Num2 << " = " << cal->getResult() << endl;

    delete cal;

    system("pause");
    return 0;
}
