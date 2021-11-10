/*
Описати клас, який представляє вектор із N цілих чисел. Реалізувати операції
• додавання векторів;
• порівняння векторів;
• обчислення норми вектора (корінь із суми квадратів елементів).
*/


#include "Vector.h"

int main()
{
	Vector v;
	v.Read();
	v.Display();
	Vector x = v;
	x.Display();
	
	cout << endl;
	cout << "x + v: " << endl;  
	x + v;
	
	cout << endl << endl;
	bool b = x == v;
	cout << "x == v: " << b << endl;

	cout << endl << "Vector norm: " << v.Norm();

	




}


