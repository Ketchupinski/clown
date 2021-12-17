/*
Функція, яка обчислює площу трикутника за трьома сторонами
Виняткова ситуація генерується, коли введено неправильні значення довжин
сторін
*/
#pragma once
#include "Error.h"
#include <exception>

using namespace std;

class Triangle
{
private:
	int a;
	int b;
	int c;
public:
	Triangle();
	Triangle(int a, int b, int c);
	Triangle(Triangle& t);
	int GetSquare();
	int GetSquare1() throw();
	int GetSquare2() throw(char);
	int GetSquare3() throw(int);
	int GetSquare4() throw(Error);
};

