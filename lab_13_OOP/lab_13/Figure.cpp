#include "Figure.h"

void Figure::SetX(int x) {
	if (x > 0) {
		this->x = x;
	}
	else {
		cout << "Wrong argument!" << endl;
	}
}

Figure::Figure() {
	this->x = x;
}

Figure::Figure(int x) {
	if (x > 0) {
		this->x = x;
	}
	else {
		cout << "Wrong argument!" << endl;
	}
}

Figure::Figure(Figure& f) {
	this->x = f.x;
}

Figure::~Figure() { }

