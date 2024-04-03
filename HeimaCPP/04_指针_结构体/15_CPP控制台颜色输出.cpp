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

int main() {
	string print_char = "123";
	COORD loc;    //也可以使用COORD loc = {30,11};的方式赋值，只不过那样不利于参数的传递
	int x = 30;    //不能超过初始的Console的大小，否者这里的定位无效，这里的x轴就是水平方向
	int y = 11;
	loc.X = x;
	loc.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), loc);
	cout << "AAA";
	cout << "BBB" << endl;
	cout << "CCC" << endl;    //换行坐标的x坐标直接归零，y坐标+1

	//0~15十六个数表示十六种颜色，0表示纯黑，15表示纯白
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0); cout << print_char << endl;   //纯黑前景色
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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); cout << print_char << endl;  //纯白前景色

	system("pause");    //这里的光标没有被隐藏，还在一闪一闪的

	CONSOLE_CURSOR_INFO cci;    //cci = console cursor info
	cci.dwSize = 1;   //光标的厚度(1~100),其余值直接默认厚度
	cci.bVisible = FALSE;    //光标不可见
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);    //这里可以理解为取地址，也可以理解为引用，概念不同但原理一致

	system("pause");    //这里的光标就不会出现了，因为上方指定了光标不显示
	return 0;
}




