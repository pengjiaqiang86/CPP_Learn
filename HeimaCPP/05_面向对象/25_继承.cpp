#include <iostream>

using namespace std;

/*
class 子类 : 继承方式 父类 { };

继承方式分为：公共继承、保护继承、私有继承
*/

class Father {
public:
    int m_Public;

protected:
    int m_Protected;

private:
    int m_Private;
};

class Son1 : public Father {
public:
    void func() {
        cout << m_Public << endl;     // 公共继承，父类的public成员仍然是public
        cout << m_Protected << endl;  // 公共继承，父类的protected成员仍然是protected
        // cout << m_Private << endl; // 公共继承，父类的private成员无法继承
    }
};

class Son2 : protected Father {
public:
    void func() {
        cout << m_Public << endl;     // 保护继承，父类的public成员变为protected
        cout << m_Protected << endl;  // 保护继承，父类的protected成员仍然是protected
        // cout << m_Private << endl; // 保护继承，父类的private成员无法继承
    }
};


class Son3 : private Father {
public:
    void func() {
        cout << m_Public << endl;     // 私有继承，父类的public成员变为private
        cout << m_Protected << endl;  // 私有继承，父类的protected成员变为private
        // cout << m_Private << endl; // 私有继承，父类的private成员无法继承
    }
};


int main(int argc, char const *argv[])
{
    Son1 s1;
    cout << s1.m_Public << endl;       // public，类外可以访问
    // cout << s1.m_Protected << endl; // protected，类外不可以访问
    // cout << s1.m_private << endl;   // private，类外不可以访问

    Son2 s2;
    // cout << s2.m_Public << endl;    // protected，类外不可以访问
    // cout << s2.m_Protected << endl; // protected，类外不可以访问
    // cout << s2.m_private << endl;   // private，类外不可以访问

    Son3 s3;
    // cout << s3.m_Public << endl;    // private，类外不可以访问
    // cout << s3.m_Protected << endl; // private，类外不可以访问
    // cout << s3.m_private << endl;   // private，类外不可以访问

    system("pause");
    return 0;
}
