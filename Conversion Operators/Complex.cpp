#include<iostream>
#include"Complex.h"
using namespace std;
Complex::operator double() const
{
	return real_;
}
ostream& operator<<(ostream& oref, const Complex& cref)
{
	oref << cref.real_ << "+" << cref.imag_<<"i";
	return oref;
}
Complex operator+(const Complex& aref, const Complex&bref)
{
	Complex ans;
	ans.real_ = aref.real_ + bref.real_;
	ans.imag_ = aref.imag_ + bref.imag_;
	return ans;
}