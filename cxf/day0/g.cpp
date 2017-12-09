#include <stdio.h>

int sqrt (int x) 
{
	int s;

	for (int a = 1; a <= x; a++) {
		if (a*a == x) {
			s = a;
			break;
		}
		else {
			s = -1;
		}
	}

	return s;
}
int main () {
	int a;
 	printf ("请输入一个整数：");
	scanf ("%d", &a);
 	printf ("您输入的数的开方=%d\n",sqrt(a));
	return 0;
}
