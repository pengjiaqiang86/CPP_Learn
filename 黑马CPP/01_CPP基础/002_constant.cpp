#include <iostream>
using namespace std;

// c++�ж��峣���ķ�ʽ��
// 1. �곣��
// 2. const���εĳ���

#define DAY 7

int main02() {
	// 1. ��
	cout << DAY << endl;
	// DAY = 8; // error: ���ʽ�����ǿ��޸ĵ���ֵ

	// const
	const int MONTH = 12;
	cout << MONTH << endl;
	// MONTH = 24�� // error

	system("pause");

	return 0;
}