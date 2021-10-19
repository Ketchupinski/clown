#include "Rectangle.h"

bool Rectangle::Init(int h, int w) {
	if (h > 0 && w > 0) {
		this->h = h;
		this->w = w;
		return true;
	}
	else {
		return false;
	}
}

void Rectangle::Read() {
	int h = 0, w = 0;
	do {
		cout << "Please, input h: "; cin >> h;
		cout << endl;
		cout << "Please, input w: "; cin >> w;
		cout << endl;
	} while (!Init(h, w));
}

void Rectangle::Display() const {
	cout << endl << "High: " << this->h << endl;
	cout << endl << "Wight: " << this->w << endl;
}

int getPerimeter(Rectangle r) {
	return (r.h + r.h + r.w + r.w);
}

int getArea(Rectangle r) {
	return (r.h * r.w);
}