#include <iostream>

using namespace std;

int main04() {

	int num[5] = {0, 1, 2, 3, 4};

	// 1. ֱ���������� - ����������������׵�ַ
	cout << *num << endl;
	cout << *(num+1) << endl;

	// 2.��ͬ��
	int* p = num;
	cout << *p <<endl;
	cout << *(p+1) <<endl;
	cout << *(p + 5) << endl; // ��Ч����

	system("pause");

	return 0;
}