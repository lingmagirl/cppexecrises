#include <stdio.h>

void change (int * xp, int * yp){
	int temp = 0;
	temp = *xp;
	*xp = *yp;
 	*yp = temp;
	return;

}

int  main () {
	int a = 0, b = 0;
	int * ap = NULL;
	int * bp = NULL;
	printf ("请输入两个整数：");
	scanf ("%d", &a);
	scanf ("%d", &b);
	ap = &a;
	bp = &b;
	printf ("a=%d\tb=%d\n", a, b);
	change (ap, bp);
	printf ("a=%d\tb=%d\n", a, b);
	return 0;
}

