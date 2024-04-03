#include <iostream>

using namespace std;

/*
2023年12月29日13:37:10

1. const修饰指针 - 常量指针
   指针的指向可以修改，但是指针指向的值不能修改
2. const修饰变量 - 指针常量
   指针指向的值可以修改，但是指针的指向不能修改
3. 既修饰指针又修饰常量
   都不可以修改
*/
int main03() {

	// 1. 常量指针
	int a = 10;
	int b = 10;
	const int* p = &a;

	cout << a << endl;
	cout << b << endl;
	cout << p << endl;

	// p = &b;
	// *p = 20; // error

	cout << a << endl;
	cout << b << endl;
	cout << p << endl;

	// 2. 指针常量
	cout << "=============" << endl;

	int aa = 10;
	int bb = 10;
	int* const pp = &aa;

	cout << aa << endl;
	cout << bb << endl;
	cout << pp << endl;

	 //pp = &b; // error
	 *pp = 20;

	cout << aa << endl;
	cout << bb << endl;
	cout << pp << endl;

	// 3. 二者
	cout << "=============" << endl;

	int aaa = 10;
	int bbb = 10;
	const int* const ppp = &aa;

	cout << aaa << endl;
	cout << bbb << endl;
	cout << ppp << endl;

	// ppp = &bbb; // error
	// *ppp = 20; // error

	cout << aaa << endl;
	cout << bbb << endl;
	cout << ppp << endl;

	system("pause");

	return 0;
}