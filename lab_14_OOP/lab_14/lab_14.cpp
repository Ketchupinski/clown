/*
Функція, яка обчислює площу трикутника за трьома сторонами
Виняткова ситуація генерується, коли введено неправильні значення довжин
сторін
*/

#include <iostream>
#include <string>
#include <exception>
#include "Error.h"
#include "Triangle.h"

using namespace std;

void FU()
{
	cout << "unexpected error! - bad_exception" << endl;
	throw;
}
void FT()
{
	cout << "unknown error! - terminate" << endl;
	abort();
}

int main()
{
	set_unexpected(FU);
	set_terminate(FT);

	Triangle t1(3, -4, 5);

	try
	{
		t1.GetSquare();
	}
	catch (...)
	{
		cout << " catch (...) <= GetSquare()" << endl;
	}


	try {
		t1.GetSquare1();
	}
	catch (bad_exception)
	{
		cout << " catch (bad_exception) <= GetSquare1()" << endl;
	}


	try {
		t1.GetSquare2();
	}
	catch (char)
	{
		cout << " catch (char) <= GetSquare2()" << endl;
	}

	try {
		t1.GetSquare3();
	}
	catch (int)
	{
		cout << " catch (int) <= GetSquare3" << endl;
	}

	try {
		t1.GetSquare4();
	}
	catch (Error e)

	{
		cout << " catch (Error) <= GetSquare4() :" << endl;
		cout << e.What() << endl;
	}
}