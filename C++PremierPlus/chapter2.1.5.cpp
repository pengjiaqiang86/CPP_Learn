#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;


int main215() {
	
	// 1. cout 錐業、野割
	//cout.precision(5);
	//cout << 1.23456789 << endl; // 1.2346
    //cout.width(30);
    //cout.fill('*');
    //cout << "Hello World" << endl;

	// 2. cin
	int i;
	cout << "Input integer i: ";
	cin >> i;
	cout << i << endl;
	cout << typeid(i).name() << endl;

	string str;
	cout << "Input string str: ";
	cin >> str;
	cout << str << endl;
	cout << typeid(str).name() << endl;

    system("pause");
    return 0;
}
