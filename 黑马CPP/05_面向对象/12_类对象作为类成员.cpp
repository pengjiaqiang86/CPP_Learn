#include <iostream>

using namespace std;

/*
C++���еĳ�Ա����������һ����Ķ��󣬳Ƹó�ԱΪ �����Ա

�����������ʱ���ȳ�ʼ�����࣬�ٳ�ʼ�����ࣨJavaһ����
���������ĵ���˳��պ��෴
*/

class A {
public:
    A() {
        cout << "A���޲ι��캯��" << endl;
    }

    ~A() {
        cout << "A����������" << endl;
    }
};

class B {
public:
    B() {
        cout << "B���޲ι��캯��" << endl;
    }

    ~B(){
        cout << "B����������" << endl;
    }

public:
    A a; // �����Ա
};

class C {
public:
    C () {
        cout << "C���޲ι��캯��" << endl;
    }

    ~C () {
        cout << "C����������" << endl;
    }

public:
    B b;
};

void test1() {
    // ���н����
    // A���޲ι��캯��
    // B���޲ι��캯��
    // C���޲ι��캯��
    // C����������
    // B����������
    // A����������
    C c;
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
