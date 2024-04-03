#include <iostream>
#include <string>

using namespace std;

/*
2024��1��29��14:03:50

����1������
    ����ָ��ָ��������󣬸���ָ�����ͷŵ�ʱ���޷����õ��������������
    Ҳ���޷��ͷ������ڶ������ٵ��ڴ棬����ڴ�й©
�����
    �����е����������޸�Ϊ ���������� �� ������������

�����������봿�������������ԣ�
    �����Խ������ָ���ͷ�������������
    ����Ҫ�о���ĺ���ʵ��
�����������봿��������������
    ����Ǵ�����������������ڳ����࣬�޷�ʵ��������
�����������봿�����������﷨��
    virtual ~����() {}
    virtual ~����() = 0; ����::~����() {}
*/

class Animal {
public:
    Animal() {
        cout << "Animal���캯��" << endl;
    }

    // ����1
    // ~Animal() {
    //     cout << "Animal��������" << endl;
    // }

    // ����1�Ľ�����޸�Ϊ����������
    // virtual ~Animal() {
    //     cout << "Animal����������" << endl;
    // }

    // ����1�Ľ�����޸�Ϊ����������������Ҫ����Ҳ��Ҫʵ��
    virtual ~Animal() = 0;

    virtual void speak() = 0;
};

Animal::~Animal() {
    cout << "Animal������������" << endl;
}

class Cat : public Animal {
public:
    Cat(string name) {
        cout << "Cat���캯��" << endl;

        m_Name = new string(name);
    }

    ~Cat() {
        cout << "Cat��������" << endl;

        if (m_Name != NULL) {
            delete m_Name;
            m_Name = NULL;
        }
    }

    void speak() {
        cout << *m_Name << "Cat is speaking" << endl;
    }

    string * m_Name;
};

/*
��ӡ�����
    Animal���캯��
    Cat���캯��
    TomCat is speaking
    Animal��������
ע�⣺����û�е������������������Ҳ����ζ�������ڶ������ٵ��ڴ�û�б��ͷţ����ڴ�й©
*/
void test1() {
    Animal * cat = new Cat("Tom");
    cat->speak();
    delete cat;
}

/*
�������������޸�Ϊ����������������������ǰ�����virtual�ؼ���
��ӡ�����
    Animal���캯��
    Cat���캯��
    TomCat is speaking
    Cat��������
    Animal��������
*/
void test2() {
    Animal * cat = new Cat("Tom");
    cat->speak();
    delete cat;
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
