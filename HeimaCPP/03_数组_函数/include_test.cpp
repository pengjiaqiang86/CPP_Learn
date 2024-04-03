#include<iostream>

using namespace std;

// 找出数组中的最大值
void findMax2() {
	int arr[5] = { 300, 350, 200, 400, 250 };

	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] >= max) max = arr[i];
	}
	cout << max << endl;
}

void inverseArr2() {
	int arr[5] = { 300, 350, 200, 400, 250 };

	int temp = 0;
	for (int i = 0; i < 2; i++) {
		temp = arr[i];
		arr[i] = arr[4 - i];
		arr[4 - i] = temp;
	}

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
}