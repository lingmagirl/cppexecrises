#include <iostream>
#include <vector>

using namespace std;

void even_Delete(vector<int> &ivec);

int main() {
	vector<int> iv;;
	int inum;
	cout << "enter a group of number:\n";
	while(cin >> inum) {
		iv.push_back(inum);
	}

	even_Delete(iv);
	for (auto v : iv) {
		cout << v << " ";
	}
	cout << endl;
	return 0;
}

void even_Delete(vector<int> &ivec) {

}
