#include<iostream>
using namespace std;

int main04() {
	/*cout << 10 % 3 << endl;
	cout << (-10) % 3 << endl;
	cout << 10 % (-3) << endl;
	cout << (-10) % (-3) << endl;*/

	int a = 10;
	int b = 10;

	cout << (a++ || b++) << endl; // ¶ÌÂ·
	cout << a << endl;
	cout << b << endl;

	int c = 1;
	int d = 1;

	cout << (--c && --d) << endl; // ¶ÌÂ·
	cout << c << endl; // 0
	cout << d << endl; // 1

	system("pause");

	return 0;
}