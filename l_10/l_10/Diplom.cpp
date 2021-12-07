#include "Diplom.h"
Diplom::Diplom() : Student() {
	dip_theme = "";
}

Diplom::Diplom(string* name, int course, int iden_num, string dip_theme)
	: Student(name, course, iden_num)
{
	this->dip_theme = dip_theme;
}

Diplom::Diplom(Student m, string dip_theme) : Student(m) {
	this->dip_theme = dip_theme;
}

Diplom::Diplom(Diplom& a) : Student(a) {
	this->dip_theme = a.dip_theme;
}

Diplom::~Diplom() {
	Student::~Student();
}

void Diplom::Display() {
	Student::Display();
	cout << "Diplom theme:" << dip_theme << endl;
}

void Diplom::Change() {
	Student::Change();
	string dip_theme;
	cout << "Input new diplom theme: "; cin >> dip_theme;
	this->dip_theme = dip_theme;
}

Diplom::operator string() const
{
	stringstream ss;
	ss << Student::operator std::string();
	ss << "Diplom theme: " << dip_theme << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Diplom& r)
{
	return out << (string)r;
}
istream& operator >> (istream& in, Diplom& r)
{
	int a, b;
	cout << "Course = "; in >> a;
	cout << "Identifical number = "; in >> b;
	r.SetCourse(a); r.SetIdenNum(b);
	return in;
}