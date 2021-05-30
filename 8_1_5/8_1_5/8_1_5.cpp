/*
Дано літерний рядок, який містить послідовність символів s0, ..., sn, ... .
1. Вияснити, чи є серед цих символів пара сусідніх букв “no” або “on”.
2. Замінити кожну пару сусідніх букв “no” трійкою зірочок “***”.
*/
#define CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>

using namespace std;

bool Include(char* s);

int main()
{
	char s[101];
	cout << "Enter string:" << endl;
	cin.getline(s, 100);
	if (Include(s))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}


bool Include(char* s)
{
	char* sh;
	sh = strstr(s, "no");
	if (sh == NULL) {
		sh = strstr(s, "on");
	}
	if (sh != NULL)
		return true;

	return false;
}