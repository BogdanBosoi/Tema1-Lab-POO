
#include <cstdlib>
#include <iostream>
#include <cmath>
#include "complexnum.h"

double complex::getImaginar() {
	return n_imaginar;
}

double complex::getReal() {
	return n_real;
}

void complex::setReal(double arg1) {
	n_real = arg1;
}

void complex::setImaginar(double arg1) {
	n_imaginar = arg1;
}

void complex::setNum(double arg1, double arg2) {
	n_real = arg1;
	n_imaginar = arg2;
}

complex operator+(complex & cArg1, complex & cArg2)
{
	complex cArg;
	cArg.setReal(cArg1.getReal() + cArg2.getReal());
	cArg.setImaginar(cArg1.getImaginar() + cArg2.getImaginar());
	return cArg;
}

complex operator-(complex & cArg1, complex & cArg2)
{
	complex cArg;
	cArg.setReal(cArg1.getReal() - cArg2.getReal());
	cArg.setImaginar(cArg1.getImaginar() - cArg2.getImaginar());
	return cArg;
}

complex operator-(complex & cArg1)
{
	cArg1.setReal(cArg1.getReal * -1);
	cArg1.setImaginar(cArg1.setImaginar * -1);
	return cArg1;
}

std::istream& operator>>(std::istream& stream, complex& arg1)
{
	stream >> arg1.n_real >> arg1.n_imaginar;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, complex& arg1)
{
	char sign = arg1.n_imaginar >= 0 ? '+' : '-';
	stream << arg1.n_real << " " << sign << " " << abs(arg1.n_imaginar) << "i ";
	return stream;
}

int main()
{
	complex numar1, numar2, numar3;
	std::cin >> numar1;
	std::cin >> numar2;
	numar3 = numar1 - numar2;

	std::cout << numar3 << "\n";
	system("PAUSE");
	return 0;
}

