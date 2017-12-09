#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string s(10, 'c');
	//for (auto &c : s)
	//	c = 'x';

	string :: size_type n = 0;
	while (n < s.size()) {
		s[n] = 'x';
		n++;
	}

	/*for (string :: size_type n = 0; n < s.size(); ++n) {
		s[n] = 'x';
	}*/
	cout << s << endl;
	return 0;
}