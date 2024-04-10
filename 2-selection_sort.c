#include "sort.h"
#include <stdio.h>
/**
 *selection_sort - apply selection sort for an array
 *@array: entry int array
 *@size: entry array size
 */

void selection_sort(int *array, size_t size)
{
	size_t c1, c2, pos, aux;

	for (c1 = 0; c1 < size; c1++)
	{
		pos = c1;

		for (c2 = c1; c2 < size; c2++)
		{
			if (array[c2] < array[pos])
			{
				aux = array[c2];
				pos = c2;
			}
		}
		if (pos != c1)
		{
			array[pos] = array[c1];
			array[c1] = aux;
			print_array(array, size);
		}
	}
}
