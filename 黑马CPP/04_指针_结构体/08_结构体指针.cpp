#include <iostream>
#include <string>

using namespace std;

/*
�ṹ��ָ�� ͨ��ָ����ʽṹ������ĳ�Ա����
���ʷ�Ϊ"->"��������ʹ��"."
*/

// 1. ����ṹ��
struct Student {
	string name;
	int age;
};

int main03() {
	// 2. �������
	struct Student stu = {"hnu", 1926};
	cout << "Name: " << stu.name << '\t' << "Age: " << stu.age << endl;

	// 3. �����ṹ��ָ��
	struct Student* stuPr = &stu;

	// 4. ͨ��ָ���޸Ľṹ������е�����
	stuPr->name = "hnuPr";
	stuPr->age = 976;
	cout << "Name: " << stu.name<< '\t' << "Age: " << stu.age << endl;

	system("pause");

	return 0;
}