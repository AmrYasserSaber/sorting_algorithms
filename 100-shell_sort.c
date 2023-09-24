#include <stddef.h>
#include <stdio.h>
#include "sort.h"
/**
 * initial_value - Give me the initial value of gap
 * @size: array lenght
 * Return: the initial value of gap
*/
int initial_value(int size)
{
	int initial_n  = 1;

	while (initial_n * 3 + 1 <= size)
	{
		initial_n = initial_n * 3 + 1;
	}
	return (initial_n);
}
/**
 * next_value - Give me next value of gap
 * @size: the previous gap value
 * Return: return the next gap.
*/
int next_value(int size)
{
	return ((size - 1) / 3);
}
/**
 * insertion_sort - Apply Insertion algorithm in the function
 * @array: array to sort it.
 * @start: start of loop
 * @step: step of loop
 * @size: the size of array.
*/
void insertion_sort(int *array, int start, int step, int size)
{
	int key = 0;
	int j, temp, i;

	for (i = start; i < size; i += step)
	{
		j = i - step;

		key = array[i];
		while (j >= 0 && array[j] > array[j + step])
		{
			temp = array[j];
			array[j] = array[j + step];
			array[j + step] = temp;
			j -= step;
		}
		array[j + step] = key;

	}
}
/**
 * shell_sort - the main shell_sort algorithm
 * @array: the array to sort it
 * @size: the size of the array
*/

void shell_sort(int *array, size_t size)
{
	int gap = initial_value(size);
	int i;

	if (!array || size < 2)
	{
		return;
	}

	while (gap > 0)
	{
		for (i = 0; i < gap; i++)
		{
			insertion_sort(array, i, gap, size);
		}
		print_array(array, size);
		gap = next_value(gap);
	}
}
