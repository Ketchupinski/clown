/*
�������� ���� Pair (���� �����); ��������� ������ ���� ���� � ��������� ���:
���� p1 ����� ���� �2, ���� (p1.first > p2.first) ��� (p1.first = p2.first) � (p1.second >
�2.second).
��������� �������� ���� Fraction, ���� ����� ����������� �� ���� ������� �����
� ������� ������� �����. ��������� ������ ���� ������ ���������.
*/

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Pair
{
private:
	int first;
	int second;
public:
	void Setfirst(int num) { first = num; }
	void Setsecond(int num) { second = num; }
	int Getfirst() { return first; }
	int Getsecond() { return second; }

	Pair();
	Pair(int first, int second);
	~Pair();

	void Display();
	void Equal(Pair p);

	bool operator >(Pair p);
	bool operator <(Pair p);
	bool operator ==(Pair p);
	bool operator !=(Pair p);
};

