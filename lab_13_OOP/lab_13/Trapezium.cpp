#include "Trapezium.h"

Trapezium::Trapezium() : Figure() {
	this->a = 0;
	this->b = 0;
	this->c = 0;
}

Trapezium::Trapezium(int a, int b, int c, int x) : Figure(x) {
	if (a > 0 && b > 0 && c > 0) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	else {
		cout << "Wrong arguments given!" << endl;
	}
}

Trapezium::Trapezium(Trapezium& t) : Figure(t) {
	this->a = t.a;
	this->b = t.b;
	this->c = t.c;
}

Trapezium::~Trapezium() { }

int Trapezium::Square() {
	return (b + GetX()) / 2.0 * (sqrt(a * a - (GetX() - b) / 2.0 * (GetX() - b) / 2.0));
}

int Trapezium::Perimeter() {
	return a + b + c + GetX();
}