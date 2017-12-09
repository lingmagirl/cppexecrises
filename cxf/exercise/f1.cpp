#include <iostream>

int main()
{
	using namespace std;
	cout << "请输入汽车耗油量（升每百公里）：";
	float oil_consumption;
	cin >> oil_consumption;
	cout << "转换为美国风格的耗油量（英里每加仑）= "
	     << 62.14 / (oil_consumption / 3.875) << endl;
	return 0;
}
