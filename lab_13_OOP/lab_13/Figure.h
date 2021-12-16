/*
Створити абстрактний базовий клас Figure з віртуальними методами обчислення
площі і периметру. Створити похідні класи: Rectangle (прямокутник), Circle (круг),
Trapezium (трапеція) з своїми функціями площі і периметру. Самостійно визначити,
які поля необхідні, які з них можна задати в базовому класі, а які – в похідних.
*/
#include <iostream>

using namespace std;

#pragma once
class Figure
{
private: 
	int x;
public:
	void SetX(int x);
	int GetX() { return x; }
	Figure();
	Figure(int);
	Figure(Figure&);
	~Figure();

	virtual int Square() = 0;
	virtual int Perimeter() = 0;
};

