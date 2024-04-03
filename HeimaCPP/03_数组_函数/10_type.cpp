#include <iostream>
#include <climits>

using namespace std;

/*
1. 包含climits / limits.h，可以获得各种基本类型的最大最小值
2. sizeof操作符可以获取变量或类型的空间占用大小。作用在变量上时，可以省略括号
3. C++特有的初始化变量方式（相对C）
*/
int main(int argc, char argv[]) {
	// C++初始化变量（不同于C）
	int a(5);
	cout << a << endl;

	int b = (5);
	cout << b << endl;

	int c { 5 };
	cout << c << endl;

	int d = { 5 };
	cout << d << endl << endl;;

	// sizeof
	cout << "size of int : " << sizeof(int) << endl;
	cout << "size of int : " << sizeof(a) << endl;
	cout << "size of int : " << sizeof a << endl << endl;;

	// max
	cout << "max value : " << endl;
	cout << "char : " << CHAR_MAX << endl;
	cout << "short : " << SHRT_MAX << endl;
	cout << "int : " << INT_MAX << endl;
	cout << "long : " << LONG_MAX << endl;
	cout << "long long : " << LLONG_MAX << endl;

	system("pause");

	return 0;
}