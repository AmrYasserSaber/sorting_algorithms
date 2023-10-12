#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * get_max- Get the max element in array.
 * @array: array to find max element in it.
 * @size: the size of array.
 * Return: Return the max element in array
*/

int get_max(int *array, int size)
{
	int i;
	int max = array[0];

	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return (max);
}
/**
 * sort_counting_array - sort the array using counting array.
 * @count: the counting array prepare.
 * @array: the array needed to sort
 * @size: the size of array.
*/

void sort_counting_array(int *count, int *array, int size)
{
	int i = 0;
	int go_from_main_array;
	int go_from_count;
	int *sallow_copy = malloc(sizeof(int) * size);

	for (i = 0; i < size; i++)
	{
		sallow_copy[i] = array[i];
	}
	/*print_array(sallow_copy, size);*/
	for (i = 0; i < size; i++)
	{
		go_from_main_array = sallow_copy[i];
		go_from_count = count[go_from_main_array];
		array[go_from_count - 1] = go_from_main_array;
		/*printf("current is %d %d\n", go_from_main_array, go_from_count);*/
		count[go_from_main_array]--;
	}
	free(sallow_copy)
}
/**
 * counting_array - use to create a counting array.
 * @array: the array from it we can create a counting array.
 * @size: the size of array.
 * @max: max element in array.
*/
void counting_array(int *array, int size, int max)
{
	int *count = malloc(sizeof(int) * (max + 1));
	int i;

	for (i = 0; i < size; i++)
	{
		count[array[i]] += 1;
	}

	for (i = 1; i < max + 1; i++)
	{
		count[i] += count[i - 1];
	}

	print_array(count, max + 1);
	sort_counting_array(count, array, size);
	free(count);

}
/**
 * counting_sort - The main couting sort function
 * @array: the array we need to sort it using counting sort
 * @size: the size of array.
*/
void counting_sort(int *array, size_t size)
{
	int max;
	int array_size = size;

	if (array == NULL || size < 2)
		return;

	max = get_max(array, array_size);
	counting_array(array, array_size, max);
}
