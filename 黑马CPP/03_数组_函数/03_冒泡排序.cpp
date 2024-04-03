#include<iostream>

using namespace std;

int* bubbleSort(int*, int);

// Main函数
int main02() {
	int arr[5] = { 3, 2, 1, 5, 4 };
	int* arrSorted = bubbleSort(arr, 5);
	for (int i = 0; i < 5; i++) {
		cout << *(arrSorted + i) << endl;
	}

	system("pause");

	return 0;
}

// 冒泡排序，传入指针数组和数组长度
int* bubbleSort(int* arr, int length) {
	//int length = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	return arr;
}