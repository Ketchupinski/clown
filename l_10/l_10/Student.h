/*
Створити клас Студент, що має ім’я (вказівник на рядок), курс та
ідентифікаційний номер. Визначити конструктори, деструктор і функцію виведення.
Створити public-похідний клас – студент-дипломник, що має тему дипломної роботи,
та студент-практикант. Визначити конструктори за умовчанням та з різним числом
параметрів, деструктор, функцію виведення. Визначити функції зміни назви
дипломної роботи.
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#pragma once
class Student
{
private:
	string* name;
	int course;
	int iden_num;
public:
	void SetName(string* name) { this->name = name; }
	void SetCourse(int course) { this->course = course; }
	void SetIdenNum(int iden_num) { this->iden_num = iden_num; }
	string* GetName() { return name; }
	int GetCourse() { return course; }
	int GetIdenNum() { return iden_num; }

	Student();
	Student(string* name, int course, int iden_num);
	Student(Student& m);
	~Student();

	void Display();
	void Change();

	operator string() const;
	friend ostream& operator << (ostream& out, const Student& r);
	friend istream& operator >> (istream& in, Student& r);
};

