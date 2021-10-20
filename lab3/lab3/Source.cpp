#include "Complex.h"


int main() {
	Complex num1;
	cout << "First complex number:" << endl;
	num1.Read();
	num1.Display();
	cout << endl << "Second complex number:" << endl;
	Complex num2;
	num2.Read();
	num2.Display();
	cout << endl << endl;

	Complex a;

	a = add(num1, num2);
	cout << "num1 + num2:";
	a.Display();

	a = mul(num1, num2);
	cout << "num1 * num2: ";
	a.Display();

	bool check = equ(num1, num2);
	cout << "num1 == num2: " << check << endl;
}