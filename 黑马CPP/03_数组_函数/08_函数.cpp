#include<iostream>

using namespace std;

// ���ﲻ��Ҫ����max�Ĵ����ˣ�
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