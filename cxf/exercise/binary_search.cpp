#include <iostream>
#include <vector>

using namespace std;

int search(const vector<int> &v, int number);

int main()
{
	using namespace std;
	cout << "enter the target number:\n";
	int tar_num;
	cin >> tar_num;
	cout << "enter a group of number from small to big: \n";
	vector<int> v;
	int number;
	while (cin >> number) {
		v.push_back(number);
	}

	int location = search(v, tar_num);
	if (location == 0) {
		return 0;
	}
	
	cout << "the target number is  in the " << location << " position." << endl;
	return 0;
}

int search(const vector<int> &v, int number) {
	auto it_bg = v.begin();
	auto it_ed = v.end();
	auto it_mid = it_bg + (it_ed - it_bg) / 2;
	while (it_mid != it_ed && number != *it_mid) {
		if (number < *it_mid) {
			it_ed = it_mid;
			it_mid = it_bg + (it_ed - it_bg) / 2;
		}
		else 
		{
			it_bg = it_mid + 1;
			it_mid = it_bg + (it_ed - it_bg) / 2;
		}
	}
	if (it_mid == it_ed) {
		cout << "The target number is not in the range." << endl;
		return 0;
	}
	int index = it_mid - v.begin();
	return index + 1;
}