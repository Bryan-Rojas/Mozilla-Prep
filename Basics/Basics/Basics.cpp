#include <iostream>
#include <string>
#include <vector>
#include "InfInt.h"

using namespace std;

void nthFibBottomUp(int n);

int main() {
	int num1 = 14;
	double num2 = 13.13131313;
	char char1 = 'c';
	string word = "Bryan Rojas";
	float PI = 3.14;

	cout << "Hi Bryan!" << endl;

	cout << "Enter a number dude: " << endl;

	cin >> num1;

	cout << num1 << endl;

	if (num1 == 5) {
		cout << "Number is five, you win!!\n";
	}
	else {
		cout << "Number is ";
	}

	switch (num1) {
		case 1: cout << "one\n"; break;
		case 2: cout << "two\n"; break;
		default: cout << "idk\n"; break;
	}

	for (int i = 0; i < 100; i++) {
		nthFibBottomUp(i);
	}

	system("pause");
}

void nthFibBottomUp(int n) {
	vector<InfInt> f;

	f.push_back(0);
	f.push_back(1);

	for (int i = 2; i <= n; i++) {
		f.push_back(f.at(i - 1) + f.at(i - 2));
	}


	cout << f.at(n) << endl;
}