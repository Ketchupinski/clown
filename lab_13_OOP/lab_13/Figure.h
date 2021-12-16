/*
�������� ����������� ������� ���� Figure � ����������� �������� ����������
����� � ���������. �������� ������ �����: Rectangle (�����������), Circle (����),
Trapezium (��������) � ����� ��������� ����� � ���������. ��������� ���������,
�� ���� ��������, �� � ��� ����� ������ � �������� ����, � �� � � ��������.
*/
#include <iostream>

using namespace std;

#pragma once
class Figure
{
private: 
	int x;
public:
	void SetX(int x);
	int GetX() { return x; }
	Figure();
	Figure(int);
	Figure(Figure&);
	~Figure();

	virtual int Square() = 0;
	virtual int Perimeter() = 0;
};

