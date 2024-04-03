#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/*
1. C++�ַ���ƴ�ӣ�
	string str;
	str += "hnu"; // ������+=ƴ���ַ���

2. ���������
	����ctimeͷ�ļ���#include <ctime>
	����������ӣ�srand((unsigned int) time(NULL));
	�����������rand() % 101 // ����0-100֮��������
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

	// �������
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


// ����һ����ʦ�Ľṹ�����飬��ÿ����ʦ�������г�ʼ��
void initialize(struct Teacher06 tArray[], int len) {

	for (int i = 0; i < len; i++) {
		// ����
		tArray[i].name = "Teacher_";
		tArray[i].name += (char)(65 + i % 26);
		// ѧ��
		for (int j = 0; j < 5; j++) {
			tArray[i].stu[j].name = "Student_";
			tArray[i].stu[j].name += (char)(65 + i % 26);
			tArray[i].stu[j].score = rand() % 101;
		}
	}
}
