#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/*
https://blog.csdn.net/qq_42292831/article/details/85240616
https://cloud.tencent.com/developer/article/1082930
https://cloud.tencent.com/developer/article/1457061
https://blog.csdn.net/LLLLQZ/article/details/110405100
https://zhuanlan.zhihu.com/p/106462562
https://www.zhihu.com/question/60968055
*/

int main10() {
	string print_char = "123";
	COORD loc;    //Ҳ����ʹ��COORD loc = {30,11};�ķ�ʽ��ֵ��ֻ�������������ڲ����Ĵ���
	int x = 30;    //���ܳ�����ʼ��Console�Ĵ�С����������Ķ�λ��Ч�������x�����ˮƽ����
	int y = 11;
	loc.X = x;
	loc.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), loc);
	cout << "AAA";
	cout << "BBB" << endl;
	cout << "CCC" << endl;    //���������x����ֱ�ӹ��㣬y����+1

	//0~15ʮ��������ʾʮ������ɫ��0��ʾ���ڣ�15��ʾ����
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); cout << print_char << endl;   //����ǰ��ɫ
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); cout << print_char << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << print_char << endl;  //����ǰ��ɫ

	system("pause");    //����Ĺ��û�б����أ�����һ��һ����

	CONSOLE_CURSOR_INFO cci;    //cci = console cursor info
	cci.dwSize = 1;   //���ĺ��(1~100),����ֱֵ��Ĭ�Ϻ��
	cci.bVisible = FALSE;    //��겻�ɼ�
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);    //����������Ϊȡ��ַ��Ҳ�������Ϊ���ã����ͬ��ԭ��һ��

	system("pause");    //����Ĺ��Ͳ�������ˣ���Ϊ�Ϸ�ָ���˹�겻��ʾ
	return 0;
}




