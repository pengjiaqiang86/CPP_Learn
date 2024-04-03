#include <iostream>

using namespace std;
/*
定义二维数组，有4种方式
1. 数据类型 数组名 [行][列];
2. 数据类型 数组名 [行][列] = {{}, {}, {}};
3. 数据类型 数组名 [行][列] = {};
4. 数据类型 数组名 [行][列] = {};
*/
int main() {
	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

	system("pause");

	return 0;
}