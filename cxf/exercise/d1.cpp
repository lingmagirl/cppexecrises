#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter the world's population: ";
	long long int pop_w;
	cin >> pop_w;
	cout << "Enter the population of the US: ";
	long long int pop_US;
	cin >> pop_US;
 	cout << "The population of the US is " << (long double) pop_US/ pop_w * 100  
	     << "% of the world population."
	     << endl;
	return 0;
}
