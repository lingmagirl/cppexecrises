#include <iostream>


void mySwap(int &a, int &b) {
	int &temp = a;
	a = b;
	b = temp;
}

int main () {

	int a = 3; 
	int b = 4;

	mySwap(a, b);

	std::cout << a << "\t" << b << std::endl;

	return 0;
}