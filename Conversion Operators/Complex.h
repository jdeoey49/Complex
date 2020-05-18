//conversion operator cast operator
#pragma once
class Complex
{
	friend Complex operator+(const Complex& aref, const Complex&bref);
	friend std::ostream& operator<<(std::ostream& oref, const Complex& cref);

  public:
  Complex(): real_(0),imag_(0){}
  Complex(double real, double imag):real_(real),imag_(imag){}
  Complex(int i) :real_(double(i)),imag_(0.0){}//int -> Complex
  Complex(double d) :real_(d), imag_(0.0) {};//double ->Complex
  //conversion operator
  operator double() const;
  private:
  double real_;
  double imag_;
};