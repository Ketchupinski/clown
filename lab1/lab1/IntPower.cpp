#include "IntPower.h"


void IntPower::Read() {
	int first = 0, second = 0;
	do {
		cout << "Input first: "; cin >> first;
		cout << endl;
		cout << "Input second: "; cin >> second;
		cout << endl;
	} while (!Init(first, second));
}

bool IntPower::Init(int first, int second) {
	if (first != 0) {
		this->first = first;
		if (second > 0) {
			this->second = second;
			return true;
		}
	}
	else {
		return false;
	}
}

void IntPower::Display() const {
	cout << "first: " << first << endl;
	cout << "second: " << second << endl;
}

int IntPower::ToPower() {
	int num = this->first;
	int step = this->second;
	for (int i = 1; i < step; i++) {
		num *= this->first;
	}
	return num;
}


