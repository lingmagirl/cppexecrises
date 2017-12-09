#include <iostream>
#include <vector>

using namespace std;

vector<int> statistics(const vector<int> &ivec);

int main()
{
	vector<int> iv;
	int inum;
	while (cin >> inum) {
		iv.push_back(inum);
	}

	vector<int> iv_out = statistics(iv);

	for (vector<int> :: size_type i = 0; i != iv_out.size(); i++) {
		if (iv_out[i] != 0) {
			cout << i << ": " << iv_out[i] << endl;
		}
	}
	return 0;
}


vector<int> statistics(const vector<int> &ivec) {
	vector<int> v(100, 0);
	for (const auto &c : ivec) {
		if (c < 100 && c >= 0) {
			v[c]++;
		}
	}

	return v;
}

/*
vector<int> statistics(const vector<int> &ivec) {
	vector<int> v(100, 0);
	for (vector<int> :: size_type i = 0; i != 100; ++i) {
		for (auto c : ivec) {
			if (c == i) {
				++v[i];
			}
		}
	}
	return v;
}
*/