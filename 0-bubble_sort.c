#include <stdlib.h>
#include <stdio.h>
#include "sort.h"


/**
 * bubble_sort - Implementation of BubbleSort Using C language
 * @array: the array needed to sorted.
 * @size:  the size of the array
 * Return: didn't return anything
 * It make a sorted in place so we didn't need to return the array.
*/
void bubble_sort(int *array, size_t size)
{
	int arr_length = size;
	int temp;
	int i;
	int j;

	if (array == NULL)
	return;

	for (i = 0; i < arr_length; i++)
	{
		for (j = 1; j < arr_length - i; j++)
		{
			if (array[j] < array[j - 1])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
				print_array(array, arr_length);
			}
		}
	}
}
