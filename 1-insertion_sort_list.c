#include "sort.h"
/**
 *insertion_sort_list - order a double link list using insertion sort
 *@list: entry pointer of a pointer of an a double linked list
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *c_list, *aux_list, *prev_aux;

    c_list = (*list)->next;

    while (c_list)
    {
        aux_list = c_list;
        prev_aux = c_list->prev;

        while (prev_aux && aux_list->n < prev_aux->n)
        {
            if (aux_list->next)
                aux_list->next->prev = prev_aux;
            prev_aux->next = aux_list->next;
            aux_list->next = prev_aux;
            aux_list->prev = prev_aux->prev;
            prev_aux->prev = aux_list;

            if (aux_list->prev)
                aux_list->prev->next = aux_list;
            else
                *list = aux_list;

	    print_list(*list);

            prev_aux = aux_list->prev;
        }

        c_list = c_list->next;
    }
}
