#include <iostream>

using namespace std;

void swap(int, int);
void swapPr(int*, int*);

int main() {
	int a = 10;
	int b = 20;

	swapPr(&a, &b);

	cout << a << endl;
	cout << b << endl;

	system("pause");

	return 0;
}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapPr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}