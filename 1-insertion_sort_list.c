#include "sort.h"
#include <stdio.h>
/**
 *insertion_sort_list - order a double link list using insertion sort
 *@list: entry pointer of a pointer of an a double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *c_list, *aux_list, *prev_aux;

	c_list = *list;

	puts("hola");

	while (c_list)
	{
		puts("hola");
		if (c_list->next->n < c_list->n)
		{
			puts("Hola");
			aux_list = c_list->next;
			c_list->next = aux_list->next;
			c_list->next->prev = c_list;
			aux_list->next = c_list;
			aux_list->prev = c_list->prev;
			c_list->prev = aux_list;
			*list = aux_list;
		}
		while (aux_list->prev->n < aux_list->n)
		{
			prev_aux = aux_list->prev;
			aux_list->next = prev_aux->next;
			aux_list->next->prev = aux_list;
			prev_aux->next = aux_list;
			prev_aux->prev = aux_list->prev;
			aux_list->prev = prev_aux;
			*list = prev_aux;
		}
		c_list = c_list->next;
	}
}
