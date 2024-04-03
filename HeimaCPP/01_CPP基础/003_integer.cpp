#include <iostream>

using namespace std;

int main() {
	int sizeShort = sizeof(short);
	int sizeInt = sizeof(int);
	int sizeLong = sizeof(long);
	int sizeLonglong = sizeof(long long);

	cout << sizeShort << endl; // 2
	cout << sizeInt << endl; // 4
	cout << sizeLong << endl; // 4
	cout << sizeLonglong << endl; // 8

	// 数值溢出测试
	// short 2^-15 ~ 2^15-1
	short shortOverflow = 32769;
	cout << shortOverflow << endl; // -32767

	return 0;
}
