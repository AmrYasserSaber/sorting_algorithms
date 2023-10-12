#include <stddef.h>
#include <stdbool.h>
#include "sort.h"

/**
 * selection_sort - Implementation of selection_sort using C language
 * @array: the array needed to sorted
 * @size: the size of the array
 * Return: Didn't Return anything it sort array in place
*/
void selection_sort(int *array, size_t size)
{
	int arr_length = size;
	int i = 0;
	int j = 0;
	int min, tmp;
	bool flag = false;

	if (array == NULL)
		return;


	for (i = 0; i < arr_length; i++)
	{
		min = i;
		for (j = i; j < arr_length; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
				flag = true;
			}
		}
		if (flag)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, arr_length);
			flag = false;
		}
	}
}
