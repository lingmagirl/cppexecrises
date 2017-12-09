#include <iostream>
#include <vector>

using namespace std;

void myStor(vector<int> &v, decltype(v.size()) n);
int getMinindex(vector<int> v, int begin, int end);
int main ()
{
	vector<int> v;
	cout << "请输入您需要排序的一组数：\n";
	int number;
	while (cin >> number) {
		v.push_back(number);
	}

	myStor(v, v.size());

	for (auto c : v) {
		cout << c << "\t";
	}

	cout << endl;
	return 0;

}

//sort
void myStor(vector<int> &v, decltype(v.size()) n) {
	for (int i = 0; i < n ; ++i) {
		int index = getMinindex(v, i, n-1);
		int temp;
		temp = v[i];
		v[i] = v[index];
		v[index] = temp;
	}
}
int getMinindex(vector<int> v, int begin, int end) {
	int min = v[begin];
	int j = begin;
	for (int i = begin + 1; i <= end; ++i) {
		if (min > v[i]) {
			min = v[i];
			j = i;
		}

	}
	return j;
}
