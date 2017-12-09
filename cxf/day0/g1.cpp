#include <stdio.h>

int sqrt (int n) 
{
	for (int i =  0; i <= n; i++) {
		if (i * i == n) {
			return i;
		}
	}

	return -1;
}

int main () {
	int a;
	while (1) {
 		printf ("请输入一个整数：");
		scanf ("%d", &a);
 		printf ("您输入的数的开方=%d\n",sqrt(a));
	}
	return 0;	
}
