#include "Fraction.h"

Fraction::Fraction(Pair p) {
	this->Setfirst(p.Getfirst());
	this->Setsecond(p.Getsecond());
}

bool Fraction::operator>(Fraction p) {
	if (this->Getfirst() > p.Getfirst() || (this->Getfirst() == p.Getfirst() && this->Getsecond() > p.Getsecond())) {
		return true;
	}
	return false;
}

bool Fraction::operator<(Fraction p) {
	if (p.Getfirst() > this->Getfirst() || (p.Getfirst() == this->Getfirst() && p.Getsecond() > this->Getsecond())) {
		return true;
	}
	return false;
}

bool Fraction::operator==(Fraction p) {
	if (p.Getfirst() == this->Getfirst() && this->Getsecond() == p.Getsecond()) {
		return true;
	}
	return false;
}

bool Fraction::operator!=(Fraction p) {
	if (p.Getfirst() == this->Getfirst() && this->Getsecond() == p.Getsecond()) {
		return false;
	}
	return true;
}