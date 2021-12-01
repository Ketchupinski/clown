/*
Створити клас Car (машина), що характеризується торговою маркою (літерний
рядок), кількістю циліндрів, потужністю.

Визначити методи пере-присвоєння та зміни потужності. Створити клас-
контейнер Lorry (вантажівка), що містить поле «машина» і характеризується також

вантажопідйомністю кузова.
Визначити функції пере-присвоєння марки та зміни вантажопідйомності.
*/
#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Lorry
{
private:
	int capacity;
	static int counter;
public:
	class Car {
	private:
		string brand;
		int cylinders;
		double power;
		static int counter;
	public:
		Car();
		Car(string, int, double);
		Car(Car&);
		~Car();

		void SetBrand(string brand) { this->brand = brand; };
		void SetCylinders(int cylinders) { this->cylinders = cylinders; };
		void SetPower(double power) { this->power = power; };
		string GetBrand() { return this->brand; }
		int GetCylinders() { return this->cylinders; }
		double GetPower() { return this->power; }
		static int getCounter() { return counter; };

		void ChangePower();

		Car& operator = (const Car& c);
		friend ostream& operator << (ostream& out, const Car& c);
		friend istream& operator >> (istream& in, Car& c);
		operator string () const;
		Car& operator ++ ();
		Car& operator -- ();
		Car& operator ++ (int);
		Car& operator -- (int);
	};

private: 
	Car car;

public:
	Lorry();
	Lorry(int, Car);
	Lorry(int, string, int, double);
	Lorry(Lorry&);
	~Lorry();

	void SetCapacity(int capacity) { this->capacity = capacity; }
	void SetCar(Car car) { this->car = car; }
	int GetCapacity() { return this->capacity; }
	Car GetCar() { return car; }
	static int getCounter() { return counter; };

	void ChangeBrand();
	void ChangeCapacity();

	Lorry& operator = (const Lorry& l);
	friend ostream& operator << (ostream& out, const Lorry& l);
	friend istream& operator >> (istream& in, Lorry& l);
	operator string () const;
	Lorry& operator ++ ();
	Lorry& operator -- ();
	Lorry& operator ++ (int);
	Lorry& operator -- (int);
};

