#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable guest = 
	{
		"Glorious Gloria",
		1.88,
		29.99
	};
	inflatable pal = 
	{
		"Audaciou Arthur",
		3.12,
		32.99
	};
	
	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "\n";
	cout << "You have both for $" << guest.price + pal.price << '\n';
	return 0;
}