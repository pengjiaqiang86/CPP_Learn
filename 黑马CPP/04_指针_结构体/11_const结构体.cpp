#include <iostream>
#include <string>

using namespace std;

// ѧ��
struct Student {
	string name;
	int age;
	int score;
};

// ��������
void printStudent(const struct Student*);

int main06() {
	// ��������
	struct Student stu = { "test", 30, 98 };
	printStudent(&stu);

	system("pause");

	return 0;
}

// ʹ�ô�ַ�ķ�ʽ�����Խ�ʡ�ڴ�ռ䣬���Ҳ��Ḵ�Ƴ��µı�������
void printStudent(const struct Student* stu) {
	//stu->name = "newName"; // error

	cout << stu->name  << endl;
	cout << stu->age   << endl;
	cout << stu->score << endl;
}