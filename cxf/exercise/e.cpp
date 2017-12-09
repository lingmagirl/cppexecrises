#include <iostream>

using namespace std;
string a();
string b();
int main()
{
	cout << a() << endl;
	cout << a() << endl;
	cout << b() << endl;
	cout << b() << endl;
	return 0;
}

string a()
{
	string a;
	a = "Three blind mice";
	return a;
}

string b()
{
	string a;
	a = "See how they run";
	return a;
}

