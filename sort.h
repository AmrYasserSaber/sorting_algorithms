#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);

void print_array(int arr[], int arr_length);

void print_list(const listint_t *list);

listint_t *swap_node(listint_t *node, listint_t **list);

void insertion_sort_list(listint_t **list);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);

void swap(int *array, int i1, int i2);

#endif