/*
Створити клас цілі числа. Визначити операцію ++, як метод класу, унарну
операцію - та бінарну операцію +, як дружні функції. Клас має мати конструктор за
умовчанням, конструктор ініціалізації, конструктор копіювання і деструктор.
Визначити потокові операції введення-виведення.
*/

#include "Integer.h"

Integer::Integer() {
	this->num = 0;
}

Integer::Integer(int num) {
	this->num = num;
}

Integer::Integer(Integer& n) {
	this->num = n.num;
}

Integer::~Integer() {
	this->num = 0;
}

void Integer::Read() {
	int num;
	cout << endl << "Input integer number: "; cin >> num;
	Integer temp(num);
	this->num = num;
}

void Integer::Display() {
	cout << endl << this->num << endl;
}

Integer& Integer::operator ++()
{
	num++;
	return *this;
}

Integer operator +(Integer p, Integer n) {
	return (p.GetNum() + n.GetNum());
}

ostream& operator << (ostream& out, const Integer& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Integer& r)
{
	cout << "Integer num = "; in >> r.num;
	cout << endl;
	return in;
}

Integer::operator string () const
{
	stringstream ss;
	ss << "Integer num = " << num << endl;
	return ss.str();
}

Integer operator +(Integer p) {
	return (p.num);
}