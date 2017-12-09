#include <iostream>

int main()
{
	using namespace std;
	const float d_m = 60;
	const float m_s = 60;
	cout << "Enter a latitude in degrees, minutes, seconds:" << endl;
	cout << "First enter the degrees:";
	int d;
	cin >> d;
	cout << "Next enter the minutes of arc:";
	int m;
	cin >> m;
	cout << "Finally,enter the seconds of arc:";
	int s;
	cin >> s;
	cout << d << " degrees," << m << " minutes," << s << " seconds = "
	     << d + m / d_m + s / (d_m * m_s) << " degrees" << endl;
	return 0;

}
