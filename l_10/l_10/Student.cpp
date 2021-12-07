#include "Student.h"
Student::Student() {
	this->name = nullptr;
	this->course= 0;
	this->iden_num = 0;
}

Student::Student(string* name, int course, int iden_num) {
	if (course> 0 && iden_num > 0) {
		this->name = name;
		this->course= course;
		this->iden_num = iden_num;
	}
	else {
		exit(0);
	}
}

Student::Student(Student& m) {
	this->name = m.name;
	this->course= m.course;
	this->iden_num = m.iden_num;
}

Student::~Student() {
	this->name = nullptr;
}


void Student::Display() {
	cout << "Name: " << *this->name << endl;
	cout << "Course: " << this->course<< endl;
	cout << "Identifical number: " << this->iden_num << endl;
}

void Student::Change() {
	cout << endl;
	int a, b;
	cout << "Input new course: "; cin >> a;
	cout << "Input new identifical number: "; cin >> b;
	if (a > 0 && b > 0) {
		this->course= a;
		this->iden_num = b;
	}
	else {
		cout << "Wrong arguments given!" << endl;
	}
}

Student::operator string() const
{
	stringstream ss;
	ss << "Name: " << *this->name << endl;
	ss << "Course: " << course << endl;
	ss << "Identifical number: " << iden_num << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Student& r)
{
	return out << (string)r;
}
istream& operator >> (istream& in, Student& r)
{
	int a, b;
	cout << "Course = "; in >> a;
	cout << "Identifical number = "; in >> b;
	r.SetCourse(a); r.SetIdenNum(b);
	return in;
}

