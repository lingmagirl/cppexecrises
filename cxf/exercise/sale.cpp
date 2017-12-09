#include <iostream>
#include "dog.h"

int main()
{
	Dog d1("hasiqi", 2000);

	cout << d1;

	std::cout << d1.getKind() << "\t" << d1.getPrice() << std::endl;
	return 0;
}