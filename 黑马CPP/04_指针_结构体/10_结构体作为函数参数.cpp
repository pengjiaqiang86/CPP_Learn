#include <iostream>
#include <string>

using namespace std;

// 函数声明
//void printStudent(struct Student);
//void printStudent(struct Student*); // 函数重载

// 学生
struct Student {
	string name;
	int age;
	int score;
};

int main05() {
	// 创建变量
	struct Student stu = { "😁", 30, 98 };

	//printStudent(stu);
	//printStudent(&stu);

	system("pause");

	return 0;
}

// 传值
//void printStudent(struct Student stu) {
//	cout << "Name: "  << stu.name  << endl;
//	cout << "Age: "   << stu.age   << endl;
//	cout << "Score: " << stu.score << endl;
//}

// 传址
//void printStudent(struct Student* stu) {
//	cout << "Name: " << stu->name << endl;
//	cout << "Age: " << stu->age << endl;
//	cout << "Score: " << stu->score << endl;
//}