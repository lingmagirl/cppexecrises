#include "mycomplex.h"
#include <iostream>

MyComplex::MyComplex(const double &real, const double &imag)
	:m_Real(real),m_Imag(imag)
{
	//std::cout << m_Real << "+" << m_Imag << "i" << std::endl;
}
MyComplex::~MyComplex()
{

}

void MyComplex::setReal(const double &real)
{
	m_Real = real;
}
void MyComplex::setImag(const double &imag)
{
	m_Imag = imag;
}
double MyComplex::getReal() const
{
	return m_Real;
}
double MyComplex::getImag() const
{
	return m_Imag;
}

void MyComplex::display()
{
	std::cout << m_Real << "+" << m_Imag << "i" << std::endl;
}

std::ostream& operator << (std::ostream &os, const MyComplex &comp)
{
	os << comp.getReal() << "+" << comp.getImag() << "i" ;
	return os;
}
