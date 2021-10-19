#pragma once
/*
—творити клас ѕр€мокутник. ” закрит≥й частин≥ визначити пол€:
Х висоту ≥
Х ширину.
ћетоди:
Х обчисленн€ площ≥,
Х обчисленн€ периметру,
Х встановленн€ висоти,

Х встановленн€ ширини,
Х отриманн€ висоти,
Х отриманн€ ширини;
Х виведенн€ значень елемент≥в класу на екран.
ћетоди встановленн€ пол≥в класу мають перев≥р€ти коректн≥сть параметр≥в, що
задаютьс€.
*/
#include <iostream>

using namespace std;

class Rectangle
{
private:
	int h; // high
	int w; // weight
public: 
	int getH() { return this->h; };
	int getW() { return this->w; };
	void setH(int h) { this->h = h; };
	void setW(int w) { this->w = w; };
	bool Init(int h, int w);
	void Read();
	void Display() const;
	friend int getPerimeter(Rectangle);
	friend int getArea(Rectangle);
};

