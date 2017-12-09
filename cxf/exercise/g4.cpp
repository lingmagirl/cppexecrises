#include <iostream>

struct pisa
{
	std::string name;
	int diameter;
	float weight;
};

int main()
{
	using namespace std;
	pisa *pi = new pisa;
	cout << "Enter the name of company: ";
	getline(cin, pi->name);
	cout << "Enter the pisa's diameter: ";
	cin >> pi->diameter;
	cout << "Enter the pisa's weight: ";
	cin >> pi->weight;
	cout << pi->name << "  " << pi->diameter << "  " << pi->weight << endl;
	delete pi;
	return 0;
}