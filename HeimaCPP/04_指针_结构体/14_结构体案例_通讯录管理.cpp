#include <iostream>
#include <string>
#include <windows.h>

#ifndef MAX
#define MAX 100
#endif // !MAX

using namespace std;

/*
通讯录管理系统：
	1. 添加
	2. 显示信息
	3. 删除
	4. 查找
	5. 修改
	6. 清空
	0. 退出
*/

// 函数声明
void showMenu();
void printPerson(struct Person);
int addPerson(struct Person*, int);
int isExist(struct Person*, int, int);
int deletePerson(struct Person*, int);
int findPerson(struct Person*, int);
int modifyPerson(struct Person*, int);
void COLOR_PRINT(const char*, int, int);
void print_256_colours_txt();
void print_256_colours_background();

enum class Gender {
	male = 0,
	female = 1
};

struct Person {
	int id = 0;
	string name;
	Gender gender = Gender::male;
	string tel;
	string address;
};

int main() {
	// Person数组
	struct Person pArray[MAX];
	// 真实数量
	int size = 0;
	// 选择的值
	int select;

	do {
		showMenu();

		cout << "请选择：";
		// 赋值给select
		cin >> select;

		switch (select) {
			case 0 : // 退出
				cout << "退出系统，欢迎下次使用！" << endl;
				system("pause");
				system("cls");
				exit(0);
			case 1: // 添加
			{
				int flag = addPerson(pArray, size);
				if (flag == 0) {
					cout << "添加成功！" << endl;
					size++;
				}
				else if (flag == -1) {
					cout << "通讯录已满！" << endl;
				}
				else if (flag == -2) {
					cout << "人员已经存在" << endl;
				}

				system("pause");
				system("cls");
				break;
			};
			case 2:  // 输出
			{
				if (size == 0) {
					cout << "当前通讯录为空" << endl;
				}
				else {
					for (int i = 0; i < size; i++) {
						printPerson(pArray[i]);
					}
				}
				system("pause");
				system("cls");
				break;
			}
			case 3: // 删除
			{
				int flag = deletePerson(pArray, size);
				if (flag == 1) {
					size--;
					cout << "删除成功！" << endl;
				}
				else {
					cout << "查无此人" << endl;
				}
				system("pause");
				system("cls");
				break;
			}
			case 4: // 4. 查找
			{
				int pos = findPerson(pArray, size);
				if (pos != -1) {
					printPerson(pArray[pos]);
				}
				else {
					cout << "查无此人" << endl;
				}
				system("pause");
				system("cls");
				break;
			}
			case 5: // 5. 修改
			{
				int ret = modifyPerson(pArray, size);
				if (ret == -1) {
					cout << "查无此人！" << endl;
				}
				else {
					cout << "修改成功，新信息为：" << endl;
					printPerson(pArray[ret]);
				}
				system("pause");
				system("cls");
				break;
			}
			case 6: // 6. 清空
			{
				size = 0;
				cout << "通讯录已经清空！" << endl;
				system("pause");
				system("cls");
				break;
			}
			default:
				continue;
		}
		
	} while (select != 0);

	system("pause");

	return 0;
}


// 显示菜单
void showMenu() {
	COLOR_PRINT("***************************\n", 7, 0);
	COLOR_PRINT("********** 1. 添加 ********\n", 2, 0);
	COLOR_PRINT("********** 2. 显示 ********\n", 7, 0);
	COLOR_PRINT("********** 3. 删除 ********\n", 4, 0);
	COLOR_PRINT("********** 4. 查找 ********\n", 1, 0);
	COLOR_PRINT("********** 5. 修改 ********\n", 1, 0);
	COLOR_PRINT("********** 6. 清空 ********\n", 4, 0);
	COLOR_PRINT("********** 0. 退出 ********\n", 1, 0);
	COLOR_PRINT("***************************\n", 7, 0);
}

