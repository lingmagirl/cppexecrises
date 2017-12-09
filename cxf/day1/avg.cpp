#include <stdio.h>

float getAvg (int *start, int *end) 
{
	int i, n;
	float sum = 0;
 	n = end - start;
	for (i = 1; i <= n; i++)
	{
		sum += *start;
		start++;	
	}
	return sum/n;
}
int main ()
{
	int arr[5] = {1, 2, 3, 4, 6};
	printf ("数组元素的平均值=%.2f\n",getAvg(arr, arr+5));
	return 0;
}
