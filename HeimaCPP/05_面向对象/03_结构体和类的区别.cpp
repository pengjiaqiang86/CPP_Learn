#include <iostream>
#include <string>

using namespace std;

/*
struct和class的区别：
1. struct默认权限是public，而class默认权限是private
*/

struct sPerson {
    string name;
};

class cPerson {
    string m_Name;
};

int main(int argc, char const *argv[])
{
    struct sPerson sp;
    sp.name = "person";

    cPerson cp;
    // 成员 "cPerson::m_Name" (已声明 所在行数:16) 不可访问C/C++(265)
    // cp.m_Name = "person";

    system("pause");
    return 0;
}
