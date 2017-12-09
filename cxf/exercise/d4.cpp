#include <iostream>
#include <string>

using namespace std;
struct CandyBay
{
	string brand;
	float weight;
	int calorie;
};

CandyBay snack {"Mocha Munch", 2.3, 350};

int main()
{
	cout << "snack's brand is " << snack.brand << endl;
	cout << "snack's weight is " << snack.weight << endl;
	cout << "snack's calorie is " << snack.calorie << endl;
	return 0;
}