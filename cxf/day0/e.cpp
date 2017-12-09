#include <stdio.h>

int sum (int x) {
	int n;
	int s = 0;
	for (n = 1;n <= x; n++) {
		s += n;
	}
	return s;
}
int main () {
	int a;
	printf ("请输入一个整数：");
 	scanf ("%d", &a);
	printf ("1到%d的累加和=%d\n", a, sum(a));
	return 0;
}
