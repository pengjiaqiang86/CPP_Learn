#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/*
1. C++字符串拼接：
	string str;
	str += "hnu"; // 可以用+=拼接字符串

2. 生成随机数
	包含ctime头文件：#include <ctime>
	生成随机种子：srand((unsigned int) time(NULL));
	生成随机数：rand() % 101 // 生成0-100之间的随机数
*/

struct Student06 {
	string name;
	int score;
};

struct Teacher06 {
	string name;
	struct Student06 stu[5];
};

void initialize(struct Teacher06[], int);

int main07() {

	// 随机种子
	srand((unsigned int)time(NULL));

	struct Teacher06 tArray[3];
	initialize(tArray, 3);

	for (int i = 0; i < 3; i++) {
		cout << tArray[i].name << endl;

		for (int j = 0; j < 5; j++) {
			cout << '\t' << tArray[i].stu[j].name << '\t'
				 << tArray[i].stu[j].score << endl;
		}
	}

	system("pause");

	return 0;
}


// 传入一个教师的结构体数组，对每个教师变量进行初始化
void initialize(struct Teacher06 tArray[], int len) {

	for (int i = 0; i < len; i++) {
		// 姓名
		tArray[i].name = "Teacher_";
		tArray[i].name += (char)(65 + i % 26);
		// 学生
		for (int j = 0; j < 5; j++) {
			tArray[i].stu[j].name = "Student_";
			tArray[i].stu[j].name += (char)(65 + i % 26);
			tArray[i].stu[j].score = rand() % 101;
		}
	}
}
