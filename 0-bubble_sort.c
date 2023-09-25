#include "sort.h"

void print_array(int arr[], int arr_length);

/**
 * bubble_sort - Implementation of BubbleSort Using C language
 * @array: the array needed to sorted.
 * @size:  the size of the array
 * Return: didn't return anything
 * It make a sorted in place so we didn't need to return the array.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, temp, j;
	if (size < 2)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < (size - 1) && array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}

