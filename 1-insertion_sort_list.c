#include <stdio.h>
#include "sort.h"
/**
 * insertion_sort_list - Write a function that sorts a doubly linked
 *  list of integers in ascending order using the Insertion sort algorithm
 * @list:  our linked list
 * Return: this function didn't return anything it only
 * because it make sort in place
*/

void insertion_sort_list(listint_t **list)
{

	listint_t *tmp,  *prev_node, *curr;
	int n;

	if (!*list)
	return;

	tmp = *list;
	curr = tmp->next;

	while (tmp != NULL)
	{
		n = curr->n;
		while (tmp && tmp->next && n < tmp->n)
		{
			*(int *)&tmp->next->n = tmp->n;
			prev_node  = tmp;
			tmp = tmp->prev;
		*(int *)&prev_node->n = n;
		print_list(*list);
		}

		tmp = curr;

		if (curr && curr->next)
			curr = curr->next;
		else
			break;
	}

}
