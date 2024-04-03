#include <iostream>
#include <climits>

using namespace std;

/*
1. ����climits / limits.h�����Ի�ø��ֻ������͵������Сֵ
2. sizeof���������Ի�ȡ���������͵Ŀռ�ռ�ô�С�������ڱ�����ʱ������ʡ������
3. C++���еĳ�ʼ��������ʽ�����C��
*/
int main(int argc, char argv[]) {
	// C++��ʼ����������ͬ��C��
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