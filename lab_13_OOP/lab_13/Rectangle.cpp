#include "Rectangle.h"

void Rectangle::SetWidth(int width) {
	if (width > 0) {
		this->width = width;
	}
	else {
		cout << "Wrong arguments" << endl;
	}
}

Rectangle::Rectangle() : Figure() {
	width = 0;
}

Rectangle::Rectangle(int h, int w) : Figure(h) {
	if (w > 0) {
		this->width = w;
	}
	else {
		cout << "Wrong arguments" << endl;
 	}
}

Rectangle::Rectangle(Rectangle& r) : Figure(r) {
	this->width = r.width;
}

Rectangle::~Rectangle() { }

int Rectangle::Perimeter() {
	return 2 * (GetX() + width);
}

int Rectangle::Square() {
	return GetX() * width;
}