#include <iostream>
#include <string>

using namespace std;

class Test {
public:
    // 无参构造函数
    Test(): m_A(1), m_B(2), m_C(3) {
        cout << "无参构造函数" << endl;
    }

    // 有参构造函数
    Test(int a, int b, int c = 3): m_A(a), m_B(b), m_C(c) {
        cout << "有参构造函数" << endl;
    }

    void info() {
        cout << "m_A: " << m_A << '\t';
        cout << "m_B: " << m_B << '\t';
        cout << "m_C: " << m_C << endl;
    }

    int m_A;
    int m_B;
    int m_C;
};

int main(int argc, char const *argv[])
{
    Test t1;
    Test t2(10, 20);
    t1.info();
    t2.info();

    system("pause");
    return 0;
}
