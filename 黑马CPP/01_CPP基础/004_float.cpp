#include <iostream>

using namespace std;

int main04() {
	float f = 3.141592663f;

	// Ĭ����ʾ6λ��Ч����
	cout << f << endl;

	double d = 3.141592653;

	cout << d << endl;

	// ռ�ÿռ��С
	cout << sizeof(float) << endl; // 4
	cout << sizeof(double) << endl; // 8

	float a = 2.34E22F;
	float b = a + 1.0F;
	cout << "a = " << a << endl; // 2.34E22
	cout << "b - a = " << b - a << endl; // 0

	return 0;
}