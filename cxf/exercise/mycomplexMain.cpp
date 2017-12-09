#include "mycomplex.h"
#include <iostream>

MyComplex add(const MyComplex &a, const MyComplex &b)
{
	double a1 = a.getReal() + b.getReal();
	double b1 = a.getImag() + b.getImag();
	return MyComplex(a1, b1);
}

int main () {
	MyComplex c1(3, 5);
	MyComplex c2(4, 1.6);

	auto c = c1 + c2;
	std::cout << "("<< c1 <<") + (" << c2 << ") =  (" << c << ")" << std::endl;
	
	std::cout << c1 << c2;

	return 0;
}