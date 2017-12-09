#include <stdio.h>
#include <math.h>

int main () {
	int a;
	while (1) {
 		printf ("请输入一个整数：");
		scanf ("%d", &a);
 		printf ("您输入的数的开方=%2.1f\n",sqrt(a));
	}
	return 0;	
}
