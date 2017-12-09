#include <stdio.h>
int main () {
	/*int a[5];*/
  	int i =-1;
	int a[4] = {0,1,2,3};
	for (i=-1;i<50;i++) {
		printf ("a[%d]=%d\n", i, a[i]);
	}
	//printf("a[500]=%d\n",a[4]);
	return 0;
}
