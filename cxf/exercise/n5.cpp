#include <iostream>
#include <vector>
int main()
{
	using namespace std;

	vector<string> text{"a", "c", " ", "d", "" ,"f"};
	for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it) {
		cout << *it;
	}
	cout << endl;
	return 0;
}