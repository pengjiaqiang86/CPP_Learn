#include<iostream>

using namespace std;

int main01() {
	cout << "1" << endl;
	cout << "2" << endl;

	goto FLAG;

	cout << "3" << endl;

FLAG:
	cout << "GOTO" << endl;

	system("pause");

	return 0;
}