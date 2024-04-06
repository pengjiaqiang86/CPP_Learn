#include <iostream>
#include <string>

using namespace std;

/*
2024年1月29日14:03:50

问题1描述：
    父类指针指向子类对象，父类指针在释放的时候无法调用到子类的析构函数
    也就无法释放子类在堆区开辟的内存，造成内存泄漏
解决：
    父类中的析构函数修改为 虚析构函数 或 纯虚析构函数

虚析构函数与纯虚析构函数共性：
    都可以解决父类指针释放子类对象的问题
    都需要有具体的函数实现
虚析构函数与纯虚析构函数区别：
    如果是纯虚析构，这个类属于抽象类，无法实例化对象
虚析构函数与纯虚析构函数语法：
    virtual ~类名() {}
    virtual ~类名() = 0; 类名::~类名() {}
*/

class Animal {
public:
    Animal() {
        cout << "Animal构造函数" << endl;
    }

    // 问题1
    ~Animal() {
        cout << "Animal析构函数" << endl;
    }

    // 问题1的解决：修改为虚析构函数
    // virtual ~Animal() {
    //     cout << "Animal虚析构函数" << endl;
    // }

    // 问题1的解决：修改为纯虚析构函数。需要声明也需要实现（类外实现）
    // virtual ~Animal() = 0;

    virtual void speak() = 0;
};

// Animal::~Animal() {
//     cout << "Animal纯虚析构函数" << endl;
// }

class Cat : public Animal {
public:
    Cat(string name) {
        cout << "Cat构造函数" << endl;

        m_Name = new string(name);
    }

    ~Cat() {
        cout << "Cat析构函数" << endl;

        if (m_Name != NULL) {
            delete m_Name;
            m_Name = NULL;
        }
    }

    void speak() {
        cout << *m_Name << " Cat is speaking" << endl;
    }

    string * m_Name;
};

/*
打印输出：
    Animal构造函数
    Cat构造函数
    TomCat is speaking
    Animal析构函数
注意：这里没有调用子类Cat的析构函数，也就意味着子类在堆区开辟的内存没有被释放，即内存泄漏
*/
void test1() {
    Animal * cat = new Cat("Tom");
    cat->speak();
    delete cat;
}

/*
父类析构函数修改为虚析构函数，在析构函数前面加上virtual关键字
打印输出：
    Animal构造函数
    Cat构造函数
    TomCat is speaking
    Cat析构函数
    Animal析构函数
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
