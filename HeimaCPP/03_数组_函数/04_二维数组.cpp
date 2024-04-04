#include <iostream>

using namespace std;
/*
定义二维数组，有4种方式
1. 数据类型 数组名 [行][列];
2. 数据类型 数组名 [行][列] = {{}, {}, {}};
3. 数据类型 数组名 [行][列] = {};
4. 数据类型 数组名 [][列] = {};
*/
void type1();
void type2();
void type3();
void type4();

int main() {
	// type1();
	// type2();
	// type3();
	type4();

	system("pause");

	return 0;
}

void type1() {
	int arr[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}

void type2() {
	int arr[2][3] = {{1, 4, 7}, {2, 5, 8}};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}

void type3() {
	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}

void type4() {
	int arr[][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}