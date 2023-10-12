#include "stddef.h"
#include "sort.h"
#include <stdio.h>
/**
 * partition - Implementation of Lomuto partition.
 * @arr: array that parition applyed on it
 * @l: the min index of array
 * @h: the max index of array.
 * @size: the size of the array
 * Return: Return the new pivot
*/
int  partition(int *arr, int l, int h, int size)
{
	int tmp;
	int j;
	int pivot = arr[h];
	int i = l - 1;

	for (j = l; j < h; j++)
	{
		if (arr[j] < pivot)
		{
			i += 1;
			if (i != j)
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				print_array(arr, size);
			}
		}
	}
	tmp = arr[i + 1];
	if (arr[h] != arr[i + 1])
	{
		arr[i + 1] = arr[h];
		arr[h] = tmp;
		print_array(arr, size);
	}
	return (i + 1);
}
/**
 * main_quick_sort - Implementation of Lomuto partition.
 * @array: array that parition applyed on it
 * @l: the min index of array
 * @h: the max index of array.
 * @size: the size of the array
*/
void main_quick_sort(int *array, int l, int h, int size)
{
	int pivot;

	if (l < h)
	{
		pivot = partition(array, l, h, size);
		main_quick_sort(array, l, pivot - 1, size);
		main_quick_sort(array, pivot + 1, h, size);
	}
}

/**
 * quick_sort - Implementation of Lomuto partition.
 * @array: array that parition applyed on it
 * @size: the size of the array
*/

void quick_sort(int *array, size_t size)
{
	int arr_length = size;

	if (!array || arr_length < 2)
	{
		return;
	}

	main_quick_sort(array, 0, arr_length - 1, arr_length);
}
