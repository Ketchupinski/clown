/*
�������� ���� Pair (���� �����); ��������� ������ ���� ���� � ��������� ���:
���� p1 ����� ���� �2, ���� (p1.first > p2.first) ��� (p1.first = p2.first) � (p1.second >
�2.second).
��������� �������� ���� Fraction, ���� ����� ����������� �� ���� ������� �����
� ������� ������� �����. ��������� ������ ���� ������ ���������.
*/
#include "Pair.h"
#pragma once
class Fraction : public Pair
{
public:
	Fraction() : Pair() {}

	Fraction(int f, int s) : Pair(f, s) {}

	Fraction(Pair p);

	~Fraction() {}

	bool operator >(Fraction f);
	bool operator <(Fraction f);
	bool operator ==(Fraction f);
	bool operator !=(Fraction f);

};

