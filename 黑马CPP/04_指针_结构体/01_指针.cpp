#include <iostream>

using namespace std;

struct Student {
	int age;
	char name[10];
};


/*
1. ����ָ�����
2. ָ�������
3. ָ�����ռ�õ��ڴ�ռ䣨64λ����ϵͳ��ȫ��ռ8�ֽڣ�64λ��
*/
int main01() {

	// ����ָ��
	int a = 10;
	int* p = &a;

	cout << (int)p << endl;
	cout << p << endl;

	// ����
	int** pp = &p;
	cout << pp << endl;

	int*** ppp = &pp;
	cout << ppp << endl;

	// ָ��ռ�õ��ڴ�ռ��С
	// ��32λ����ϵͳ�£�x86����ռ4���ֽ�
	// ��64λ����ϵͳ�£�x64����ռ8���ֽ�
	cout << "sizeof p = " << sizeof p << endl; // 8
	cout << "sizeof pp = " << sizeof pp << endl; // 8
	cout << "sizeof pp = " << sizeof ppp << endl; // 8

	char c = 'c';
	char* pc = &c;
	cout << "sizeof pc = " << sizeof pc << endl; // 8

	cout << "sizeof struct Student = " << sizeof(Student *) << endl; // 8

	system("pause");

	return 0;
}

