#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string &str);

int main()
{
	string s;
	cout << "请输入一个字符串：\n";
	getline(cin, s);
	if (p(s)) {
		cout << "是" << endl;
	}
	else {
		cout << "否" << endl;
	}
	return 0;
}

bool isPalindrome(const string &str) {
	for (decltype(str.size()) i = 0; i != str.size() / 2; ++i) {
		if (str[i] == str [str.size() - i - 1]) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}