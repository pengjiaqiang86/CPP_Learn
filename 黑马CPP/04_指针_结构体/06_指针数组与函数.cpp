#include<iostream>

using namespace std;

void bubbleSort(int *, int);

/*
ָ�������뺯��

��������װһ������������ð������ʵ�ֶ�һ���������������������
*/
int main01() {

	// 1. ����һ������
	int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// 2. ��������������
	bubbleSort(arr, 10);

	// 3. ��ӡ����
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}

// ð������
void bubbleSort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			// ��������
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}