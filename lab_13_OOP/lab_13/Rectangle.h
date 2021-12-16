/*
�������� ����������� ������� ���� Figure � ����������� �������� ����������
����� � ���������. �������� ������ �����: Rectangle (�����������), Circle (����),
Trapezium (��������) � ����� ��������� ����� � ���������. ��������� ���������,
�� ���� ��������, �� � ��� ����� ������ � �������� ����, � �� � � ��������.
*/

#include "Figure.h"
#pragma once
class Rectangle : public Figure
{
private:
	// x = height
	int width;
public:
	int GetWidth() { return width; }
	void SetWidth(int);
	Rectangle();
	Rectangle(int, int);
	Rectangle(Rectangle&);
	~Rectangle();
	virtual int Square() override;
	virtual int Perimeter() override;
};

