/*
ќписати клас, €кий представл€Ї вектор ≥з N ц≥лих чисел. –еал≥зувати операц≥њ
Х додаванн€ вектор≥в;
Х пор≥вн€нн€ вектор≥в;
Х обчисленн€ норми вектора (кор≥нь ≥з суми квадрат≥в елемент≥в).
*/


#pragma once

#include <iostream>

using namespace std;

class Vector
{
private: 
	int N;
	int* vector;

public: 
	Vector();
	Vector(int);
	Vector(Vector&);
	~Vector();
	void Display();
	void Read();
	bool Init(int);
	friend void operator+(Vector, Vector);
	void operator=(Vector v);
	friend bool operator==(Vector, Vector);
	double Norm();
};