// 打印人员信息
void printPerson(struct Person p) {
	cout << "ID: " << p.id << "\t\t\t";
	cout << "Name: " << p.name << "\t\t\t";
	cout << "Gender: " << (p.gender == Gender::male ? "Male" : "Female") << "\t\t\t";
	cout << "Tel: " << p.tel << "\t\t\t";
	cout << "Address: " << p.address << endl;
}

// 添加人员
// 没有检查重复值
int addPerson(struct Person* pArray, int size) {

	if (size == MAX) {
		return -1;
	}

	pArray[size] = {0, "", Gender::male, "", ""};
	
	// id
	int id;
	cout << "Input id: ";
	cin >> id;

	for (int i = 0; i < size; i++) {
		if (pArray[i].id == id) return -2;
	}

	pArray[size].id = id;

	cin.clear();

	// name
	string name;
	cout << "Input name: ";
	cin >> name;
	pArray[size].name = name;

	cin.clear();

	char gender;
	cout << "Input gender ('M'/'F'): ";
	cin >> gender;
	while (gender != 'M' && gender != 'F') {
		cout << "Invalid input, input again." << endl;
		cout << "Input gender ('M'/'F'): ";
		cin >> gender;
	}
	pArray[size].gender = (gender == 'M' ? Gender::female : Gender::female);

	cin.clear();

	string tel;
	cout << "Input tel: ";
	cin >> tel;
	pArray[size].tel = tel;

	cin.clear();

	string address;
	cout << "Input address: ";
	cin >> address;
	pArray[size].address = address;

	return 0;
}

// 判断是否存在
int isExist(struct Person* pArray, int size, int id) {
	for (int i = 0; i < size; i++) {
		if (pArray[i].id == id) return i;
	}
	return -1;
}

// 删除人员
int deletePerson(struct Person* pArray, int size) {
	cout << "请输入需要删除的用户id: ";

	int id;
	cin >> id;

	int flag = isExist(pArray, size, id);
	if (flag >= 0) {
		for (int i = flag; i < size; i++){
			pArray[i] = pArray[i + 1];
		}
		return 1;
	}
	else {
		return 0;
	}

	return 0;
}

// 查找
int findPerson(struct Person* pArray, int size) {
	cout << "输入需要查找的联系人（Name）：";
	string name;
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (pArray[i].name == name) return i;
	}
	return -1;
}

// 修改
int modifyPerson(struct Person* pArray, int size) {
	cout << "请输入需要修改的联系人的ID：";
	int id;
	cin >> id;

	int ret = isExist(pArray, size, id);
	if (ret == -1) {
		return -1;
	}
	else {
		cout << "原有信息：" << endl;
		printPerson(pArray[ret]);

		cout << "New Name: ";
		string name;
		cin >> name;
		pArray[ret].name = name;

		cout << "New Tel: ";
		string tel;
		cin >> tel;
		pArray[ret].tel = tel;

		cout << "New Address: ";
		string address;
		cin >> address;
		pArray[ret].address = address;
	}
	return id;
}


/*
0 = 黑色 8 = 灰色
1 = 蓝色 9 = 淡蓝色
2 = 绿色 10 = 淡绿色
3 = 浅绿色 11 = 淡浅绿色
4 = 红色 12 = 淡红色
5 = 紫色 13 = 淡紫色
6 = 黄色 14 = 淡黄色
7 = 白色 15 = 亮白色
*/
void COLOR_PRINT(const char* s, int front_color, int back_color) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, BACKGROUND_INTENSITY | back_color * 16 | FOREGROUND_INTENSITY | front_color);
	printf(s);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}

void print_256_colours_txt() {
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0 && i != 0)
			cout << endl;
		printf("\033[38;5;%dm %3d\033[m", i, i);
	}
}

void print_256_colours_background() {
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0 && i != 0)
			cout << endl;
		printf("\033[48;5;%dm %3d\033[m", i, i);
	}
}