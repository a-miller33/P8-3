#include <iostream>
#include <string>
using namespace std;

int romanCharValue(char r);

int main() {
	char r;
	cout << "Enter Roman number: ";
	cin >> r;
	cout << r << " = " << romanCharValue(r) << endl;

	return 0;
}

int romanCharValue(char r) {
	if (r == 'I') return 1;
	else if (r == 'V') return 5;
	else if (r == 'X') return 10;
	else if (r == 'L') return 50;
	else if (r == 'C') return 100;
	else if (r == 'D') return 500;
	else if (r == 'M') return 1000;
}