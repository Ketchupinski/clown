/*
Створити клас Car (машина), що характеризується торговою маркою (літерний
рядок), кількістю циліндрів, потужністю.

Визначити методи пере-присвоєння та зміни потужності. Створити клас-
контейнер Lorry (вантажівка), що містить поле «машина» і характеризується також

вантажопідйомністю кузова.
Визначити функції пере-присвоєння марки та зміни вантажопідйомності.
*/
#include "Lorry.h"

int Lorry::counter = 0;
int Lorry::Car::counter = 0;

Lorry::Car::Car() {
	this->brand = "unknown";
	this->cylinders = 0;
	this->power = 0;
	Lorry::Car::counter++;
}

Lorry::Car::Car(string brand, int cylinders, double power) {
	this->brand = brand;
	if (cylinders > 0) {
		this->cylinders = cylinders;
		if (power > 0) {
			this->power = power;
		}
		else{
			cout << endl << "Wrong argument!" << endl;
			exit(0);
		}
	}
	else {
		exit(0);
		cout << endl << "Wrong argument!" << endl;
	}
}

Lorry::Car::Car(Car& car) {
	this->brand = car.brand;
	this->power = car.power;
	this->cylinders = car.cylinders;
	Lorry::Car::counter++;
}

Lorry::Car::~Car() {
	Lorry::Car::counter--;
}

void Lorry::Car::ChangePower() {
	cout << "Input new power(in horsepower):"; cin >> this->power;
	cout << "Power of your car has changed to: " << this->power;
}

Lorry::Car& Lorry::Car::operator =(const Car& c) {
	this->brand = c.brand;
	this->cylinders = c.cylinders;
	this->power = c.power;
	return *this;
}

Lorry::Car::operator string () const
{
	cout << endl;
	stringstream ss;
	ss << "brand: " << this->brand << endl;
	ss << "cylinders: " << cylinders << endl;
	ss << "power(in horsepower): " << power << endl;
	return ss.str();
}


ostream& operator << (ostream& out, const Lorry::Car& c) {
	out << string(c);
	return out;
}

istream& operator >> (istream& in, Lorry::Car& c) {
	cout << endl;
	cout << "car brend: "; in >> c.brand;
	cout << "cylinders: "; in >> c.cylinders;
	cout << "car power(in horsepower): "; in >> c.power;
	return in;
}

Lorry::Car& Lorry::Car::operator ++() {
	++cylinders;
	return *this;
}

Lorry::Car& Lorry::Car::operator --() {
	--cylinders;
	return *this;
}

Lorry::Car& Lorry::Car::operator ++(int) {
	power++;
	return *this;
}

Lorry::Car& Lorry::Car::operator --(int) {
	power--;
	return *this;
}

Lorry::Lorry() {
	this->capacity = 0;
	this->car = Lorry::Car::Car();
	Lorry::counter++;
}

Lorry::Lorry(int capacity, Car car) {
	this->capacity = capacity;
	this->car = car;
	Lorry::counter++;
}

Lorry::Lorry(int capacity, string brand, int cylinders, double power) {
	this->capacity = capacity;
	this->car = Lorry::Car::Car(brand, cylinders, power);
	Lorry::counter++;
}

Lorry::Lorry(Lorry& l) {
	this->capacity = l.capacity;
	this->car = car;
	Lorry::counter++;
}

Lorry::~Lorry() {
	Lorry::counter--;
}

void Lorry::ChangeBrand() {
	cout << endl;
	string b;
	cout << "Input new car brand: "; cin >> b;
	car.SetBrand(b);
	cout << "Your car brand has changed to: '" << car.GetBrand() << "'!" << endl;;
}

void Lorry::ChangeCapacity() {
	cout << endl;
	int c;
	cout << "Input new trunk capacity: "; cin >> c;
	SetCapacity(c);
	cout << "Your car trunk capacity has changed to: " << GetCapacity() << endl;
}

Lorry& Lorry::operator = (const Lorry& l) {
	this->capacity = l.capacity;
	this->car = l.car;
	return *this;
}

Lorry::operator string () const
{
	cout << endl;
	stringstream ss;
	ss << "car trunk capacity: " << this->capacity << endl;
	ss << "car: " << car << endl;
	return ss.str();
}


ostream& operator << (ostream& out, const Lorry& l) {
	out << string(l);
	return out;
}

istream& operator >> (istream& in, Lorry& l) {
	string b;
	int cap, cyl;
	double pow;
	cout << endl;
	cout << "car brend: "; in >> b;
	cout << "cylinders: "; in >> cyl;
	cout << "power(in horsepower): "; in >> pow;
	cout << "trunk capacity: "; in >> cap;
	l.capacity = cap;
	l.car.SetPower(pow);
	l.car.SetBrand(b);
	l.car.SetCylinders(cyl);
	return in;
}

Lorry& Lorry::operator ++ () {
	++capacity;
	return *this;
}

Lorry& Lorry::operator -- () {
	--capacity;
	return *this;
}

Lorry& Lorry::operator ++ (int) {
	car++;
	return *this;
}

Lorry& Lorry::operator -- (int) {
	car--;
	return *this;
}