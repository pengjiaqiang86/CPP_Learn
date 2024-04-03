#include <iostream>
#include <string>

using namespace std;

/*
���һ���ṹ�壬�������������䡢�Ա�
�����ṹ�����飬�����д��5����Ա
����ð�������㷨�����������5����Ա��������
*/

// 1. �ṹ��
struct Person {
	string name;
	int age;
	string gender;
};

void bubbleSort(struct Person* pArray, int len);
void printInfo(struct Person* pArray, int len);

int main08() {
	// 2. �ṹ������
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

// �������������
void bubbleSort(struct Person* pArray, int len) {
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			// ����
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