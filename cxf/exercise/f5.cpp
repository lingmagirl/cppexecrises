#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string s(10, 'c');
	for (char &c : s)
		c = 'x';
	cout << s << endl;
	return 0;
}