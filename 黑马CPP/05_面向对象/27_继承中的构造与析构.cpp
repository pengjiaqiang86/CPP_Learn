#include <iostream>

using namespace std;

/*
�̳��еĹ���������

˳��
Base����
Son����
Son����
Base����
*/

class Base {
public:
    Base() {
        cout << "Base���캯��" << endl;
    }

    ~Base() {
        cout << "Base��������" << endl;
    }
};

class Son : public Base {
public:
    Son() {
        cout << "Son���캯��" << endl;
    }

    ~Son() {
        cout << "Son��������" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Son s = Son();

    system("pause");
    return 0;
}
