#include<iostream>
#include"Complex.h"
using namespace std;
int main()
{
	Complex a(1,1), b(2,2), c;
	c = Complex(3);					//conversion constructor Complex(int)
	cout << "\nc=Complex(3)=" << c;
	c = 3;							//conversion constructor Complex(int)
	cout << "\nc=3=" << c;
	c = Complex(4.6);				//conversion constructor Complex(double)
	cout << "\nc=Complex(4.6)=" << c;
	c = 4.6;						//conversion constructor Complex(double)
	cout << "\nc=4.6=" << c;
	c = a + Complex(3);				//Complex + Complex(int)
	cout << "\na=" << a << "\tc=a+Complex(3)=" << c;
	c = double(a) + 4.6;			//double(Complex)+double
	cout << "\na=" << a << "\tc=a+Complex(4.6)=" << c;
	c = 3 - double(b);				//double-doubel(Complex)
	cout << "\nb=" << b << "\tc=Complex(3)-b=" << c;
	c = Complex(3) + Complex(4.6);	//Complex(int)+Complex(double)
	cout << "\nc=Complex(3)+Complex(4.6)=" << c;
	c = Complex(3 + 4.6);			//Complex(double(int)+double)
	cout << "\nComplex(3+4.6)=" << c << endl;
	return 0;
}