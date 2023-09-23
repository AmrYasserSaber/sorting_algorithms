#include <stdio.h>
#include "sort.h"
int main(void) {
	int arr[] = {4, 3, 2, 1};
	int arr_length  = sizeof(arr) / sizeof(arr[0]);
	int i, k, j;

	for (i = 1; i < arr_length; i++){
		k = arr[i];
		j = i -1;

		while(j >= 0 && arr[j] > k) 
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = k;
	print_array(arr, arr_length);
	}
}