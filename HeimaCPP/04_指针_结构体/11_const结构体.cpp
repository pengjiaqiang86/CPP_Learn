#include <iostream>
#include <string>

using namespace std;

// 学生
struct Student {
	string name;
	int age;
	int score;
};

// 函数声明
void printStudent(const struct Student*);

int main() {
	// 创建变量
	struct Student stu = { "test", 30, 98 };
	printStudent(&stu);

	system("pause");

	return 0;
}

// 使用传址的方式，可以节省内存空间，而且不会复制出新的变量副本
void printStudent(const struct Student* stu) {
	//stu->name = "newName"; // error

	cout << stu->name  << endl;
	cout << stu->age   << endl;
	cout << stu->score << endl;
}