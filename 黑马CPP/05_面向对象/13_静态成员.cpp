#include <iostream>

using namespace std;

/*
��̬��Ա��Ҳ�����ڳ�Ա�����ͳ�Ա����֮ǰ����static�ؼ��֣���Ϊ��̬��Ա
��̬��ԱҲ���ڷ���Ȩ��
��̬��Ա�����ֵ��÷�ʽ������.��Ա �� ����::��Ա

1.��̬��Ա������
    ���ж�����ͬһ������
    �ڱ���׶ξͷ������ڴ�
    ���������������ʼ��
2.��̬��Ա������
    ���ж�����ͬһ������
    ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
*/

class Person {
public:
    // ���ڶ���
    static int m_A;
    int m_C;

    static void func() {
        cout << m_A << endl;
        // cout << m_C << endl; // error ��̬��Ա���ܷ��ʷǾ�̬��Ա
        cout << "func" << endl;
    }

private:
    static int m_B;
};

// �����ʼ��
int Person::m_A = 2;
int Person::m_B = 6;

int main(int argc, char const *argv[])
{
    // ���ж���������
    Person p1;
    cout << Person::m_A << endl; // 2
    Person p2;    p2.m_A = 1;
    cout << Person::m_A << endl; // 1

    // ��̬��Ա�ķ���Ȩ��
    // cout << Person::m_B << endl; // error�����ɷ���

    system("pause");
    return 0;
}
