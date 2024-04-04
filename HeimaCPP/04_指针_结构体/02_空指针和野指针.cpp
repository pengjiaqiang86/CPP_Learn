#include <iostream>

using namespace std;

/*
1. 空指针，一般用于给指针变量初始化，不可访问
	0~255之间的内存编号被系统占用（存储中断向量表），不可访问
2. 野指针,指针变量指向非法空间
*/
int main() {
	int* p = NULL; // 用NULL给指针初始化
	cout << p << endl; // 00000000
	//*p = 100; // 报错

	system("pause");

	return 0;
}