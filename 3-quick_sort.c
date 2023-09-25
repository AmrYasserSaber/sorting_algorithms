#include "sort.h"


/**
 * swap - swap two elements in array
 * @array: the array .
 * @i:  the index of the first element
 * @j:  the index of the second element
 * Return: didn't return anything
 * It make a swap in place so we didn't need to return the array.
*/

void swap(int *array, int i, int j)
{
	int temp = array[i];

	array[i] = array[j];
	array[j] = temp;
}


/**
 * quick_sort - Implementation of QuickSorting Using C language
 * @array: the array needed to sorted.
 * @size:  the size of the array
 * Return: didn't return anything
 * It make a sorted in place so we didn't need to return the array.
*/

void quick_sort(int *array, size_t size)
{
	int pivot, right, left, flag,*abs;

	if (size <= 2)
	{
		if(size==2)
			swap(array,0,1);
		return;
	}

	pivot = array[(size - 1) / 2];
	swap(array, (size - 1) / 2, size - 1);
	right = size - 2;
	left = 0;
	flag = 0;
	print_array(array,size);

	while (right > left)
	{
		flag = 1;
		if (array[left] < pivot)
		{
			left++;
			continue;
		}
		if (array[right] > pivot)
		{
			right--;
			continue;
		}
		swap(array, right, left);
	}

	if (flag)
	{
		swap(array, left, size - 1);
	}
	quick_sort(array, left);
	quick_sort(array + left + 1, size - left - 1);
}
