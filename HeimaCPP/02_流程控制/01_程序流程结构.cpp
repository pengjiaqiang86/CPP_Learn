#include<iostream>
#include<ctime>

using namespace std;

int generateRand();

int main() {
	int a = 100;

	if (a > 10) {
		cout << "1" << endl;
	}
	else if (a > 20) {
		cout << "2" << endl;
	}
	else {
		cout << "other" << endl;
	}

	int n = generateRand();
	cout << n << endl;

	system("pause");

	return 0;
}

// 生成随机数
int generateRand() {
	srand((unsigned int)time(NULL));

	int num = rand() % 100 + 1;

	return num;
}