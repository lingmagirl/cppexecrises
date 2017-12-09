#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	const int size = 15;
	char name1[size];
	char name2[size] = {"c++owboy"};
	cout << "Howboy!I'm " << name2 << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has " << strlen(name1) 
	     <<" letters and is stored\n" << "in an array of "
	     << sizeof name1 << " byte.\n";
	cout << "Your initial is " << name1[0] << endl;
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: "
	     << name2 << endl;
	return 0;
}
