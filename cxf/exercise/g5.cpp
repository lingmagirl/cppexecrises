#include <iostream>
#include <string>
#include <cctype>

int main()
{
	using namespace std;
	string s;
	cout << "enter a string with punctuation: ";
	getline(cin, s);
	string result;
	for (decltype(s.size()) index = 0; index <   s.size(); index++) {
		if (!ispunct(s[index])) {
			result += s[index];
		}
	}
	cout << result << endl;
	return 0;
}