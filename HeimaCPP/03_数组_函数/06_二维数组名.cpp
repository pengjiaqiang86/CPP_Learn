#include<iostream>

using namespace std;

/*
数组名：
1. 可以查看二维数组占用的内存大小
2. 可以获取数组的首地址

问题：int*转int：VS能通过编译，但是g++不行，
解决：可以将int*强制转为intptr_t，intptr_t实际上是long long
`typedef long long intptr_t`
*/
int main() {
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	// 内存大小
	cout << "占用的空间大小： " << sizeof(arr) << endl; // 24
	cout << "0行占用的空间大小： " << sizeof(arr[0]) << endl; // 12
	cout << "数组元素个数： " << sizeof(arr) / sizeof(arr[0][0]) << endl; // 6

	cout << "----------------------------" << endl;

	// 地址
	cout << "数组首地址 " << (intptr_t)arr << endl; // 12188864
	cout << "数组首地址+1 " << (intptr_t)(arr + 1) << endl; // 12188876 // +1偏移了一行

	cout << "第一行首地址 " << (intptr_t)arr[0] << endl; // 12188864
	cout << "第一行首地址+1 " << (intptr_t)(arr[0] + 1) << endl; // 12188868 // +1偏移了一个元素

	cout << "第一个元素首地址 " << (intptr_t)&arr[0][0] << endl; // 12188864
	cout << "最后一个元素首地址 " << (intptr_t)(&arr[0][0] + 6) << endl; // 12188888 // 偏移6个元素

	cout << "----------------------------" << endl;

	// 值
	cout << (long long)*arr << endl; // 12188864
	cout << (long long)*(arr + 3) << endl; // 12188900 实际偏转了3行
	cout << (long long)*(arr + 6) << endl; // 12188936 偏转了6行

	cout << (int)*arr[0] << endl; // 1
	cout << (int)*(arr[0] + 1) << endl; // 2
	cout << (int)*(arr[0] + 2) << endl; // 3

	system("pause");

	return 0;
}