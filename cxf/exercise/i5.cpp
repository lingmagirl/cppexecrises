#include <iostream>
#include <vector>
#include <string>
#include <cctype>
int main()
{
	using namespace std;
	cout << "Enter five words, separate by space, hit ENTER when finshed: \n";
	vector<string> v(5);
	string word;
	for (decltype(v.size()) n = 0; n != 5; n++) {        //?????????????????
		cin >> word;
		v.push_back(word);
		for (auto &c : v[n]) {
	 		if (islower(c)) {
				c = toupper(c);
			}
		}
	}
	for (vector<string>::size_type n = 0; n != v.size(); n++) {
		cout << v[n] << endl;
	}
	return 0;
}