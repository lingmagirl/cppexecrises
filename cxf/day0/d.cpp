#include <stdio.h>

int judge (int x) {
	return (x < 20 && x > 10);
}
int main () {
	int x;
	printf ("请输入一个整数：");
	scanf ("%d", &x);
	if (judge(x)) {
		printf ("是\n");
	}
	else {
		printf ("否\n");
	}
	return 0;
}
