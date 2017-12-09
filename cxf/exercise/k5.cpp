#include <iostream>
#include <vector>

int main()
{
	using namespace std;
	cout << "Enter a group of numbers,separate by space ,end with 0:\n";
	vector<int> v;
	int number;
	while (cin >> number) {
		v.push_back(number);
	}

	cout << v.size() << endl;

	for (decltype(v.size()) index = 0; index < (v.size() / 2); index++) {
		cout << v[2*index] + v[2*index + 1] << "\t";
	}
	cout << endl;
	return 0;
}