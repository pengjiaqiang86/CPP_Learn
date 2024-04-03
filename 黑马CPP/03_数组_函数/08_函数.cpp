#include<iostream>

using namespace std;

// 这里不需要声明max的存在了？
int main04() {
	
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

int max(int a, int b) {
	return (a > b ? a : b);
}