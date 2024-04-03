#include<iostream>

using namespace std;

int main03() {
	int scores[3][4] = {
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};

	for (int p = 0; p < 3; p++) {
		int count = 0;
		for (int g = 0; g < 3; g++) {
			count += scores[p][g];
		}
		cout << p << " th student's grade is: " << count << endl;
	}

	system("pause");

	return 0;
}