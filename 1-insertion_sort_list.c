#include "sort.h"

/**
 *
 *
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *c_list, *aux;

	c_list = *list;

	while (c_list->next)
	{
		while (c_list->next->n < c_list->n)
		{
			aux = c_list->next;
			c_list->next->prev = c_list->prev;
			c_list->next->next = c_list;
			c_list->prev = aux;
			c_list->next = aux->next;
			print_list(*list);
		}
		c_list = c_list->next;	
	}

}
