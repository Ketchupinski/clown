/*
Створити клас цілі числа. Визначити операцію ++, як метод класу, унарну
операцію - та бінарну операцію +, як дружні функції. Клас має мати конструктор за
умовчанням, конструктор ініціалізації, конструктор копіювання і деструктор.
Визначити потокові операції введення-виведення.
*/

#include "Integer.h"

int main()
{
	Integer n;
	n.Read();
	n.Display();
	Integer p;
	p.Read();
	p.Display();


	Integer c;
	c = n + p;
	cout << endl << "n + p: " << endl;
	cout << endl << c << endl;

	cout << "++c: " << endl << ++c << endl;

	cout << "+c (Unar): " << endl << +c << endl;

	Integer clone;
	clone = n;
	cout << endl << endl << "clone object: " << endl << n;
}
