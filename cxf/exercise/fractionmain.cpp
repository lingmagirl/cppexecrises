#include "fraction.h"
#include <iostream>

int lcm(int a, int b);
int max(int a, int b);
int min(int a, int b);

int main()
{
	Fraction f1(2, 3);
	Fraction f2(4, 3);
	std::cout << f1 + f2 << std::endl;
	std::cout << f2 << std::endl;
	/*
	std::cout << f1 + f2 << std::endl;
	std::cout << f1 - f2 << std::endl;
	std::cout << f1 * f2 << std::endl;
	std::cout << f1 / f2 << std::endl;
	*/
	return 0;
}