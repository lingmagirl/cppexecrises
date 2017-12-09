#include <iostream>
#include <vector>

int Inquire_Fibonacci(int n);

int main()
{
	using namespace std;
	while (1) {
		cout << "enter a integer:\n";
		int num;
		cin >> num;
		cout << "the " << num << " in the Fibonacci sequence is " << Inquire_Fibonacci(num) << endl;
	}
	return 0;
}

/*int Inquire_Fibonacci(int n) {
	if (n < 3) {
		return 1;
	}
	else {
		return Inquire_Fibonacci(n - 1) + Inquire_Fibonacci(n - 2);
	}	
}
*/

int Inquire_Fibonacci(int n) {
	using namespace std;
	int i;
	vector<int> ivec(n);
	for (i = 0; i != n; ++i) {
		if (i < 2) {
			ivec[i] = 1;
		}
		else { 
			ivec[i] = ivec[i - 1] + ivec[i - 2];
		}
	}
	return ivec[n - 1];
}

/*
int Inquire_Fibonacci(int n) {
	int a, b, c;
	a = b = 1;
	if (n < 3) {
		return a;
	}
	else {
		for (int i = 0; i != n - 2; ++i) {
			c = a + b;
			int temp = b;
			b = c;
			a = temp;
		}
		return c;
	}
}
*/