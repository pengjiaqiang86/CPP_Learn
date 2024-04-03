#include <iostream>

using namespace std;

/*
空指针调用成员函数
*/

class Person {
public:
    void info() {
        cout << "Calling function info()" << endl;
    }

    void showName() {
        cout << "Name: " << m_Name << endl;
    }

    void showAge() {
        cout << "Age: " << m_Age << endl;
    }

    string m_Name;
    int m_Age = 18;
};

int main(int argc, char const *argv[])
{
    Person * p = NULL;
    p->info();
    // 这一行在VS会运行失败：提示this是nullptr，读取访问权限冲突；
    // 在g++中正常运行，但是下面showAge()、system()没有执行！
    p->showName();
    p->showAge();

    system("pause");
    return 0;
}
