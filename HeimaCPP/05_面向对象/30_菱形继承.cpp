#include <iostream>

using namespace std;

/*
菱形继承概念：

问题：1.采用菱形继承，父类拥有相同的数据，需要利用作用域加以区分
2.菱形继承导数数据有两份，造成资源浪费

解决：可以利用虚继承解决菱形继承的问题。
继承之前 加上关键字virtual 变为虚继承。Base0类成为虚基类
*/

class Base0 {
public:
    int m_Age;
};

class Base1 : virtual public Base0 {

};

class Base2 : virtual public Base0 {

};

// 不加virtual成为虚继承之前
// class Base3     size(8):
//         +---
//  0      | +--- (base class Base1)
//  0      | | +--- (base class Base0)
//  0      | | | m_Age
//         | | +---
//         | +---
//  4      | +--- (base class Base2)
//  4      | | +--- (base class Base0)
//  4      | | | m_Age
//         | | +---
//         | +---
//         +---
//
// 加virtual成为虚继承之后
// class Base3     size(12):
//         +---
//  0      | +--- (base class Base1)
//  0      | | {vbptr} // 虚基类指针 virtual base pointer，指向vbtable（虚基类表）
//         | +---
//  4      | +--- (base class Base2)
//  4      | | {vbptr}
//         | +---
//         +---
//         +--- (virtual base Base0)
//  8      | m_Age // 只有一个了
//         +---
//
// Base3::$vbtable@Base1@:
//  0      | 0
//  1      | 8 (Base3d(Base1+0)Base0)

// Base3::$vbtable@Base2@:
//  0      | 0
//  1      | 4 (Base3d(Base2+0)Base0)
// vbi:       class  offset o.vbptr  o.vbte fVtorDisp
//            Base0       8       0       4 0
class Base3: public Base1, public Base2 {

};

int main(int argc, char const *argv[])
{
    Base3 b;
    b.Base1::m_Age = 10;
    b.Base2::m_Age = 20;

    // 加virtual前
    cout << b.Base1::m_Age << endl; // 10
    cout << b.Base2::m_Age << endl; // 20
    // cout << b.m_Age << endl; // 不明确

    // 加virtual后
    cout << b.Base1::m_Age << endl; // 20
    cout << b.Base2::m_Age << endl; // 20
    cout << b.m_Age << endl; // 20

    system("pause");
    return 0;
}
