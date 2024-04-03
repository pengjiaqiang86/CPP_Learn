#include<iostream>
#include<string>

using namespace std;

int main() {
	// 整形
	int a;
	cout << "Input int a: " << endl;
	cin >> a;
	cout << "a = " << a << endl;
	cout << typeid(a).name() << '\n' << endl;

	// 浮点型
	float b;
	cout << "Input float b: " << '\n' << endl;
	cin >> b;
	cout << "b = " << b << endl;
	cout << typeid(b).name() << '\n' << endl;

	// 字符型
	char c;
	cout << "Input char c: " << '\n' << endl;
	cin >> c;
	cout << "c = " << c << endl;
	cout << typeid(c).name() << '\n' << endl;

	// 字符串
	string d;
	cout << "Input string d: " << endl;
	cin >> d;
	cout << "d = " << d << endl;
	cout << typeid(d).name() << endl;

	// 布尔
	bool e;
	cout << "Input bool e: " << endl;
	cin >> e;
	cout << "e = " << e << endl;
	cout << typeid(e).name() << endl;

	system("pause");

	//return 0;
	return EXIT_SUCCESS;
}