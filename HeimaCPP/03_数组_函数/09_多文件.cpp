#include<iostream>

using namespace std;

#include "swap.h"

/*
1. 创建.h头文件
2. 创建.cpp源文件
3. 在头文件中写函数声明
4. 在源文件中写函数定义

如果是用g++运行，运行的命令是`g++ 09_多文件.cpp swap.cpp -o a.exe && a`
*/
int main() {

	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");

	return 0;
}