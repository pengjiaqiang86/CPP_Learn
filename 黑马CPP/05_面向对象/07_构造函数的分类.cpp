#include <iostream>

using namespace std;

/*
构造函数的分类：
1.按参数分类：有参构造函数和无参构造函数
2.按类型分类：普通构造函数和拷贝构造函数

构造函数的调用：
1.括号法
2.显式法
3.隐式转换法

匿名对象：
e.g. Person("name") // 定义一个匿名对象，当前行执行结束之后，系统会立即回收
*/

class Person {
public:
    // 无参构造函数（默认构造函数）
    Person() {
        cout << "Person的无参构造函数" << '\t';
        cout << m_Name << endl;
    }

    // 有参构造函数
    Person(string name) {
        m_Name = name;
        cout << "Person的有参构造函数" << '\t';
        cout << m_Name << endl;
    }

    // 拷贝构造函数（传入同类型的常量引用）
    Person(const Person& p) {
        m_Name = p.m_Name;
        cout << "Person的拷贝构造函数" << '\t';
        cout << m_Name << endl;
    }

    // 析构函数
    ~Person() {
        cout << "Person析构函数调用" << '\t';
        cout << m_Name << endl;
    }

    string m_Name = "NULL";
};

/*
Person的无参构造函数    NULL
Person的有参构造函数    person2
Person的拷贝构造函数    person2
Person的有参构造函数    person4
Person的拷贝构造函数    person4
Person的有参构造函数    Anonymous
Person析构函数调用      Anonymous
Person的有参构造函数    person6
Person的拷贝构造函数    person6
请按任意键继续. . .
Person析构函数调用      person6
Person析构函数调用      person6
Person析构函数调用      person4
Person析构函数调用      person4
Person析构函数调用      person2
Person析构函数调用      person2
Person析构函数调用      NULL
*/
int main(int argc, char const *argv[])
{
    // 构造函数的调用
    // 1.括号法
    // 注意：默认构造方法的调用形式为 Person p1; 而非Person p1(); 后者会被视为函数声明
    Person p1; // 默认构造方法
    Person p2("person2"); // 有参构造方法
    Person p3(p2); // 拷贝构造函数

    // 2.显式法
    Person p4 = Person("person4"); // 有参构造方法
    Person p5 = Person(p4); // 拷贝构造函数

    Person("Anonymous"); // 匿名对象
    // 注意：不要用拷贝构造函数初始化匿名对象
    // e.g. Person(p1); 会被编译器视为 Person p1;
    // 报错信息：error: redeclaration of 'Person p1'
    // Person(p1);

    // 3.隐式法
    // B站教程中，老师在VS写的 Person p4 = 10; 用g++编译失败，必须加花括号
    Person p6 = {"person6"}; // 有参构造函数
    Person p7 = p6; // 拷贝构造函数

    system("pause");
    return 0;
}
