#include <stdio.h>
int f (int n) {
	int a = 1, b = 1, c = 1;
	int m;
	if (n < 3) {
	  	a = b = c = 1;
	}
	else {
 		for (m = 1; m <= n-2 ;m++) {
			c = a + b;
			a = b;
			b = c;	
		}  
	}
	return c;
}
int main () {
	int x;
	printf ("请输入一个整数：");
	scanf ("%d", &x);
	printf ("斐波那契数列第%d项的数值是%d\n", x, f(x));
	return 0;
}
