#include<iostream>

using namespace std;

/*
* ��������ֶ��巽ʽ
*/
int main() {
	// һ������Ķ���
	//
	// 1. ���� ������[����];
	//int arr[5];
	//for (int i = 0; i < 5; i++) {
	//	cout << arr[i] << endl; // û�г�ʼ��
	//}
	//cout << arr[6] << endl; // ����Խ�磬��������ʾ��Ч����

	// 2. ���� ������[����] = {Ԫ��0��Ԫ��1...};
	//int arr[3] = { 1, 2 }; // ��ʼ����Ԫ�ز�����������Ԫ�ر���ֵΪ0
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\t", arr[i]);
	//}
	//printf("\n");

	// 3. ���� ������[] = {Ԫ��0��Ԫ��1...};
	/*int arr[] = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;*/

	// ����������
	// 1. ͳ�������������ڴ��еĳ���
	int arr[3] = { 1, 2, 3 };
	cout << sizeof(arr) << endl; // 12
	cout << sizeof(arr[0]) << endl; // 4

	// 2. ��ȡ������׵�ַ
	cout << arr << endl; // ����00CFF918
	cout << (int)arr << endl; // תΪ10����int

	// ������arrʵ���Ͼ���������׵�ַ
	cout << arr << endl;
	cout << &arr[0] << endl;

	// ������ʵ����Ҳ��
	cout << *arr << endl; // 1
	cout << *(arr + 1) << endl; // 2
	cout << *(arr + 2) << endl; // 3

	system("pause");

	return 0;
}