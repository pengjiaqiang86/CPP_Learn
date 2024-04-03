#include <iostream>

using namespace std;

class AbstractCalculator {
public:
    // 虚函数
    virtual int getResult() {
        return 0;
    }

    int m_Num1;
    int m_Num2;
};

class AddCalculator : public AbstractCalculator {
    int getResult() {
        return m_Num1 + m_Num2;
    }
};

class SubCalculator : public AbstractCalculator {
    int getResult() {
        return m_Num1 - m_Num2;
    }
};

class MulCalculator : public AbstractCalculator {
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
