#include <iostream>
#include <string>
using namespace std;

/*
C++�ַ���
1. ����C���Է��
	char str[] = "Hello World";
2. C++���
	string str = "Hello World";
*/
int main02() {
	// �ַ�����
	char str[] = "Hello World";
	cout << str << endl;

	// ָ��
	const char* str2 = "Test";
	cout << str2 << endl;

	// string
	string str3 = "Hello World";
	cout << str3 << endl;

	system("pause");

	return 0;
}