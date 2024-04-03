#include<iostream>

using namespace std;

/*
��������
1. ���Բ鿴��ά����ռ�õ��ڴ��С
2. ���Ի�ȡ������׵�ַ
*/
int main02() {
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	// �ڴ��С
	cout << "ռ�õĿռ��С�� " << sizeof(arr) << endl; // 24
	cout << "0��ռ�õĿռ��С�� " << sizeof(arr[0]) << endl; // 12
	cout << "����Ԫ�ظ����� " << sizeof(arr) / sizeof(arr[0][0]) << endl; // 6

	cout << "----------------------------" << endl;

	// ��ַ
	cout << "�����׵�ַ " << (int)arr << endl; // 12188864
	cout << "�����׵�ַ+1 " << (int)(arr + 1) << endl; // 12188876 // +1ƫ����һ��

	cout << "��һ���׵�ַ " << (int)arr[0] << endl; // 12188864
	cout << "��һ���׵�ַ+1 " << (int)(arr[0] + 1) << endl; // 12188868 // +1ƫ����һ��Ԫ��

	cout << "��һ��Ԫ���׵�ַ " << (int)&arr[0][0] << endl; // 12188864
	cout << "���һ��Ԫ���׵�ַ " << (int)(&arr[0][0] + 6) << endl; // 12188888 // ƫ��6��Ԫ��

	cout << "----------------------------" << endl;

	// ֵ
	cout << (int)*arr << endl; // 12188864
	cout << (int)*(arr + 3) << endl; // 12188900 ʵ��ƫת��3��
	cout << (int)*(arr + 6) << endl; // 12188936 ƫת��6��

	cout << (int)*arr[0] << endl; // 1
	cout << (int)*(arr[0] + 1) << endl; // 2
	cout << (int)*(arr[0] + 2) << endl; // 3

	system("pause");

	return 0;
}