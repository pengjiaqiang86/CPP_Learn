#include <iostream>
#include <string>

using namespace std;

/*
�������캯���ĵ���ʱ����
1.����һ���Ѿ�������ϵĶ����ʼ��һ������
2.ֵ���ݵķ�ʽ������������ֵ��ʵ�δ��ݸ�ʵ�ε�ʱ�򣬻���ÿ������캯����
3.��ֵ��ʽ���ؾֲ����󣨴��ɣ���ʦ�õ�VS������g++����ʾtest3()������ÿ������캯����
*/

class Person {
public:
    Person() {
        cout << "Person�޲ι���" << endl;
    }

    Person(string name) {
        m_Name = name;
        cout << "Person�вι���" << "\t";
        cout << m_Name << endl;
    }

    Person(const Person& p) {
        m_Name = p.m_Name;
        cout << "Person��������" << "\t";
        cout << m_Name << endl;
    }

    ~Person() {
        cout << "Person����" << "\t";
        cout << m_Name << endl;
    }

public:
    string m_Name;
};

// 1.����һ���Ѿ�������ϵĶ����ʼ��һ������
void test1() {
    Person p1("person1");
    Person p2(p1);
}

// 2.ֵ���ݵķ�ʽ������������ֵ
void func1(Person p) {
    return;
}

void test2() {
    Person p3("person3");
    func1(p3);
}

// 3.��ֵ��ʽ���ؾֲ�����
Person func2() {
    Person p4("person4");
    cout << (int*) &p4 << endl;
    return p4;
}

void test3() {
    Person p5 = func2();
    cout << (int*) &p5 << endl;
    cout << p5.m_Name << endl;
}

int main(int argc, char const *argv[])
{
    // Person�вι���
    // Person��������
    // Person����      person1
    // Person����      person1
    //
    // test1();

    // Person�вι���
    // Person��������
    // Person����      person3
    // Person����      person3
    //
    // test2();

    // Person�вι���  person4
    // 0x61fdc0
    // 0x61fdc0
    // person4
    // Person����      person4
    //
    // test3();

    system("pause");
    return 0;
}
