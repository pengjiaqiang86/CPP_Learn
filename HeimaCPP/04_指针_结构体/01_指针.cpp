#include <iostream>

using namespace std;

struct Student {
	int age;
	char name[10];
};


/*
1. 定义指针变量
2. 指针解引用
3. 指针变量占用的内存空间（64位操作系统，全部占8字节，64位）
*/
int main() {

	// 定义指针
	int a = 10;
	int* p = &a;

	cout << (intptr_t)p << endl;
	cout << p << endl;

	// 套娃
	int** pp = &p;
	cout << pp << endl;

	int*** ppp = &pp;
	cout << ppp << endl;

	// 指针占用的内存空间大小
	// 在32位操作系统下（x86），占4个字节
	// 在64位操作系统下（x64），占8个字节
	cout << "sizeof p = " << sizeof p << endl; // 8
	cout << "sizeof pp = " << sizeof pp << endl; // 8
	cout << "sizeof pp = " << sizeof ppp << endl; // 8

	// 字符指针
	char c = 'c';
	char* pc = &c;
	cout << "sizeof pointer char = " << sizeof pc << endl; // 8

	// 结构体指针
	cout << "sizeof struct Student = " << sizeof(Student *) << endl; // 8

	system("pause");

	return 0;
}

