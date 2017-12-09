#include <iostream>
#include <string>
#include <cctype>

int main()
{
	using namespace std;
	
	//string s("Hello World!!!");
	/*decltype(s.size()) punct = 0;
	for (auto c : s)
		if (ispunct(c))
			++punct;
	cout << punct << " punctuation characters in " << s << endl;*/
	/*for (auto &c : s)
		c = tolower(c);
	cout << s << endl;*/

	string s("some string");
	/*if (!s.empty())
		s[0] = toupper(s[0]);
	cout << s << endl;*/
	for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
		s[index] = toupper(s[index]);
	cout << s << endl;
	return 0;
}