#include <iostream>

using namespace std;

/*
���캯���ķ��ࣺ
1.���������ࣺ�вι��캯�����޲ι��캯��
2.�����ͷ��ࣺ��ͨ���캯���Ϳ������캯��

���캯���ĵ��ã�
1.���ŷ�
2.��ʽ��
3.��ʽת����

��������
e.g. Person("name") // ����һ���������󣬵�ǰ��ִ�н���֮��ϵͳ����������
*/

class Person {
public:
    // �޲ι��캯����Ĭ�Ϲ��캯����
    Person() {
        cout << "Person���޲ι��캯��" << '\t';
        cout << m_Name << endl;
    }

    // �вι��캯��
    Person(string name) {
        m_Name = name;
        cout << "Person���вι��캯��" << '\t';
        cout << m_Name << endl;
    }

    // �������캯��������ͬ���͵ĳ������ã�
    Person(const Person& p) {
        m_Name = p.m_Name;
        cout << "Person�Ŀ������캯��" << '\t';
        cout << m_Name << endl;
    }

    // ��������
    ~Person() {
        cout << "Person������������" << '\t';
        cout << m_Name << endl;
    }

    string m_Name = "NULL";
};

/*
Person���޲ι��캯��    NULL
Person���вι��캯��    person2
Person�Ŀ������캯��    person2
Person���вι��캯��    person4
Person�Ŀ������캯��    person4
Person���вι��캯��    Anonymous
Person������������      Anonymous
Person���вι��캯��    person6
Person�Ŀ������캯��    person6
�밴���������. . .
Person������������      person6
Person������������      person6
Person������������      person4
Person������������      person4
Person������������      person2
Person������������      person2
Person������������      NULL
*/
int main(int argc, char const *argv[])
{
    // ���캯���ĵ���
    // 1.���ŷ�
    // ע�⣺Ĭ�Ϲ��췽���ĵ�����ʽΪ Person p1; ����Person p1(); ���߻ᱻ��Ϊ��������
    Person p1; // Ĭ�Ϲ��췽��
    Person p2("person2"); // �вι��췽��
    Person p3(p2); // �������캯��

    // 2.��ʽ��
    Person p4 = Person("person4"); // �вι��췽��
    Person p5 = Person(p4); // �������캯��

    Person("Anonymous"); // ��������
    // ע�⣺��Ҫ�ÿ������캯����ʼ����������
    // e.g. Person(p1); �ᱻ��������Ϊ Person p1;
    // ������Ϣ��error: redeclaration of 'Person p1'
    // Person(p1);

    // 3.��ʽ��
    // Bվ�̳��У���ʦ��VSд�� Person p4 = 10; ��g++����ʧ�ܣ�����ӻ�����
    Person p6 = {"person6"}; // �вι��캯��
    Person p7 = p6; // �������캯��

    system("pause");
    return 0;
}
