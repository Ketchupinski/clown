/*
Створити клас Pair (пара чисел); визначити методи зміни полів і порівняння пар:
пара p1 більше пари р2, якщо (p1.first > p2.first) або (p1.first = p2.first) і (p1.second >
р2.second).
Визначити похідний клас Fraction, пара чисел трактуються як ціла частина числа
і дробова частина числа. Визначити повний набір методів порівняння.
*/

#include "Fraction.h"
int main()
{
	Pair h(3, 4);
	Pair c(2, 7);

	h.Display();
	c.Display();
	cout << endl;

	h.Equal(c);

	bool check = c > h;
	cout << "h > c: " << check << endl;

	check = c < h;
	cout << "h < c: " << check << endl;

	check = c == h;
	cout << "h == c: " << check << endl;

	check = c != h;
	cout << "h != c: " << check << endl;

	Fraction l(h);
	Fraction x(l);
	l.Display();
	x.Display();

	x.Equal(l);

	check = l > x;
	cout << "l > x: " << check << endl;

	check = l < x;
	cout << "l < x: " << check << endl;

	check = l == x;
	cout << "l == x: " << check << endl;

	check = l != x;
	cout << "l != x: " << check << endl;


}

