#include <stdlib.h>
#include <stdio.h>

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
	int arr_length = size;
	int temp;

	for (int i = 0; i < arr_length; i++)
	{
		for (int j = 1; j < arr_length - i; j++)
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

/**
 * print_array - to print any array we want.
 * @arr:  the array needed to printed
 * @arr_length: the length of array needed to printed
*/
void print_array(int arr[], int arr_length)
{
	for (int k = 0; k < arr_length; k++)
	{
		printf("%d", arr[k]);
		if (k + 1 != arr_length)
		printf(" ", arr[k]);
	}
	printf("\n");
}
