#include <iostream>
using namespace std;

// c++中定义常量的方式有
// 1. 宏常量
// 2. const修饰的常量

#define DAY 7

int main02() {
	// 1. 宏
	cout << DAY << endl;
	// DAY = 8; // error: 表达式必须是可修改的左值

	// const
	const int MONTH = 12;
	cout << MONTH << endl;
	// MONTH = 24； // error

	system("pause");

	return 0;
}