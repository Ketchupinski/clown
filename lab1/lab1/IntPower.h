/*
* –еал≥зувати клас IntPower. ѕоле first Ц д≥йсне ненульове число; поле second Ц ц≥ле
число, показник степен≥. –еал≥зувати метод power( ) Ц п≥днесенн€ числа first до степен≥
second. ћетод маЇ правильно працювати при будь-€ких допустимих значенн€х first та
second.
*/
#pragma once
#include <iostream>
using namespace std;

class IntPower
{
private:
	int first;
	int second;

public:
	int getFirst() { return this->first; };
	int getSecond() { return this->second; };
	void setFirst(int first) { this->first = first; };
	void setSecond(int second) { this->second = second; };
	bool Init(int first, int second);
	void Read();
	void Display() const;
	int ToPower();
};

