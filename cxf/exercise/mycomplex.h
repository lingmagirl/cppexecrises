#ifndef _MYCOMPLEX_H_
#define _MYCOMPLEX_H_

#include <iostream>

class MyComplex {
public:
	MyComplex(const double &real, const double &imag);
	~MyComplex();

	void setReal(const double &real);
	void setImag(const double &imag);
	double getReal() const;
	double getImag() const;
/*
	MyComplex add(const MyComplex & rhs)
	{
		double a1 = this->getReal() + rhs.getReal();
		double b1 = this->getImag() + rhs.getImag();
		return MyComplex(a1, b1);
	}
*/	

	void display();

	MyComplex operator +(const MyComplex &rhs) 
	{
		double a1 = this->getReal() + rhs.getReal();
		double b1 = this->getImag() + rhs.getImag();
		return MyComplex(a1, b1);
	}

	MyComplex operator -(const MyComplex &rhs) 
	{
		double a1 = this->getReal() - rhs.getReal();
		double b1 = this->getImag() - rhs.getImag();
		return MyComplex(a1, b1);		
	}
private:
	double m_Real;
	double m_Imag;
};

std::ostream& operator << (std::ostream &os, const MyComplex &comp);

#endif