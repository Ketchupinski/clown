#include "Practic.h"
Practic::Practic() : Student() {
	this->practic_years = 0;
}

Practic::Practic(Student m, int practic_years) : Student(m) {
	if (practic_years > 0) {
		this->practic_years = practic_years;
	}
	else {
		cout << "Wrong arguments!" << endl;
		exit(0);
	}
}

Practic::Practic(string* name, int course, int iden_num, int practic_years)
	: Student(name, course, iden_num)
{
	if (practic_years > 0) {
		this->practic_years = practic_years;
	}
	else {
		cout << "Wrong arguments!" << endl;
		exit(0);
	}
}

Practic::Practic(Practic& s) : Student(s) {
	this->practic_years = s.practic_years;
}

Practic::~Practic() {
	Student::~Student();
}

void Practic::Display() {
	Student::Display();
	cout << "Years of practic: " << practic_years << endl;
}

void Practic::Change() {
	Student::Change();
	int py;
	cout << "Input new years of practic: "; cin >> py;
	if (py > 0) {
		this->practic_years = py;
	}
	else {
		cout << "Wrong argument given!" << endl;
	}
}

Practic::operator string() const
{
	stringstream ss;
	ss << Student::operator std::string();
	ss << "Years of practic: " << practic_years << endl;
	return ss.str();
	 
}

ostream& operator << (ostream& out, const Practic& r)
{
	return out << (string)r;
}
istream& operator >> (istream& in, Practic& r)
{
	int a, b, p;
	cout << "Course = "; in >> a;
	cout << "Identifical number = "; in >> b;
	cout << "Years of practic = "; in >> p;
	r.SetCourse(a); r.SetIdenNum(b); r.SetYearsOfPractic(p);
	return in;
}
