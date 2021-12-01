/*
Створити клас Car (машина), що характеризується торговою маркою (літерний
рядок), кількістю циліндрів, потужністю.

Визначити методи пере-присвоєння та зміни потужності. Створити клас-
контейнер Lorry (вантажівка), що містить поле «машина» і характеризується також

вантажопідйомністю кузова.
Визначити функції пере-присвоєння марки та зміни вантажопідйомності.
*/
#include "Lorry.h"

int main()
{
	Lorry l1;
	cout << "Lorry: " << Lorry::getCounter() << endl;
	cout << "Lorry::Car: " << Lorry::Car::getCounter() << endl;

	cout << endl;
	Lorry::Car c1;
	cout << "Lorry::Car +1: " << Lorry::Car::getCounter() << endl;

	cout << endl;
	Lorry l2(1000, "Man", 8, 20.5);
	cout << "Lorry local: " << Lorry::getCounter() << endl;
	cout << "Lorry::Car local: " << Lorry::Car::getCounter() << endl;

	cout << endl;
	Lorry::Car c2;
	cout << "Lorry::Car local +1: " << Lorry::Car::getCounter() << endl;
	cout << "Lorry: " << Lorry::getCounter() << endl;
	cout << "Lorry::Car: " << Lorry::Car::getCounter() << endl;

	cout << endl;
	l2++;
	cout << "l2++" << l2 << endl;

	cout << endl;
	l2--;
	cout << "l2--" << l2 << endl;

	cout << endl;
	++l2;
	cout << "++l2" << l2 << endl;

	cout << endl;
	--l2;
	cout << "--l2" << l2 << endl;

	Lorry::Car c3("BMW", 8, 25);

	cout << endl;
	c3++;
	cout << "c3++" << c3 << endl;

	cout << endl;
	c3--;
	cout << "c3--" << c3 << endl;

	cout << endl;
	++c3;
	cout << "++c3" << c3 << endl;

	cout << endl;
	--c3;
	cout << "--c3" << c3 << endl;
}