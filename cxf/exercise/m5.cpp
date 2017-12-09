#include <iostream>
#include <vector>
#include <string>
int main()
{
	using std::cout;
	using std::cin;
	using std::vector;
	using std::endl;
	using std::string;
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10,"hi"};
	auto a = v7.begin();
	auto b = v7.end();
	cout << b - a << endl;
	for (auto a = v7.begin(); a != v7.end(); ++a) {
		cout << *a << endl;
	}
	return 0;
}