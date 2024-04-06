#include <iostream>

using namespace std;

/*
多态分为两类：
静态多态：函数重载、运算符重载。特点：编译阶段就确定函数地址
动态多态：派生类和虚函数实现运行时多态。特点：运行阶段确定函数地址

// 动态多态的满足条件：1.有继承关系 2.子类重写父类的虚函数
// 动态多态的使用：父类的指针或引用 指向子类对象


-----------------------------------------------
Animal不加virtual关键字，空类，只占一个字节

class Animal    size(1):
        +---
        +---

-----------------------------------------------
Animal加virtual关键字，4字节（VS开发者工具，可能默认32位；所以和g++ sizeof显示的结果不一致，g++为8字节）

class Animal    size(4):
        +---
 0      | {vfptr} // 虚函数指针(virtual function pointer)
        +---

Animal::$vftable@: // 虚函数表(virtiual function table)
        | &Animal_meta
        |  0
 0      | &Animal::speak

Animal::speak this adjustor: 0

-----------------------------------------------
Animal加virtual关键字，但是Cat类不重写speak函数

class Cat       size(4):
        +---
 0      | +--- (base class Animal)
 0      | | {vfptr}
        | +---
        +---

Cat::$vftable@:
        | &Cat_meta
        |  0
 0      | &Animal::speak // 这里还是Animal::speak

-----------------------------------------------
Animal加virtual关键字，Cat类重写speak函数

class Cat       size(4):
        +---
 0      | +--- (base class Animal)
 0      | | {vfptr} // 虚函数指针
        | +---
        +---

Cat::$vftable@: // 虚函数表，记录虚函数的地址
        | &Cat_meta
        |  0
 0      | &Cat::speak // 指向Cat::speak

Cat::speak this adjustor: 0

*/

class Animal {
public:
    // 加上virtual关键字，speak函数成为虚函数
    // 编译器在编译阶段不能确定函数调用，可以实现地址晚绑定
    virtual void speak() {
        cout << "Animal speak" << endl;
    }
};

class Cat : public Animal {
public:
    // 重写父类虚函数。子类从父类继承的虚函数表 内部会被替换成 子类的虚函数地址
    virtual void speak() {
        cout << "Cat speak" << endl;
    }
};

// 地址早绑定，编译阶段已经确定函数的地址
// 地址晚绑定，编译阶段不能确定函数调用
void doSpeak(Animal& animal) {
    animal.speak();
}

int main(int argc, char const *argv[])
{
    Cat cat;

    doSpeak(cat); // 加virtual前： Animal speak
    doSpeak(cat); // 加virtual后，不重写Cat的方法： Animal speak
    doSpeak(cat); // 加virtual后，重写Cat的方法： Cat speak

    cout << "sizeof class Animal = " << sizeof(Animal) << endl; // 加virtual前：1
    cout << "sizeof class Animal = " << sizeof(Animal) << endl; // 加virtual后，不重写：8
    cout << "sizeof class Animal = " << sizeof(Animal) << endl; // 加virtual后，重写：8

    system("pause");
    return 0;
}
