#include <iostream>
#include <string.h>
int main()
{
	using namespace std;
	char *dog = "abc";
	char *pig = "efg";
	cout << dog << endl;
	cout << pig << endl;
	cout << strcat(dog, pig) << endl;	
	cout << sizeof dog << endl;
	return 0;
}
