#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	const int size = 30;
	const int p = 3;
	char fname[size];
	char lname[size];
	cout << "Enter your fist name: ";
	cin.getline(fname, size);
	cout << "Enter your last name: ";
	cin.getline(lname, size);

	//cout << "Here is the information in a single string: " << strcat(lname, fname) << endl;
	
	char f[p] = ", ";
	char *name1 = strcat(lname, f);
	char *name = strcat(name1, fname);
	cout << "Here is the information in a single string: " << name << endl;
	return 0;
}