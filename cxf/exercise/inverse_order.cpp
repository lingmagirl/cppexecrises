#include <iostream>
#include <string>
#include <vector>

int main()
{
	using namespace std;
	
	cout << "Please input the number of words in the sentence: \n";
	vector<string>::size_type n;
	cin >> n;
	vector<string> v(n);
	cout << "Please enter a sentence: \n";

	for (auto &c : v) {
		cin >> c;
	}
	
	for (vector<string>::size_type i = n; i > 0; --i) {
		cout << v[i - 1] << "  ";
	}

	cout << endl;
	return 0;
}