#include <iostream>

using namespace std;

/*
C++中的默认参数：
返回值类型 函数名(参数 = 默认值) {}

注意：
1. 默认参数之后所有参数都必须是默认参数
2. 如果函数有函数声明，那么函数实现就不能有默认参数。也就是声明和实现只能有一个有默认参数


占位参数
返回值类型 函数名(类型) {}
*/

// g++ error: default argument given for parameter 2 of 'void defaultParams(int, int)'
// void defaultParams(int a, int b = 5);

void defaultParams(int a, int b = 5) {
    cout << (a + b) << endl;
}

// 如果重载函数，那么语句 `defaultParams(5);` 将会出错
//
// void defaultParams(int a) {
//     cout << a << endl;
// }

// 占位参数
void placeholder(int a, int) {
    cout << a << endl;
}

int main(int argc, char const *argv[])
{
    defaultParams(5); // 10
    defaultParams(4, 3); // 7

    placeholder(1, 2);

    system("pause");
    return 0;
}
