#include <iostream>

using namespace std;
/*
�����ά���飬��4�ַ�ʽ
1. �������� ������ [��][��];
2. �������� ������ [��][��] = {{����}, {����}, {����}};
3. �������� ������ [��][��] = {����};
4. �������� ������ [][��] = {����}; // ֻ��ȱʡ�У�����ȱ��
*/
int main01() {
	// 1
	// ����ʼ������ӡ������Ч����
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