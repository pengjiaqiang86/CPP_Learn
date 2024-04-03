#include <iostream>
using namespace std;

double example2(double);
int example4(int);
void example7(int, int);


int main() {

	int hour;
	int minute;

	cout << "Input hour: " << endl;
	cin >> hour;
	cout << "Input minute: " << endl;
	cin >> minute;
	example7(hour, minute);

	system("pause");

	return 0;
}

double example2(double dist) {
	return 220.0 * dist;
}

int example4(int year) {
	return 12 * year;
}

void example7(int hour, int minute) {
	cout << hour << " : " << minute << endl;
}