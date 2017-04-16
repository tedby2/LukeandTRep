//============================================================================
// Name        : Complex.cpp
// Author      : L. Urbas
// Version     : 2017.001
// Copyright   : use as you like and simply have fun
// Description : Implementierung Addition und Subtraktion
//============================================================================
#include "Complex.h"

// Implementierung der Elementfunktionen
Complex::Complex(double r, double i) :
		real(r), imag(i) {
}
double Complex::Re() const {
	return real;
}
double Complex::Im() const {
	return imag;
}
Complex& Complex::operator+=(const Complex& rhs) {
	real += rhs.real;
	imag += rhs.imag;
	return *this;
}
Complex& Complex::operator+=(double rhs) {
	real += rhs;
	return *this;
}
Complex& Complex::operator-=(const Complex& rhs) {
	real -= rhs.real;
	imag -= rhs.imag;
	return *this;
}
Complex& Complex::operator-=(double rhs) {
	real -= rhs;
	return *this;
}

#include <iostream>
using namespace std;

// Implementierung der Nichtelementfunktionen
ostream& operator<<(ostream& lhs, const Complex& rhs) {
	lhs << rhs.Re() << "," << rhs.Im() << " ";
	return lhs;
}
