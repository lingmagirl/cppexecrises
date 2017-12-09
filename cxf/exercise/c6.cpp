#include <iostream>
#include <vector>

int main()
{
	using namespace std;
	vector<int> v;
	int number;
	cout << "Enter a group of number from small to big: \n";
	while (cin >> number) {
		v.push_back(number);
	}

	char x[20];
	cin.getline(x, 20);
	int n;
	cout << "enter a number: \n";
	cin >> n;

	vector<int>::iterator it_begin = v.begin();
	vector<int>::iterator it_end = v.end();
	vector<int>::iterator it_mid = it_begin + (it_end - it_begin) / 2 ;

	while (it_mid != it_end && n != *it_mid) {
		if (n < *it_mid) {
			it_end = it_mid;
			it_mid = it_begin + (it_end - it_begin) / 2;
		}
		else 
		{ 
			it_begin = it_mid + 1;
			it_mid = it_begin + (it_end - it_begin) / 2;
		
		}
	}
	cout << n << " is the " << it_mid - v.begin() + 1 << endl;
	return 0;
}