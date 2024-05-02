#include <iostream>
#include <stack>

using namespace std;

/**
 * encoding :   utf-8
 * @file    :   26_stack容器.cpp
 * @time    :   2024/05/02 10:58:39
 * @author  :   Peng
 * @version :   1.0
 * @desc    :   None
*/

/*
stack容器

特点：
    先进后出 First In Last Out
    不支持随机访问

构造函数：
    stack<T> stk;
    stack<T>(const stack &stk);

赋值操作：
    stack& operator=(const stack &stk);

数据存取：
    push(); // 压栈
    pop();  // 弹栈
    top();  // 栈顶元素

大小：
    empty(); // 是否为空
    size();  // 栈的大小

其他：
    swap();
    emplace();
*/

void test1()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        cout << "Top = " << temp << " Size = " << s.size() << endl;
    }
}

int main(int argc, char const *argv[])
{
    test1();

    system("pause");
    return 0;
}
