#ifndef _FRACTION_H_
#define _FRACTION_H_

#include <iostream>

class Fraction {
public:
	Fraction(int above, int below);
	~Fraction();

	void setAbove(int above);
	void setBelow(int below);

	int getAbove() const;
	int getBelow() const;

	Fraction operator *(const Fraction &rhs);
	Fraction operator /(const Fraction &rhs);
	Fraction operator +(const Fraction &rhs);
	Fraction operator -(const Fraction &rhs);


private:
	int m_Above;
	int m_Below;
};

std::ostream &operator <<(std::ostream &os, const Fraction &f);

#endif