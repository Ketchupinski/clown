// Дано літерний рядок, який містить послідовність символів s0, ..., sn, ... .
// 1. Вияснити, чи є серед цих символів пара сусідніх букв “no” або “on”.
// 2. Замінити кожну пару сусідніх букв “no” трійкою зірочок “ ***”.

#include <string.h>
#include <iostream>

using namespace std;

bool Include(const char* s);

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


bool Include(const char* s)
{
	for (int i = 0; s[i + 1] != '\0'; i++) // поки літерний рядок не закінчиться 
	{
		if (s[i] == 'n' && s[i+1] == 'o' // буде перевірка на "on", або "no"
			||
			s[i] == 'o' && s[i+1] == 'n') 
		{
			cout << endl;
			return true; // якщо така послідовність символів знайдена - повернеться true
		}
	}
	cout << endl;
	return false; // якщо не буде знайдено - повенеться false
}