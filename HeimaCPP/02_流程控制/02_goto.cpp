#include<iostream>

using namespace std;

int main() {
	cout << "1" << endl;
	cout << "2" << endl;

	goto FLAG;

	cout << "3" << endl;

FLAG:
	cout << "GOTO" << endl;

	system("pause");

	return 0;
}