#include <iostream>
#include <vector>
#include <string>

int main()
{
	using namespace std;
	vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		*it = 2 * (*it);
	}
	for (int i = 0; i < 10; i++) {
		cout << v[i] << '\t';
	} 
	cout << endl;
	return 0;
}
