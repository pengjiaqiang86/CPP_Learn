#include <iostream>
#include <string>

using namespace std;

// ѧ��
struct Student {
	string name;
	int age;
	int score;
};

// ��ʦ
struct Teacher {
	string name;
	int age;
	struct Student stu;
};

int main04() {

	// ������ʦ����
	struct Teacher teacher = { "teacher", 30, {"student", 18, 90}};

	// ��ӡ���
	cout << teacher.name << endl;
	cout << teacher.age << endl;
	cout << teacher.stu.name << endl;
	cout << teacher.stu.age << endl;
	cout << teacher.stu.score << endl;

	system("pause");

	return 0;
}