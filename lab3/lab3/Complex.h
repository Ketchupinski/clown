/*
Комплексне число представляються парою дійсних чисел (x, y), де поля
• x – дійсна частина,
• y – уявна частина.

Реалізувати клас Complex для роботи з комплексними числами. Обов’язково
мають бути реалізовані методи:
• додавання add() (x1, y1) + (x2, y2) = (x1 + x2, y1 + y2);
• множення mul() (x1, y1) × (x2, y2) = (x1·x2 – y1·y2, x1·y2 + x2·y1);
• порівняння equ() (x1, y1) = (x2, y2) , якщо (x1 = x2) і (y1 = y2).
*/
#pragma once

#include <iostream>

using namespace std;

class Complex
{
private:
	int x;
	int y;
public:
	int getX() { return this->x; };
	int getY() { return this->y; };
	void setX(int x) { this->x = x; };
	void setY(int y) { this->y = y; };

	bool Init(int x, int y);
	void Read();
	void Display() const;
	friend Complex add(Complex&, Complex&);
	friend Complex mul(Complex&, Complex&);
	friend bool equ(Complex&, Complex&);
};

