/*
Створити абстрактний базовий клас Figure з віртуальними методами обчислення
площі і периметру. Створити похідні класи: Rectangle (прямокутник), Circle (круг),
Trapezium (трапеція) з своїми функціями площі і периметру. Самостійно визначити,
які поля необхідні, які з них можна задати в базовому класі, а які – в похідних.
*/

#include "Figure.h"
#pragma once
class Rectangle : public Figure
{
private:
	// x = height
	int width;
public:
	int GetWidth() { return width; }
	void SetWidth(int);
	Rectangle();
	Rectangle(int, int);
	Rectangle(Rectangle&);
	~Rectangle();
	virtual int Square() override;
	virtual int Perimeter() override;
};

