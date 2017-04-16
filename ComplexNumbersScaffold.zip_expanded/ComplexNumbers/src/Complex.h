//============================================================================
// Name        : Complex.h
// Author      : L. Urbas
// Version     : 2017.001
// Copyright   : use as you like and simply have fun
// Description : (fast) vollständige Definition komplexe Zahl
//============================================================================

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
using namespace std;

class Complex {
private:
	double real, imag;
public:
	Complex(double r=0.0, double i=0.0);
	double Re() const;
	double Im() const;
	// Zuweisungsfunktionen sind Elementfunktionen
	Complex& operator+=(const Complex& rhs);
	Complex& operator+=(const double rhs);
	Complex& operator-=(const Complex& rhs);
	Complex& operator-=(const double rhs);
};

// Definition und Implementierung der symetrischen arithmetischen Funktionen

// complex = complex + complex
inline Complex operator+(const Complex& lhs, const Complex& rhs) {
	Complex cret(lhs); // !! Kopierkonstruktor wird automatisch angelegt
	return cret += rhs;
}
// complex = complex + double
inline Complex operator+(const Complex& lhs, const double rhs) {
	Complex cret(lhs);
	return cret += rhs;
}
// complex = double + complex
inline Complex operator+(const double lhs, const Complex& rhs) {
	Complex cret(rhs);
	return cret += lhs;
}

// complex = complex - complex
inline Complex operator-(const Complex& lhs, const Complex& rhs) {
	Complex cret(lhs);
	return cret -= rhs;
}
// complex = complex - double
inline Complex operator-(const Complex& lhs, const double rhs) {
	Complex cret(lhs);
	return cret -= rhs;
}
// complex = double - complex
inline Complex operator-(const double lhs, const Complex& rhs) {
	Complex cret(rhs);
	return cret -= lhs;
}

ostream& operator<<(ostream& lhs, const Complex& rhs);
#endif /* COMPLEX_H_ */
