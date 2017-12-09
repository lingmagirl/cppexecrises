#include <iostream>
#include <cstring>
#include <string>

int main()
{
	using namespace std;
	string fname;
	string lname;
	cout << "Enter your first name: ";
	getline(cin, fname);
	cout << "Enter your last name: ";
	getline(cin, lname);

	string name = fname + ", " + lname;

/*
	string f = ", ";
	char *name1 = strcat(lname, f);
	char *name = strcat(name1, fname);
*/
	cout << "Here's the information in a single string: " << name << endl;
	return 0;
}