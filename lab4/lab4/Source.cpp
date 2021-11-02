#include "IntPower.h"


int main()
{
	IntPower num;
	num.Read();
	num.Display();
	cout << endl << "pow: " << num.ToPower() << endl;

	IntPower clone = num;
	cout << endl << endl << "Cloned object: " << endl;
	clone.Display();

}