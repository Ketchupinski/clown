#include "Complex.h"


bool Complex::Init(int x, int y) {
	this->x = x;
	this->y = y;
	return true;
}

void Complex::Read() {
	int x, y;
	do {
		cout << "Input x: "; cin >> x;
		cout << "Input y: "; cin >> y;
	} while (!Init(x, y));
}

void Complex::Display() const {
	cout << endl << "x: " << x << endl;
	cout << "y: " << y << endl;
}

Complex add(Complex& a, Complex& b) {
	Complex num;
	num.x = a.x + b.x;
	num.y = a.y + b.y;
	return num;
}

Complex mul(Complex& a, Complex& b) {
	Complex num;
	num.x = a.x * b.x - a.y * b.y;
	num.y = a.x * b.y + b.x * a.y;
	return num;
}

bool equ(Complex& a, Complex& b) {
	return ((a.x == b.x) && (a.y == b.y));
}
