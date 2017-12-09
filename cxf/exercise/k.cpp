#include <iostream>

int main()
{
	using namespace std;
	const int a = 12;
	cout << "Enter your high:_____\b\b\b\binches";
	int high;
	cin >> high;
	cout << "Your high is " << high/a << " feets " << high%a << " inches.";
	cout << endl;
	return 0;
}
