#include <iostream>

using namespace std;

int main() {
	float f = 3.141592663f;

	// 默认显示6位有效数字
	cout << f << endl;

	double d = 3.141592653;

	cout << d << endl;

	// 占用空间大小
	cout << sizeof(float) << endl; // 4
	cout << sizeof(double) << endl; // 8

	float a = 2.34E22F;
	float b = a + 1.0F;
	cout << "a = " << a << endl; // 2.34E22
	cout << "b - a = " << b - a << endl; // 0

	return 0;
}