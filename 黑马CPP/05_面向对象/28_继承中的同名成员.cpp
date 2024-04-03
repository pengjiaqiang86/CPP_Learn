#include <iostream>

using namespace std;

/*
1.�̳���ͬ����Ա��ͨ��������õ�������߸��������

�����Ա��ֱ�ӷ���
�����Ա����Ҫ���������������.������::�����Ա

�����������븸��ͬ���ĳ�Ա�����������ͬ���������������и����ͬ����Ա������
�������ʸ���ĳ�Ա��������Ҫ��������

2.ͬ����̬��Ա
��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��

����ͬ����Ա������ֱ�ӷ���
����ͬ����Ա����Ҫ��������
*/

class Base {
public:
    Base() {
        this->m_A = 1;
        cout << "Base���캯��" << endl;
    }

    ~Base() {
        cout << "Base��������" << endl;
    }

    void func() {
        cout << "Base func()" << endl;
    }

    void func(int) {
        cout << "Base func(int)" << endl;
    }

    static void staticFunc() {
        cout << "Base staticFunc()" << endl;
    }

    static void staticFunc(int) {
        cout << "Base staticFunc(int)" << endl;
    }

    int m_A;

    static int m_Static;
};

class Son :public Base {
public:
    Son() {
        this->m_A = 2;
        cout << "Son���캯��" << endl;
    }

    ~Son() {
        cout << "Son��������" << endl;
    }

    void func() {
        cout << "Son func()" << endl;
    }

    static void staticFunc() {
        cout << "Son staticFunc()" << endl;
    }

    int m_A;

    static int m_Static;
};

// ��ʼ����̬���������������������ʼ����
int Base::m_Static = 100;
int Son::m_Static = 200;

// �Ǿ�̬��Ա
void test1() {

    cout << "-------------------" << endl;
    cout << "�Ǿ�̬��Ա��" << endl;
    Son s;

    // ��Ա����
    cout << "Son m_A: " << s.m_A << endl;
    cout << "Base m_A: " << s.Base::m_A << endl;

    // ��Ա����
    s.func();
    // s.func(2); // �޷�����
    s.Base::func();
    s.Base::func(2);
}

// ��̬��Ա
void test2() {

    cout << "-------------------" << endl;
    cout << "��̬��Ա��ͨ�����������ʣ�" << endl;
    Son s;

    // ��̬����
    cout << "Son m_Static: " << s.m_Static << endl;
    cout << "Base m_Static: " << s.Base::m_Static << endl;

    // ��̬����
    s.staticFunc();
    // s.staticFunc(2);// �޷�����
    s.Base::staticFunc();
    s.Base::staticFunc(2);

    cout << "��̬��Ա��ͨ���������ʣ�" << endl;
    cout << "Son m_Static: " << Son::m_Static << endl;
    cout << "Base m_Static: " << Base::m_Static << endl;
    cout << "Base m_Static: " << Son::Base::m_Static << endl;

    // ��̬����
    Son::staticFunc();
    // Son::staticFunc(2);// �޷�����
    Base::staticFunc();
    Base::staticFunc(2);
}

int main(int argc, char const *argv[])
{
    // �Ǿ�̬��Ա
    test1();

    // ��̬��Ա
    test2();

    system("pause");
    return 0;
}
