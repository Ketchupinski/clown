/*
�������� ���� �������, �� �� ��� (�������� �� �����), ���� ��
���������������� �����. ��������� ������������, ���������� � ������� ���������.
�������� public-�������� ���� � �������-���������, �� �� ���� �������� ������,
�� �������-����������. ��������� ������������ �� ���������� �� � ����� ������
���������, ����������, ������� ���������. ��������� ������� ���� �����
�������� ������.
*/
#pragma once
#include "Student.h"

class Practic : Student
{
private:
	int practic_years;
public:
	Practic();
	Practic(string* name, int age, int iden_num, int practic_years);
	Practic(Student m, int practic_years);
	Practic(Practic& s);
	~Practic();

	void SetYearsOfPractic(int years) { this->practic_years = years; }
	int GetYearsOfPractic() { return practic_years; }

	operator string() const;
	friend ostream& operator << (ostream& out, const Practic& r);
	friend istream& operator >> (istream& in, Practic& r);

	void Display();
	void Change();
};

