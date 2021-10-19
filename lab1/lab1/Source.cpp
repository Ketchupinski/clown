#include "IntPower.h"

IntPower makePower(int first, int second)
{
	IntPower z;
	if (!z.Init(first, second))
		cout << "Wrong argument to Init!" << endl;
	return z;
}

int main()
{
	IntPower num;
	num.Read();
	num.Display();
	cout << num.ToPower() << endl;
	cout << endl << endl;
	IntPower p = makePower(2, 4);
	p.Display();
	cout << p.ToPower() << endl;
	return 0;
}