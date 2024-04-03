#include <iostream>

using namespace std;

/*
���μ̳и��

���⣺1.�������μ̳У�����ӵ����ͬ�����ݣ���Ҫ�����������������
2.���μ̳е������������ݣ������Դ�˷�

���������������̳н�����μ̳е����⡣
�̳�֮ǰ ���Ϲؼ���virtual ��Ϊ��̳С�Base0���Ϊ�����
*/

class Base0 {
public:
    int m_Age;
};

class Base1 : virtual public Base0 {

};

class Base2 : virtual public Base0 {

};

// ����virtual��Ϊ��̳�֮ǰ
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
// ��virtual��Ϊ��̳�֮��
// class Base3     size(12):
//         +---
//  0      | +--- (base class Base1)
//  0      | | {vbptr} // �����ָ�� virtual base pointer��ָ��vbtable��������
//         | +---
//  4      | +--- (base class Base2)
//  4      | | {vbptr}
//         | +---
//         +---
//         +--- (virtual base Base0)
//  8      | m_Age // ֻ��һ����
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

    // ��virtualǰ
    cout << b.Base1::m_Age << endl; // 10
    cout << b.Base2::m_Age << endl; // 20
    // cout << b.m_Age << endl; // ����ȷ

    // ��virtual��
    cout << b.Base1::m_Age << endl; // 20
    cout << b.Base2::m_Age << endl; // 20
    cout << b.m_Age << endl; // 20

    system("pause");
    return 0;
}
