/*
�������� ���� �������, �� �� ��� (�������� �� �����), ���� ��
���������������� �����. ��������� ������������, ���������� � ������� ���������.
�������� public-�������� ���� � �������-���������, �� �� ���� �������� ������,
�� �������-����������. ��������� ������������ �� ���������� �� � ����� ������
���������, ����������, ������� ���������. ��������� ������� ���� �����
�������� ������.
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

