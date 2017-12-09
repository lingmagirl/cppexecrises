#include <iostream>
#include <string>

int main()
{
	using namespace std;
	cout << "What's your first name? ";
	char fname[20];
	cin.getline(fname, 20);
	cout << "What's your last name? ";
	char lname[20];
	cin.getline(lname,20);
	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;
	cout << "What is your age? ";
	short age;
	cin >> age;
	cout << "Name: " << lname << ", " << fname << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
	return 0;
}
		