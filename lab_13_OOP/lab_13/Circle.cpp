#include "Circle.h"

Circle::Circle() : Figure() { }

Circle::Circle(int r) : Figure(r) { }

Circle::Circle(Circle& c) : Figure(c) { }

Circle::~Circle() { }

int Circle::Perimeter() {
	return (2 * GetX() * 3.14);
}

int Circle::Square() {
	return (3.14 * pow(GetX(), 2));
}

