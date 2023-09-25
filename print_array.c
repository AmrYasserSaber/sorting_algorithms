#include "sort.h"
#include <stdio.h>

/**
 * print_array - to print any array we want.
 * @arr:  the array needed to printed
 * @arr_length: the length of array needed to printed
*/
void print_array(int arr[], int arr_length)
{
	int k;
	for (k = 0; k < arr_length; k++)
	{
		printf("%d, ", arr[k]);
		if (k == arr_length - 2){
			printf("%d",arr[k+1]);
			break;
		}
	}
	printf("\n");
}