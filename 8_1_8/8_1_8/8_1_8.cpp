#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

void Change(string& s);

int main()
{
	string str; 
	cout << "Enter string:" << endl;
	getline(cin, str); 
	Change(str); 
	cout << "Result: " << str << endl;
}

void Change(string& str)
{
	for (size_t i = 0; i < str.length() - 1; i++) 
	{
		if (str[i] == 'n' && str[i + 1] == 'o') {
			str.replace(i, 2, "***"); 
			i += 1; 
		}
		if (str.length() < 2) {
			break;
		}
	}
}