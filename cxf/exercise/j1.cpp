#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	const int Arrsize = 20;
	char name[Arrsize], dessert[Arrsize];
	cout << "Enter your name:\n";
	cin.get(name, Arrsize).get();
	//cin >> name;
	//cin.getline(name, Arrsize);
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, Arrsize).get();
	//cin >> dessert;
	//cin.getline(dessert, Arrsize);
	cout << "I have some desilioua " << dessert;
	cout << " for you, " << name << endl;
	cout << strlen(name) << endl << strlen(dessert) << endl;
	return 0;
}
