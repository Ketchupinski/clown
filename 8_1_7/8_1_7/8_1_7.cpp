/*
Дано літерний рядок, який містить послідовність символів s0, ..., sn, ... .
1. Вияснити, чи є серед цих символів пара сусідніх букв “no” або “on”.
2. Замінити кожну пару сусідніх букв “no” трійкою зірочок “***”.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

bool Include(const string s);

int main()
{
	string str; // оголошується масив 
	cout << "Enter string:" << endl;
	getline(cin, str); // введенні символи заносяться в масив
	if (Include(str)) 
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

bool Include(const string s)
{
	int d;
	int k = 0;
	d = s.length();
	for (size_t i = 0; i < d - 1; i++) {
		size_t found = s.find("no"); 
		if (found != string::npos) { 
			return true;
		}
		size_t find = s.find("on");
		if (find != string::npos) {
			return true;
		}

	}
	return false; 
}