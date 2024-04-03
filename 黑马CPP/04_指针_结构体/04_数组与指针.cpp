#include <iostream>

using namespace std;

int main04() {

	int num[5] = {0, 1, 2, 3, 4};

	// 1. 直接用数组名 - 数组名就是数组的首地址
	cout << *num << endl;
	cout << *(num+1) << endl;

	// 2.（同理）
	int* p = num;
	cout << *p <<endl;
	cout << *(p+1) <<endl;
	cout << *(p + 5) << endl; // 无效数据

	system("pause");

	return 0;
}