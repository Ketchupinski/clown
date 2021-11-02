#include "IntPower.h"

IntPower::IntPower() {
	this->first = 1;
	this->second = 1;
}

IntPower::IntPower(int first, int second) {
	this->first = first;
	this->second = second;
}

IntPower::IntPower(IntPower& p) {
	this->first = p.first;
	this->second = p.second;
}

IntPower::~IntPower() {
	first = 0;
	second = 0;
}

void IntPower::Read() {
	int first = 0, second = 0;
	do {
		cout << "Input first: "; cin >> first;
		cout << endl;
		cout << "Input second: "; cin >> second;
		cout << endl;
	} while (!Init(first, second));

	IntPower temp(first, second);
	this->first = temp.first;
	this->second = temp.second;
}

bool IntPower::Init(int first, int second) {
	if (first != 0) { return true; }
	else { return false; }
}

void IntPower::Display() const {
	cout << "first: " << first << endl;
	cout << "second: " << second << endl;
}

double IntPower::ToPower() {
	double result = 1;

	if (this->second < 0) { // степінь відємна
		int deg = -this->second;
		for (unsigned int i = 0; i < deg; i++) {
			result *= this->first;
		}

		return 1 / result;
	}
	else { // степінь додатня
		for (long i = 0; i < this->second; i++) {
			result *= this->first;
		}
		return result;
	}
}


