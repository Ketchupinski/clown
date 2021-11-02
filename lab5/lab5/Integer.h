/*
Створити клас цілі числа. Визначити операцію ++, як метод класу, унарну
операцію - та бінарну операцію +, як дружні функції. Клас має мати конструктор за
умовчанням, конструктор ініціалізації, конструктор копіювання і деструктор.
Визначити потокові операції введення-виведення.
*/

#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Integer
{
private:
	int num;
public:
	Integer();
	Integer(int);
	Integer(Integer&);
	~Integer();
	void Read();
	void Display();
	void SetNum(int num) { this->num = num; };
	int GetNum() { return this->num; };
	Integer& operator ++();
	friend Integer operator +(Integer, Integer); // бінарний
	friend Integer operator +(Integer); // унарний
	friend ostream& operator << (ostream&, const Integer&);
	friend istream& operator >> (istream&, Integer&);
	operator string() const;
};

