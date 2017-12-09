#include <stdio.h>

/*int sort (int arr[], int n)
 {
	int max = arr[0];
	int j, temp;
	for (int i = 1; i < n; i++){
		if (max < arr[i]) {
			j = i	
		} 	
	} 
	temp = arr[0];
	arr[0] = arr[j];
	arr[j] = temp;
} */
int main () {
	int a, b, c, temp;
	printf ("请输入三个整数：");
	scanf ("%d%d%d", &a, &b, &c);
	if (a < b){
		temp = a;
		a = b;
		b = temp;
		if (a < c) {
			temp = a;
			a = c;
			c = b;
			b = temp;
		}
		else if (c > b) {
			temp = b;
			b = c;
			c = temp;
		}
	}
	else if (a < c) {
		temp = a;
		a = c;
		c = b;
		b = temp;
	}
	else {
		if (b < c) {
			temp = c;
			c = b;
			b = temp;
		}
	}
	printf ("从大到小依次为%d,%d,%d\n", a, b, c);
	return 0;
}
