#include <iostream>
#include <string>

using namespace std;

/*
定义结构体类型
	struct 名字 { 成员列表 };

创建结构体类型的变量
	1. struct 结构体类型 变量名;
	2. struct 结构体类型 变量名 = {成员1，成员2...};
	3. 在定义结构体的时候就创建变量
*/

// 声明
struct Student {
	string name;
	int age;
} stu3;

int main02() {
	// 第一种定义方式
	struct Student stu1;
	stu1.name = "stu0";
	stu1.age = 10;
	cout << stu1.name << endl;
	cout << stu1.age << endl;

	// 第二种定义方式
	struct Student stu2 = {"hnu", 1926};
	cout << stu2.name << endl;
	cout << stu2.age << endl;

	// 第三种定义方式
	cout << stu3.name << endl;
	cout << stu3.age << endl;

	// 结构体数组
	struct Student stuArr[2] = {
		{"stu4", 10},
		{"stu5", 20}
	};

	system("pause");

	return 0;
}
