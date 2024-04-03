#include <iostream>

using namespace std;

/*
��̬��Ϊ���ࣺ
��̬��̬���������ء���������ء��ص㣺����׶ξ�ȷ��������ַ
��̬��̬����������麯��ʵ������ʱ��̬���ص㣺���н׶�ȷ��������ַ

// ��̬��̬������������1.�м̳й�ϵ 2.������д������麯��
// ��̬��̬��ʹ�ã������ָ������� ָ���������


-----------------------------------------------
Animal����virtual�ؼ��֣����ֻ࣬ռһ���ֽ�

class Animal    size(1):
        +---
        +---

-----------------------------------------------
Animal��virtual�ؼ��֣�4�ֽڣ�VS�����߹��ߣ�����Ĭ��32λ�����Ժ�g++ sizeof��ʾ�Ľ����һ�£�

class Animal    size(4):
        +---
 0      | {vfptr} // �麯��ָ��(virtual function pointer)
        +---

Animal::$vftable@: // �麯����(virtiual function table)
        | &Animal_meta
        |  0
 0      | &Animal::speak

Animal::speak this adjustor: 0

-----------------------------------------------
Animal��virtual�ؼ��֣�����Cat�಻��дspeak����

class _s__CatchableType size(28):
        +---
 0      | properties
 4      | pType
 8      | _PMD thisDisplacement
20      | sizeOrOffset
24      | copyFunction
        +---

class _s__CatchableTypeArray    size(4):
        +---
 0      | nCatchableTypes
 4      | arrayOfCatchableTypes
        +---

class Cat       size(4):
        +---
 0      | +--- (base class Animal)
 0      | | {vfptr}
        | +---
        +---

Cat::$vftable@:
        | &Cat_meta
        |  0
 0      | &Animal::speak // ���ﻹ��Animal::speak

-----------------------------------------------
Animal��virtual�ؼ��֣�Cat����дspeak����

class _s__CatchableType size(28):
        +---
 0      | properties
 4      | pType
 8      | _PMD thisDisplacement
20      | sizeOrOffset
24      | copyFunction
        +---

class _s__CatchableTypeArray    size(4):
        +---
 0      | nCatchableTypes
 4      | arrayOfCatchableTypes
        +---

class Cat       size(4):
        +---
 0      | +--- (base class Animal)
 0      | | {vfptr} // �麯��ָ��
        | +---
        +---

Cat::$vftable@: // �麯������¼�麯���ĵ�ַ
        | &Cat_meta
        |  0
 0      | &Cat::speak // ָ��Cat::speak

Cat::speak this adjustor: 0

*/

class Animal {
public:
    // ����virtual�ؼ��֣�speak������Ϊ�麯��
    // �������ڱ���׶β���ȷ���������ã�����ʵ�ֵ�ַ���
    virtual void speak() {
        cout << "Animal speak" << endl;
    }
};

class Cat : public Animal {
public:
    // ��д�����麯��������Ӹ���̳е��麯���� �ڲ��ᱻ�滻�� ������麯����ַ
    void speak() {
        cout << "Cat speak" << endl;
    }
};

// ��ַ��󶨣�����׶��Ѿ�ȷ�������ĵ�ַ
// ��ַ��󶨣�����׶β���ȷ����������
void doSpeak(Animal& animal) {
    animal.speak();
}

int main(int argc, char const *argv[])
{
    Cat cat;
    doSpeak(cat); // ��virtualǰ�� Animal speak
    doSpeak(cat); // ��virtual�� Cat speak

    cout << "sizeof class Animal = " << sizeof(Animal) << endl; // ��virtualǰ��1
    cout << "sizeof class Animal = " << sizeof(Animal) << endl; // ��virtual��8

    system("pause");
    return 0;
}
