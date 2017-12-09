#include <iostream>

int main()
{
	using namespace std;
	const int f_i = 12;
	const float i_m = 0.0254;
	const float b_kg = 1/2.2;
	cout << "Enter your high:______feets_____inches.";
	int f, i;
	cin >> f;
	cin >> i;
	cout << "Enter your weight:_____bang.";
	int b;
	cin >> b;
	cout << "Your BMI is " << b * b_kg /((f * f_i + i) * i_m) << endl;
	return 0; 
}
