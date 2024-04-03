#include<iostream>

using namespace std;

/*
* 数组的三种定义方式
*/
int main() {
	// 一、数组的定义
	//
	// 1. 类型 数组名[长度];
	//int arr[5];
	//for (int i = 0; i < 5; i++) {
	//	cout << arr[i] << endl; // 没有初始化
	//}
	//cout << arr[6] << endl; // 索引越界，不报错，显示无效数据

	// 2. 类型 数组名[长度] = {元素0，元素1...};
	//int arr[3] = { 1, 2 }; // 初始化的元素不够，第三个元素被赋值为0
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\t", arr[i]);
	//}
	//printf("\n");

	// 3. 类型 数组名[] = {元素0，元素1...};
	/*int arr[] = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << '\t';
	}
	cout << endl;*/

	// 二、数组名
	// 1. 统计整个数组在内存中的长度
	int arr[3] = { 1, 2, 3 };
	cout << sizeof(arr) << endl; // 12
	cout << sizeof(arr[0]) << endl; // 4

	// 2. 获取数组的首地址
	cout << arr << endl; // 例：00CFF918
	cout << (int)arr << endl; // 转为10进制int

	// 数组名arr实际上就是数组的首地址
	cout << arr << endl;
	cout << &arr[0] << endl;

	// 数组名实际上也是
	cout << *arr << endl; // 1
	cout << *(arr + 1) << endl; // 2
	cout << *(arr + 2) << endl; // 3

	system("pause");

	return 0;
}