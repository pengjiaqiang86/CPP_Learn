#include <iostream>
#include <string>

using namespace std;

/*
����ṹ������
	struct ���� { ��Ա�б� };

�����ṹ�����͵ı���
	1. struct �ṹ������ ������;
	2. struct �ṹ������ ������ = {��Ա1����Ա2...};
	3. �ڶ���ṹ���ʱ��ʹ�������
*/

// ����
struct Student {
	string name;
	int age;
} stu3;

int main02() {
	// ��һ�ֶ��巽ʽ
	struct Student stu1;
	stu1.name = "stu0";
	stu1.age = 10;
	cout << stu1.name << endl;
	cout << stu1.age << endl;

	// �ڶ��ֶ��巽ʽ
	struct Student stu2 = {"hnu", 1926};
	cout << stu2.name << endl;
	cout << stu2.age << endl;

	// �����ֶ��巽ʽ
	cout << stu3.name << endl;
	cout << stu3.age << endl;

	// �ṹ������
	struct Student stuArr[2] = {
		{"stu4", 10},
		{"stu5", 20}
	};

	system("pause");

	return 0;
}
