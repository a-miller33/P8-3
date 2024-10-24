#include <iostream>
#include <string>
using namespace std;

int romanCharValue(char r);
int convertRomanToInt(string s);

int main() {
	string s;
	while (true) {
		cout << "Enter Roman number or Q to quit: ";
		cin >> s;
		if (s == "Q") {
			break;
		}
		cout << s << " = " << convertRomanToInt(s) << endl;
	}

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

int convertRomanToInt(string s) {
	int total = 0;
	while (s != "") {
		if (romanCharValue(s[0]) >= romanCharValue(s[1]) || s.length() == 1) {
			total += romanCharValue(s[0]);
			s.erase(0, 1);
		}
		else {
			total += (romanCharValue(s[1]) - romanCharValue(s[0]));
			s.erase(0, 2);
		}
	}
	return total;
}