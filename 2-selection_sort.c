#include "sort.h"

/**
 * selection_sort - function that sorts an array
 * of integers in ascending order using the Selection sort algorithm
 * @list: Dobule linked list to sort
 */


void selection_sort(int *array, size_t size)
{
	size_t i, temp, j, min;
	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		temp = array [i];
		array[i]=array[min];
		array[min]=temp;
		print_array(array, size);
	}
}