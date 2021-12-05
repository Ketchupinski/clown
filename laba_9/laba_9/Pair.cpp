#include "Pair.h"

Pair::Pair() {
	first = 0;
	second = 0;
}

Pair::Pair(int first, int second) {
	this->first = first;
	this->second = second;
}

Pair::~Pair() {}

void Pair::Equal(Pair p) {
	if (this->first > p.first || (this->first == p.first && this->second > p.second)) {
		cout << "Bigger" << endl;
	}
	if (p.first > this->first || (p.first == this->first && p.second > this->second)) {
		cout << "Lower" << endl;
	}
	if (p.first == this->first && this->second == p.second) {
		cout << "Same" << endl;
	}
}

void Pair::Display() {
	cout << endl;
	cout << "first: " << first << endl;
	cout << "second: " << second << endl;
	cout << endl;
}

bool Pair::operator>(Pair p) {
	if (this->first > p.first || (this->first == p.first && this->second > p.second)) {
		return true;
	}
	return false;
}

bool Pair::operator<(Pair p) {
	if (p.first > this->first || (p.first == this->first && p.second > this->second)) {
		return true;
	}
	return false;
}

bool Pair::operator==(Pair p) {
	if (p.first == this->first && this->second == p.second) {
		return true;
	}
	return false;
}

bool Pair::operator!=(Pair p) {
	if (p.first == this->first && this->second == p.second) {
		return false;
	}
	return true;
}

