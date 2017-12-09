#include <iostream>
#include <vector>

using namespace std;
int getMinIndex(vector<int> ivec, int begin, int end);
void mySort(vector<int> &iv);

int main()
{
	 vector<int> v;
	 int num;
	 std::cout << "Enter a group of number:\n";
	 while(std::cin >> num) {
	 	v.push_back(num);
	 }
	 mySort(v);
	 std::cout << "Sort by small to large:\n";
	 for(auto c : v) {
	 	std::cout << c << "  ";
	 } 
	 std::cout << "\n";
	 return 0;
}

int getMinIndex(vector<int> ivec, int begin, int end)
{
	int minIndex = begin;
	int minnum = ivec[begin];
	for(decltype(ivec.size()) i = begin + 1; i != end + 1; ++i) {
		if (minnum > ivec[i]) {
			minIndex = i;
			minnum = ivec[i];
		}
	}
	return minIndex;
}

void mySort(vector<int> &iv)
{
	for (decltype(iv.size()) i = 0; i != iv.size(); ++i) {
		int index = getMinIndex(iv, i, iv.size() - 1);
		int temp = iv[i];
		iv[i] = iv[index];
		iv[index] = temp; 
	}
}