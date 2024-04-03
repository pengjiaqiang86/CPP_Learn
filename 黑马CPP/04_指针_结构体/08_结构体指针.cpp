#include <iostream>
#include <string>

using namespace std;

/*
结构体指针 通过指针访问结构体变量的成员属性
访问符为"->"，不允许使用"."
*/

// 1. 定义结构体
struct Student {
	string name;
	int age;
};

int main03() {
	// 2. 定义变量
	struct Student stu = {"hnu", 1926};
	cout << "Name: " << stu.name << '\t' << "Age: " << stu.age << endl;

	// 3. 创建结构体指针
	struct Student* stuPr = &stu;

	// 4. 通过指针修改结构体变量中的数据
	stuPr->name = "hnuPr";
	stuPr->age = 976;
	cout << "Name: " << stu.name<< '\t' << "Age: " << stu.age << endl;

	system("pause");

	return 0;
}