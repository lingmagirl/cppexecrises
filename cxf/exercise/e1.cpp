#include <iostream>

int main()
{
	using namespace std;
	cout << "请输入驱车里程（英里）：";
	int mileage;
	cin >> mileage;
	cout << "请输入使用汽油量（加仑）：";
	int oil_consumption;
	cin >> oil_consumption;
	cout << "您的汽车耗油量为" << (float) mileage / oil_consumption 
	     << "英里每加仑." << '\n';
	return 0;
}
