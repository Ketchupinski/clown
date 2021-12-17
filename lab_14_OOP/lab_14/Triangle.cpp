#include "Triangle.h"

Triangle::Triangle(int a, int b, int c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

Triangle::Triangle() {
	this->a = 0;
	this->b = 0;
	this->c = 0;
}

Triangle::Triangle(Triangle& t) {
	this->a = t.a;
	this->b = t.b;
	this->c = t.c;
}

int Triangle::GetSquare() {
	if (a <= 0 || b <= 0 || c <= 0) {
		throw 1;
	}
	double p = (a + b + c) / 2;
	double t = p * (p - a) * (p - b) * (p - c);
	return sqrt(t);
}

int Triangle::GetSquare1() throw() {
	if (a <= 0 || b <= 0 || c <= 0) {
		throw bad_exception();
	}
	double p = (a + b + c) / 2;
	double t = p * (p - a) * (p - b) * (p - c);
	return sqrt(t);
}

int Triangle::GetSquare2() throw(char) {
	if (a <= 0 || b <= 0 || c <= 0) {
		throw '0';
	}
	double p = (a + b + c) / 2;
	double t = p * (p - a) * (p - b) * (p - c);
	return sqrt(t);
}

int Triangle::GetSquare3() throw(int) {
	if (a <= 0 || b <= 0 || c <= 0) {
		throw 0;
	}
	double p = (a + b + c) / 2;
	double t = p * (p - a) * (p - b) * (p - c);
	return sqrt(t);
}

int Triangle::GetSquare4() throw(Error) {
	if (a == 0 || b == 0 || c == 0) {
		throw Error("one of the side is NULL!");
	}
	if (a < 0 || b < 0 || c < 0) {
		throw Error("side can't be lower than NULL!");
	}
	double p = (a + b + c) / 2;
	double t = p * (p - a) * (p - b) * (p - c);
	return sqrt(t);
}




