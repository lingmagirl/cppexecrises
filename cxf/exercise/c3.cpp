#include < iostream>

int sum(int n) {
	return n * (n + 1) / 2;
}

int main() 
{
	using namespace std;
	int n;
	cin >> n;
	cout << sum(n);
	return 0;
}