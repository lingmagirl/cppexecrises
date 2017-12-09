#include <iostream>

float c_f(float c);

int main()
{
	using namespace std;
	cout <<"Please enter a Celsius value :";
	int c;
	cin >> c;
	cout << c << " degrees Celsius is " << c_f(c) << " degrees Fahrenheit.";
	cout << endl;
	return 0;
}

float c_f(float c)
{
	float f = 1.8 * c + 32.0;
	return f;
}
