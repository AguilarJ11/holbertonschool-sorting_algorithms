#include "sort.h"

/**
 *bubble_sort - sort an array using bubble sort algorithm
 *@array: entry array of integers
 *@size: entry size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t c1, c2;
	int aux;

	for (c1 = 0; c1 < size; c1++)
	{
		for (c2 = 0; c2 < size - 1; c2++)
		{
			if (array[c2] > array[c2 + 1])
			{
				aux = array[c2];
				array[c2] = array[c2 + 1];
				array[c2 + 1] = aux;
				print_array(array, size);
			}
		}
	}

}
