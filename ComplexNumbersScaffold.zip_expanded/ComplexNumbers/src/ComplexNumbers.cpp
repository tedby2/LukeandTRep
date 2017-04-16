//============================================================================
// Name        : ComplexNumberSolutions.cpp
// Author      : L. Urbas
// Version     : 2017.001
// Copyright   : use as you like and simply have fun
// Description : Berechnung Amplituden- und Frequenzgang
//============================================================================
#include <iostream>
using namespace std;
#include "Complex.h"

int main() {
	const Complex j(0, 1);
	Complex c(2,1);
	double d(4);

	cout << j << ";" << c << ";" << d << endl;
	cout << j + j << ";" << c - j << endl;
	cout << d + j << ";" << j + d << endl;
	return 0;
}
