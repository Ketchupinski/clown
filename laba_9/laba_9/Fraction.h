/*
Створити клас Pair (пара чисел); визначити методи зміни полів і порівняння пар:
пара p1 більше пари р2, якщо (p1.first > p2.first) або (p1.first = p2.first) і (p1.second >
р2.second).
Визначити похідний клас Fraction, пара чисел трактуються як ціла частина числа
і дробова частина числа. Визначити повний набір методів порівняння.
*/
#include "Pair.h"
#pragma once
class Fraction : public Pair
{
public:
	Fraction() : Pair() {}

	Fraction(int f, int s) : Pair(f, s) {}

	Fraction(Pair p);

	~Fraction() {}

	bool operator >(Fraction f);
	bool operator <(Fraction f);
	bool operator ==(Fraction f);
	bool operator !=(Fraction f);

};

