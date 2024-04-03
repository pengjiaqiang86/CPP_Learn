#include<iostream>

using namespace std;

void bubbleSort(int *, int);

/*
指针数组与函数

案例：封装一个函数，利用冒泡排序，实现对一个整形数组进行升序排序
*/
int main() {

	// 1. 创建一个数组
	int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// 2. 创建函数，排序
	bubbleSort(arr, 10);

	// 3. 打印数组
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}

// 冒泡排序
void bubbleSort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			// 交换数据
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}