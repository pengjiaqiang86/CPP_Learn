#include <iostream>
#include <string>

using namespace std;

/*
构造函数和析构函数用于类的初始化和清理
构造函数的语法为：类名 () {}
析构函数的语法为：~类名 () {}

特点：
    构造函数和析构函数，没有返回值也不写void
    构造函数函数名与类名相同，析构函数函数名是类名前加~
    构造函数有参数，可以重载；析构函数没有参数，无法重载
    构造函数和析构函数都是必须有的实现，如果程序员不提供，编译器会提供一个空实现
    构造函数和析构函数都只调用一次；构造函数在对象初始化时候调用；析构函数在对象销毁时调用
*/

class Person {
public:
    // 构造函数的定义
    Person(string id, string name, bool male) {
        m_ID = id;
        m_Name = name;
        isMale = male;
    }

    // 构造函数的重载
    Person(string id, string name) {
        m_ID = id;
        m_Name = name;
    }

    // 析构函数
    ~Person() {
        cout << "Person instance is destroyed." << '\t';
        cout << "His/Her name is " << m_Name << endl;
    }

public:
    string m_ID;
    string m_Name;
    bool isMale = true;
};

int main(int argc, char const *argv[])
{
    Person p1 = Person("id1", "name1");

    cout << p1.m_ID <<endl;
    cout << p1.m_Name <<endl;
    cout << p1.isMale <<endl; // 1

    Person p2 = Person("id2", "name2", false);

    cout << p2.m_ID <<endl;
    cout << p2.m_Name <<endl;
    cout << p2.isMale <<endl; // 0

    // 删除对象
    // 1. 用delete关键字
    // delete &p1; // 注意delete后面传的是对象的指针
    // delete &p2;
    // 注意：如果代码是 delete &p1;  delete &p2;  system("pause");
    // 那么显示只释放掉了p1对象，因为程序在pause。当pause执行完之后，会销毁p2
    // 
    // 2. 不用delete关键字
    // 执行完pause之后才会销毁p1和p2对象
    // Press any key to continue . . .
    // Person instance is destroyed.   His/Her name is name2
    // Person instance is destroyed.   His/Her name is name1

    system("pause");
    return 0;
}
