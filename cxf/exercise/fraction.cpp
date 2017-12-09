#include "fraction.h"
#include <iostream>

int gcd(int a, int b);
int lcm(int a, int b);
int max(int a, int b);
int min(int a, int b);

Fraction::Fraction(int above, int below)
{
	if (below != 0){
		m_Above = above;
		m_Below = below;
	}
	else
	{
		std::cout << "分母不可以为零.";
	}
	std::cout << "gouzao" << std::endl;
}
Fraction::~Fraction()
{
	std::cout << "xigou" << std::endl;
}

void Fraction::setAbove(int above)
{
	m_Above = above;
}
void Fraction::setBelow(int below)
{
	m_Below = below;
}
int Fraction::getAbove() const
{
	return m_Above;
}
int Fraction::getBelow() const
{
	return m_Below;
}

Fraction Fraction::operator *(const Fraction &rhs)
{
	int a1 = this->getAbove() * rhs.getAbove();
	int b1 = this->getBelow() * rhs.getBelow();
	return Fraction(a1, b1);
}
Fraction Fraction::operator /(const Fraction &rhs)
{
	int a1 = this->getAbove() * rhs.getBelow();
	int b1 = this->getBelow() * rhs.getAbove();
	return Fraction(a1, b1);
}

Fraction Fraction::operator +(const Fraction &rhs)
{
	int a = this->getBelow();
	int b = rhs.getBelow();
	int c = lcm(a, b);
	int a1 = this->getAbove() * (c / a) + rhs.getAbove() * (c / b);
	return Fraction(a1, c);
}

Fraction Fraction::operator -(const Fraction &rhs)
{
	int a = this->getBelow();
	int b = rhs.getBelow();
	int c = lcm(a, b);
	int a1 = this->getAbove() * (c / a) - rhs.getAbove() * (c / b);
	return Fraction(a1, c);

}

std::ostream  &operator <<(std::ostream &os, const Fraction & f)
{	
	int a = f.getAbove();
	int b = f.getBelow();
	int c = gcd(a, b);
	a = a / c;
	b = b / c;

	if (b == 1) {
		std::cout << a << std::endl;	
	}
	else if (a == 0) {
		std::cout << 0 << std::endl;
	}
	else
	{
	std::cout << a << "/" << b << std::endl; 
	}
	return os;
}

int lcm(int a, int b)
{
	int ma = max(a, b);
	int mi = min(a, b);
	int c = ma - mi;
	for (; 0 != c;) {
		ma = max(c, mi);
		mi = min(c, mi);
		c = ma - mi;
	}
	return (a * b) / mi;
}
int gcd(int a, int b)
{
	int ma = max(a, b);
	int mi = min(a, b);
	int c = ma - mi;
	for (; 0 != c;) {
		ma = max(c, mi);
		mi = min(c, mi);
		c = ma - mi;
	}	
	return mi;
}
int max(int a, int b)
{
	if (a >= b) {
		return a;
	}
	return b;
}
int min(int a, int b)
{
	if (a <= b) {
		return a;
	}
	return b;
}