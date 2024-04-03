#include <iostream>

using namespace std;
/*
定义二维数组，有4种方式
1. 数据类型 数组名 [行][列];
2. 数据类型 数组名 [行][列] = {{数据}, {数据}, {数据}};
3. 数据类型 数组名 [行][列] = {数据};
4. 数据类型 数组名 [][列] = {数据}; // 只能缺省行，不能缺列
*/
int main01() {
	// 1
	// 不初始化，打印的是无效数据
	int arr1[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr1[i][j] << '\t';
		}
		cout << endl;
	}

	// 2
	int arr2[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++) {
			cout << arr2[i][j] << '\t';
		}
		cout << endl;
	}

	// 3
	int arr3[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++) {
			cout << arr3[i][j] << '\t';
		}
		cout << endl;
	}

	// 4
	int arr4[][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++) {
			cout << arr4[i][j] << '\t';
		}
		cout << endl;
	}

	system("pause");

	return 0;
}