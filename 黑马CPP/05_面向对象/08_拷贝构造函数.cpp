#include <iostream>
#include <string>

using namespace std;

/*
拷贝构造函数的调用时机：
1.利用一个已经创建完毕的对象初始化一个对象
2.值传递的方式给函数参数赋值（实参传递给实参的时候，会调用拷贝构造函数）
3.以值方式返回局部对象（存疑，老师用的VS，而在g++上显示test3()不会调用拷贝构造函数）
*/

class Person {
public:
    Person() {
        cout << "Person无参构造" << endl;
    }

    Person(string name) {
        m_Name = name;
        cout << "Person有参构造" << "\t";
        cout << m_Name << endl;
    }

    Person(const Person& p) {
        m_Name = p.m_Name;
        cout << "Person拷贝构造" << "\t";
        cout << m_Name << endl;
    }

    ~Person() {
        cout << "Person析构" << "\t";
        cout << m_Name << endl;
    }

public:
    string m_Name;
};

// 1.利用一个已经创建完毕的对象初始化一个对象
void test1() {
    Person p1("person1");
    Person p2(p1);
}

// 2.值传递的方式给函数参数赋值
void func1(Person p) {
    return;
}

void test2() {
    Person p3("person3");
    func1(p3);
}

// 3.以值方式返回局部对象
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
    // Person有参构造
    // Person拷贝构造
    // Person析构      person1
    // Person析构      person1
    //
    // test1();

    // Person有参构造
    // Person拷贝构造
    // Person析构      person3
    // Person析构      person3
    //
    // test2();

    // Person有参构造  person4
    // 0x61fdc0
    // 0x61fdc0
    // person4
    // Person析构      person4
    //
    // test3();

    system("pause");
    return 0;
}
