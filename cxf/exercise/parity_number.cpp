#include <iostream>
#include <vector>

using namespace std;

void odevity(vector<int> &ivec);

int main() 
{
	vector<int> ivec;
	int inum;
	cout << "enter a group of number: \n";
	while (cin >> inum) {
		ivec.push_back(inum);
	}

	odevity(ivec);

	for (auto c : ivec) {
		cout << c << " "; 
	}

	cout << endl;
	return 0;
}

void odevity(vector<int> &ivec) {
	
	for (auto &c : ivec) {
		if (c % 2) {
			c = 2 * c;
		}
		else {
			c = c / 2;
		}
	}
}