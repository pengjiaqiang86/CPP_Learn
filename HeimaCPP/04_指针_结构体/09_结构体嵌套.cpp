#include <iostream>
#include <string>

using namespace std;

// 学生
struct Student {
	string name;
	int age;
	int score;
};

// 教师
struct Teacher {
	string name;
	int age;
	struct Student stu;
};

int main() {

	// 创建教师变量
	struct Teacher teacher = { "teacher", 30, {"student", 18, 90}};

	// 打印输出
	cout << teacher.name << endl;
	cout << teacher.age << endl;
	cout << teacher.stu.name << endl;
	cout << teacher.stu.age << endl;
	cout << teacher.stu.score << endl;

	system("pause");

	return 0;
}