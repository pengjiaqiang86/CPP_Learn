#include <iostream>
#include <string>
#include <windows.h>

#ifndef MAX
#define MAX 100
#endif // !MAX

using namespace std;

/*
ͨѶ¼����ϵͳ��
	1. ���
	2. ��ʾ��Ϣ
	3. ɾ��
	4. ����
	5. �޸�
	6. ���
	0. �˳�
*/

// ��������
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
	// Person����
	struct Person pArray[MAX];
	// ��ʵ����
	int size = 0;
	// ѡ���ֵ
	int select;

	do {
		showMenu();

		cout << "��ѡ��";
		// ��ֵ��select
		cin >> select;

		switch (select) {
			case 0 : // �˳�
				cout << "�˳�ϵͳ����ӭ�´�ʹ�ã�" << endl;
				system("pause");
				system("cls");
				exit(0);
			case 1: // ���
			{
				int flag = addPerson(pArray, size);
				if (flag == 0) {
					cout << "��ӳɹ���" << endl;
					size++;
				}
				else if (flag == -1) {
					cout << "ͨѶ¼������" << endl;
				}
				else if (flag == -2) {
					cout << "��Ա�Ѿ�����" << endl;
				}

				system("pause");
				system("cls");
				break;
			};
			case 2:  // ���
			{
				if (size == 0) {
					cout << "��ǰͨѶ¼Ϊ��" << endl;
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
			case 3: // ɾ��
			{
				int flag = deletePerson(pArray, size);
				if (flag == 1) {
					size--;
					cout << "ɾ���ɹ���" << endl;
				}
				else {
					cout << "���޴���" << endl;
				}
				system("pause");
				system("cls");
				break;
			}
			case 4: // 4. ����
			{
				int pos = findPerson(pArray, size);
				if (pos != -1) {
					printPerson(pArray[pos]);
				}
				else {
					cout << "���޴���" << endl;
				}
				system("pause");
				system("cls");
				break;
			}
			case 5: // 5. �޸�
			{
				int ret = modifyPerson(pArray, size);
				if (ret == -1) {
					cout << "���޴��ˣ�" << endl;
				}
				else {
					cout << "�޸ĳɹ�������ϢΪ��" << endl;
					printPerson(pArray[ret]);
				}
				system("pause");
				system("cls");
				break;
			}
			case 6: // 6. ���
			{
				size = 0;
				cout << "ͨѶ¼�Ѿ���գ�" << endl;
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


// ��ʾ�˵�
void showMenu() {
	COLOR_PRINT("***************************\n", 7, 0);
	COLOR_PRINT("********** 1. ��� ********\n", 2, 0);
	COLOR_PRINT("********** 2. ��ʾ ********\n", 7, 0);
	COLOR_PRINT("********** 3. ɾ�� ********\n", 4, 0);
	COLOR_PRINT("********** 4. ���� ********\n", 1, 0);
	COLOR_PRINT("********** 5. �޸� ********\n", 1, 0);
	COLOR_PRINT("********** 6. ��� ********\n", 4, 0);
	COLOR_PRINT("********** 0. �˳� ********\n", 1, 0);
	COLOR_PRINT("***************************\n", 7, 0);
}

// ��ӡ��Ա��Ϣ
void printPerson(struct Person p) {
	cout << "ID: " << p.id << "\t\t\t";
	cout << "Name: " << p.name << "\t\t\t";
	cout << "Gender: " << (p.gender == Gender::male ? "Male" : "Female") << "\t\t\t";
	cout << "Tel: " << p.tel << "\t\t\t";
	cout << "Address: " << p.address << endl;
}

// �����Ա
// û�м���ظ�ֵ
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

// �ж��Ƿ����
int isExist(struct Person* pArray, int size, int id) {
	for (int i = 0; i < size; i++) {
		if (pArray[i].id == id) return i;
	}
	return -1;
}

// ɾ����Ա
int deletePerson(struct Person* pArray, int size) {
	cout << "��������Ҫɾ�����û�id: ";

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

// ����
int findPerson(struct Person* pArray, int size) {
	cout << "������Ҫ���ҵ���ϵ�ˣ�Name����";
	string name;
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (pArray[i].name == name) return i;
	}
	return -1;
}

// �޸�
int modifyPerson(struct Person* pArray, int size) {
	cout << "��������Ҫ�޸ĵ���ϵ�˵�ID��";
	int id;
	cin >> id;

	int ret = isExist(pArray, size, id);
	if (ret == -1) {
		return -1;
	}
	else {
		cout << "ԭ����Ϣ��" << endl;
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
0 = ��ɫ 8 = ��ɫ
1 = ��ɫ 9 = ����ɫ
2 = ��ɫ 10 = ����ɫ
3 = ǳ��ɫ 11 = ��ǳ��ɫ
4 = ��ɫ 12 = ����ɫ
5 = ��ɫ 13 = ����ɫ
6 = ��ɫ 14 = ����ɫ
7 = ��ɫ 15 = ����ɫ
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