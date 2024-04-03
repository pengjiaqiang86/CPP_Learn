#include <iostream>
#include <string>
using namespace std;

/*
C++字符串
1. 沿用C语言风格
	char str[] = "Hello World";
2. C++风格
	string str = "Hello World";
*/
int main02() {
	// 字符数组
	char str[] = "Hello World";
	cout << str << endl;

	// 指针
	const char* str2 = "Test";
	cout << str2 << endl;

	// string
	string str3 = "Hello World";
	cout << str3 << endl;

	system("pause");

	return 0;
}