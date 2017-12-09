#include <iostream>
#include <string>

int transform(char *arr);

int exp(int a, int b);

int main(int argc, char **argv) {
	using namespace std;
	int sum = 0;
	for (int i = 1; i != argc; ++i) {
		int num = transform(argv[i]);
		sum += num;   
	}
	cout << sum <<endl;
	return 0;
}

int transform(char *arr) {
	std::string s = arr;
	int num = 0;
	for (decltype(s.size()) i = 0; i != s.size(); ++i) {
		int n = s.size() - i - 1;
		num += exp(10, n) * (s[i] - '0');
	}
	return num;
}

int exp(int a, int b) {
	int result = 1;
	if (b == 0) {
		return 1;
	}
	else {

		for (int i = 1; i <= b; ++i){
			result *= a;
		}
		return result;	
	}	
}