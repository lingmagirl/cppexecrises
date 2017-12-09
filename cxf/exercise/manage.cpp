#include <iostream>
#include "teacher.h"

#include "teacher.h"

int main() 
{
	Teacher t1("236784519", "wangqing", 20000);

	std::cout << t1.getID() << std::endl;
	std::cout << t1.getName() << std::endl;
	std::cout << t1.getSalary() << std::endl;

	return 0;
} 