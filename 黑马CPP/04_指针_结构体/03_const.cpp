#include <iostream>

using namespace std;

/*
2023��12��29��13:37:10

1. const����ָ�� - ����ָ��
   ָ���ָ������޸ģ�����ָ��ָ���ֵ�����޸�
2. const���α��� - ָ�볣��
   ָ��ָ���ֵ�����޸ģ�����ָ���ָ�����޸�
3. ������ָ�������γ���
   ���������޸�
*/
int main03() {

	// 1. ����ָ��
	int a = 10;
	int b = 10;
	const int* p = &a;

	cout << a << endl;
	cout << b << endl;
	cout << p << endl;

	// p = &b;
	// *p = 20; // error

	cout << a << endl;
	cout << b << endl;
	cout << p << endl;

	// 2. ָ�볣��
	cout << "=============" << endl;

	int aa = 10;
	int bb = 10;
	int* const pp = &aa;

	cout << aa << endl;
	cout << bb << endl;
	cout << pp << endl;

	 //pp = &b; // error
	 *pp = 20;

	cout << aa << endl;
	cout << bb << endl;
	cout << pp << endl;

	// 3. ����
	cout << "=============" << endl;

	int aaa = 10;
	int bbb = 10;
	const int* const ppp = &aa;

	cout << aaa << endl;
	cout << bbb << endl;
	cout << ppp << endl;

	// ppp = &bbb; // error
	// *ppp = 20; // error

	cout << aaa << endl;
	cout << bbb << endl;
	cout << ppp << endl;

	system("pause");

	return 0;
}