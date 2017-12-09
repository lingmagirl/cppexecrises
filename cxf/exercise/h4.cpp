#include <iostream>
#include <string>

using namespace std;
struct CandyBay
{
	string brand;
	float weight;
	int calorie;
};

int main()
{
	CandyBay *candy = new CandyBay [3];
	/*candy[0] = {"smalldragon", 1.5, 300};
	candy[1] = {"moneky", 1.4, 280};
	candy[2] = {"wangwang", 1.3, 310};*/
	for(int i = 0; i < 3; i++) {
		cout << "brand: " << candy[i].brand << " weight: " << candy[i].weight 
		     << " calorie: " << candy[i].calorie <<endl; 
		}
	delete [] candy;
	return 0;
}