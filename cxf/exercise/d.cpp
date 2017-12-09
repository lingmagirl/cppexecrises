#include <iostream>

int m_long(int n);

int main()
{
	using namespace std;
	cout << "请输入一个以long为单位的距离：";
	int n;
	cin >> n;
	cout << "您输入的距离=" << m_long(n) << "码" << endl;
	return 0;
}

int m_long(int n)
{
	int m = 220 * n;
	return m;
}
