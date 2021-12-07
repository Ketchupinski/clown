/*
Створити клас Студент, що має ім’я (вказівник на рядок), курс та
ідентифікаційний номер. Визначити конструктори, деструктор і функцію виведення.
Створити public-похідний клас – студент-дипломник, що має тему дипломної роботи,
та студент-практикант. Визначити конструктори за умовчанням та з різним числом
параметрів, деструктор, функцію виведення. Визначити функції зміни назви
дипломної роботи.
*/
#pragma once
#include "Student.h"

class Diplom : public Student
{
private:
	string dip_theme;
public:
	Diplom();
	Diplom(Student m, string dip_theme);
	Diplom(string* name, int course, int iden_num, string dip_theme);
	Diplom(Diplom& a);
	~Diplom();

	void SetDipTheme(string dip_theme) { this->dip_theme = dip_theme; }
	string GetPassNum() { return dip_theme; }

	operator string() const;
	friend ostream& operator << (ostream& out, const Diplom& r);
	friend istream& operator >> (istream& in, Diplom& r);

	void Display();
	void Change();
};


