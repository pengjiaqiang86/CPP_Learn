#include <iostream>

using namespace std;

/*
��Ԫ���ڳ����У���һЩ˽�����ԣ�Ҳ���������һЩ���⺯��������ʣ���Ҫʹ����Ԫ
���ã���һ���������������һ�����˽�г�Ա
�ؼ��֣�friend
����ʵ�ַ�ʽ��1.ȫ�ֺ�������Ԫ 2.������Ԫ 3.��Ա��������Ԫ
*/


class Test1 {

    // 3.��ĳ�Ա������Ϊ��Ԫ��friend�ؼ���+������
    friend void Test3::info1();
    friend void Test3::info2();

public:
    Test1() {
        m_A = 3;
        m_B = 4;
    }

    Test1(int a, int b) {
        m_A = a;
        m_B = b;
    }

public:
    int m_A;

private:
    int m_B;
};


class Test3 {
public:
    Test3() {
        t = new Test1;
    }

    // ����info1����˽������
    void info1() {

        cout << "public m_A: " << t->m_A << endl;
        cout << "private m_B: " << t->m_B << endl;
    }

    // ������info2����˽������
    void info2() {

        cout << "public m_A: " << t->m_A << endl;
        cout << "private m_B: " << t->m_B << endl;
    }

public:
    Test1* t;
};

// 3.��ĳ�Ա������Ϊ��Ԫ
void friendMethod() {
    Test3 t;
    t.info1();
    t.info2();
}

int main(int argc, char const* argv[])
{

    friendMethod();

    system("pause");
    return 0;
}
