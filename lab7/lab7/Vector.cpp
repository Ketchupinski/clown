/*
ќписати клас, €кий представл€Ї вектор ≥з N ц≥лих чисел. –еал≥зувати операц≥њ
Х додаванн€ вектор≥в;
Х пор≥вн€нн€ вектор≥в;
Х обчисленн€ норми вектора (кор≥нь ≥з суми квадрат≥в елемент≥в).
*/

#include "Vector.h"

Vector::Vector() {
	N = 0;
	vector = nullptr;
}

Vector::Vector(int n) {
	N = n;
	vector = new int [N];
	for (int i = 0; i < N; i++) {
		vector[i] = 0;
	}
}

Vector::Vector(Vector& v) {
	this->N = v.N;
	this->vector = new int[N];
	for (int i = 0; i < N; i++) {
		this->vector[i] = v.vector[i];
	}
}

Vector::~Vector() {
	delete[] vector;
}

void Vector::Display() {
	cout << "{ ";
	for (int i = 0; i < N; i++) {
		cout << vector[i] << "; ";
	}
	cout << "}" <<  endl;
}

bool Vector::Init(int N) {
	if (N > 0) {
		return true;
	}
	else {
		return false;
	}
}

void Vector::Read() {
	int n = 0; 
	do {
		cout << "Input N: "; cin >> n;
	} while (!Init(n));
	this->N = n;
	this->vector = new int[N];
	
	int num = 0;
	for (int i = 0; i < N; i++) {
		cout << "Input number: "; cin >> num;
		this->vector[i] = num;
	}
}

void operator+(Vector v1, Vector v2) {
	if (v1.N == v2.N && v1.N > 0) {
		Vector v(v1.N);
		v.vector = new int[v1.N];
		for (int i = 0; i < v1.N; i++) {
			v.vector[i] = v1.vector[i] + v2.vector[i];
		}
		v.Display();
	}
	else {
		cout << "N must be same in two objects!" << endl;
	}
}

void Vector::operator=(Vector v) {
	this->N = v.N;
	vector = new int[N];
	for (int i = 0; i < N; i++) {
		this->vector[i] = v.vector[i];
	}
}

bool operator==(Vector v1, Vector v2) {
	if (v1.N == v2.N) {
		for (int i = 0; i < v1.N; i++) {
			if (v1.vector[i] != v2.vector[i]) {
				return false;
			}
		}
		return true;
	}
	else {
		return false;
	}
}

double Vector::Norm() {
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += pow(this->vector[i], 2);
	}
	return sqrt(sum);
}