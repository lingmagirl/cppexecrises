#include <iostream>

using namespace std;
void time(int x, int y);
int main()
{
	cout << "Enter the number of hours:";
	int h;
	cin >> h;
	cout << "Enter the number of minutes:";
	int m;
	cin >> m;
	time(h, m);
	return 0;
}
void time(int x, int y)
{
	cout << "Time: " << x << ":" << y << endl;
}
