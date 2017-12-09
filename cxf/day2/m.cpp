#include <stdio.h>

int *getMin (int arr[], int n) {
	int *pmin = arr;
	int min = arr[0];
	
	for (int i = 1; i < n; i++){
		if (min > arr[i]){
			pmin = &arr[i];
		}
		continue;
	}
	return pmin;
}

int *getMin2(int arr[], int n) {
	int min = arr[0];
	int *minPtr = arr;
	for (int *p = arr; p < arr + n; p++) {
		if (*p < min) {
			minPtr = p;		
		}
	}
	return minPtr;
}

int getMax (int arr[], int n) {
	int i;
	int max = arr[0], j = 0;

	for(i = 1; i < n; i++) {
		if(max < arr[i]){
			j = i;	
		}
		continue;
	}
	
	return j;
}
int main () {
	int *b;
	int a[3] = {3, 6, 7};
	b = getMin (a, 3);
	printf ("pmin = %x\n", b);
	return 0;
}
