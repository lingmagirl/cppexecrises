#include <iostream>

int main()
{
	using namespace std;
	const int d_h = 24;
	const int h_m = 60;
	const int m_s = 60;
	cout << "Enter the number of seconds: ";
	long int s;
	cin >> s;
	cout << s << " seconds = " << s / (m_s * h_m * d_h) << " days, "
	     << (s % (m_s * h_m * d_h)) / (m_s * h_m) << " hours, "
	     << ((s % (m_s * h_m * d_h)) % (m_s * h_m)) / m_s << " minutes, "
	     << ((s % (m_s * h_m * d_h)) % (m_s * h_m)) % m_s << " seconds."
	     << endl;
	return 0;
}
