#include <iostream>

using namespace std;

/*
class ���� : �̳з�ʽ ���� { };

�̳з�ʽ��Ϊ�������̳С������̳С�˽�м̳�
*/

class Father {
public:
    int m_Public;

protected:
    int m_Protected;

private:
    int m_Private;
};

class Son1 : public Father {
public:
    void func() {
        cout << m_Public << endl;     // �����̳У������public��Ա��Ȼ��public
        cout << m_Protected << endl;  // �����̳У������protected��Ա��Ȼ��protected
        // cout << m_Private << endl; // �����̳У������private��Ա�޷��̳�
    }
};

class Son2 : protected Father {
public:
    void func() {
        cout << m_Public << endl;     // �����̳У������public��Ա��Ϊprotected
        cout << m_Protected << endl;  // �����̳У������protected��Ա��Ȼ��protected
        // cout << m_Private << endl; // �����̳У������private��Ա�޷��̳�
    }
};


class Son3 : private Father {
public:
    void func() {
        cout << m_Public << endl;     // ˽�м̳У������public��Ա��Ϊprivate
        cout << m_Protected << endl;  // ˽�м̳У������protected��Ա��Ϊprivate
        // cout << m_Private << endl; // ˽�м̳У������private��Ա�޷��̳�
    }
};


int main(int argc, char const *argv[])
{
    Son1 s1;
    cout << s1.m_Public << endl;       // public��������Է���
    // cout << s1.m_Protected << endl; // protected�����ⲻ���Է���
    // cout << s1.m_private << endl;   // private�����ⲻ���Է���

    Son2 s2;
    // cout << s2.m_Public << endl;    // protected�����ⲻ���Է���
    // cout << s2.m_Protected << endl; // protected�����ⲻ���Է���
    // cout << s2.m_private << endl;   // private�����ⲻ���Է���

    Son3 s3;
    // cout << s3.m_Public << endl;    // private�����ⲻ���Է���
    // cout << s3.m_Protected << endl; // private�����ⲻ���Է���
    // cout << s3.m_private << endl;   // private�����ⲻ���Է���

    system("pause");
    return 0;
}
