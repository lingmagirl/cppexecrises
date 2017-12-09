#include <iostream>

void mySort(int *arr, int n);
int getMinIndex(int *arr, int begin, int end);
int main()
{
	using namespace std;
	cout << "请输入您需要排序的数据个数：";
	int n;
	cin >> n;
	int arr[n];
	cout << "请输入每个数据：\n";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;

	mySort(arr, n);
	for(int i = 0; i < n; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;

	/*int a[5] = {35, 34, 62, 35, 23};
	int x = getMinIndex(a, 0, 4);
	cout << x << endl;*/
	return 0;
}

void mySort(int *arr, int n)
{
	for(int i = 0; i < n; i++){
		int index = getMinIndex(arr, i, n-1);
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}

int getMinIndex(int *arr, int begin, int end)
{
	int min = arr[begin];
	int j = begin;

	for(int i = begin + 1; i <= end; i++){
		if(min > arr[i]) {
			min = arr[i];
			j = i;
		}
	}
	return j;
}