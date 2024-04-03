#include <iostream>
#include <string>

using namespace std;

/*
设计一个结构体，包括姓名、年龄、性别
创建结构体数组，数组中存放5个成员
利用冒泡排序算法，根据年龄对5个成员进行排序
*/

// 1. 结构体
struct Person {
	string name;
	int age;
	string gender;
};

void bubbleSort(struct Person* pArray, int len);
void printInfo(struct Person* pArray, int len);

int main08() {
	// 2. 结构体数组
	struct Person pArray[5];
	pArray[0] = {"A", 23, "M"};
	pArray[1] = {"B", 22, "M"};
	pArray[2] = {"C", 20, "M"};
	pArray[3] = {"D", 21, "M"};
	pArray[4] = {"E", 19, "F"};

	printInfo(pArray, 5);

	bubbleSort(pArray, 5);

	cout << endl;
	printInfo(pArray, 5);

	system("pause");

	return 0;
}

// 对数组进行排序
void bubbleSort(struct Person* pArray, int len) {
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			// 交换
			if (pArray[j].age > pArray[j + 1].age) {
				struct Person temp = pArray[j];
				pArray[j] = pArray[j + 1];
				pArray[j + 1] = temp;
				
			}
		}
	}
}

void printInfo(struct Person* pArray, int len) {
	for (int i = 0; i < len; i++) {
		cout << "Name: "   << pArray[i].name << "\t"
			 << "Age: "    << pArray[i].age << "\t"
			 << "Gander: " << pArray[i].gender << endl;
	}
}