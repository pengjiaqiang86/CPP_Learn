#include<iostream>

using namespace std;

// ��������
void findMax();
void inverseArr();

// Main����
int main01() {
	//findMax();

	inverseArr();

	system("pause");

	return 0;
}

// --------------------------------------------------

// �ҳ������е����ֵ
void findMax() {
	int arr[5] = { 300, 350, 200, 400, 250 };

	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] >= max) max = arr[i];
	}
	cout << max << endl;
}

void inverseArr() {
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