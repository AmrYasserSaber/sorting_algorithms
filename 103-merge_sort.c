#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * copy_print_array - copy_print_array
 * @arr: the array to make sort for it
 * @arr_size: the size of the array
 * @array: main array
 * @increment: increment value
*/

void copy_print_array(int *arr, int arr_size, int *array, int increment)
{
	int i = 0;

	for (i = 0; i < arr_size; i++)
		arr[i] = array[i + increment];
}
/**
 * print_needed - print need
 * @arr1: array 1
 * @arr2: array 2
 * @arr1_size: number of elements
 * @arr2_size: number of elements
*/
void print_needed(int *arr1, int *arr2, int arr1_size, int arr2_size)
{
	printf("Merging...\n");
	printf("[Left]: ");
	print_array(arr1, arr1_size);
	printf("[Right]: ");
	print_array(arr2, arr2_size);
}
/**
 * merge_array - array to merge
 * @array: the array
 * @l: left size of array
 * @m: size mid indx
 * @r: right size of array
*/
void merge_array(int *array, int l, int m, int r)
{
	int arr1_size = m - l + 1;
	int arr2_size = r  - m;
	int arr1_pointer, arr2_pointer = 0;
	int k = 0;
	int *arr1 = malloc(sizeof(int) * arr1_size);
	int *arr2 = malloc(sizeof(int) * arr2_size);

	copy_print_array(arr1, arr1_size, array, l);
	copy_print_array(arr2, arr2_size, array, m + 1);
	print_needed(arr1, arr2, arr1_size, arr2_size);

	while (arr1_pointer < arr1_size && arr2_pointer < arr2_size)
	{
		if (arr1[arr1_pointer] > arr2[arr2_pointer])
		{
			array[k] = arr2[arr2_pointer];
			arr2_pointer++;
		}
		else
		{
			array[k] = arr1[arr1_pointer];
			arr1_pointer++;
		}
		k++;
	}
	while (arr1_pointer < arr1_size)
	{
		array[k] = arr1[arr1_pointer];
		arr1_pointer++;
		k++;
	}

	while (arr2_pointer < arr2_size)
	{
		array[k] = arr2[arr2_pointer];
		arr2_pointer++;
		k++;
	}
	printf("[Done]: ");
	print_array(array, r + 1);
}
/**
 * divide_array - divide the array
 * @array: array to divide
 * @l: left of array
 * @r: right of array
 * @size: size of array.
*/
void divide_array(int *array, int l, int r, int size)
{
	if (l < r)
	{
		int m = (r + l) / 2;

		divide_array(array, l, m, size);
		divide_array(array, m + 1, r, size);
		merge_array(array, l, m, r);
	}
}
/**
 * merge_sort - merge array
 * @array: array
 * @size: size of array.
*/
void merge_sort(int *array, size_t size)
{
	divide_array(array, 0, size - 1, size);
}
