#include <iostream>

int main()
{
	using namespace std;
	const int a = 1000;
	const int b = 100;
	const int c = 10;

	for(int i = 0; i < 10; i++) {
		for(int j = 1; j < 10; j++) {
			if(i != j) {
				int x = a * j + b * j + c * i + i;
				cout << x << endl;
			} 
		}
	}
	return 0;
}