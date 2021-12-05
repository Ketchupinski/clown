/*
Створити клас Pair (пара чисел); визначити методи зміни полів і порівняння пар:
пара p1 більше пари р2, якщо (p1.first > p2.first) або (p1.first = p2.first) і (p1.second >
р2.second).
Визначити похідний клас Fraction, пара чисел трактуються як ціла частина числа
і дробова частина числа. Визначити повний набір методів порівняння.
*/

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Pair
{
private:
	int first;
	int second;
public:
	void Setfirst(int num) { first = num; }
	void Setsecond(int num) { second = num; }
	int Getfirst() { return first; }
	int Getsecond() { return second; }

	Pair();
	Pair(int first, int second);
	~Pair();

	void Display();
	void Equal(Pair p);

	bool operator >(Pair p);
	bool operator <(Pair p);
	bool operator ==(Pair p);
	bool operator !=(Pair p);
};

