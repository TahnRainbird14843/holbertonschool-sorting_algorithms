#include "sort.h"

/**
 * selection_sort - sort an array via selection sort
 * @array: input array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	int buf;
	size_t min_index;

	while (j < size)
	{
		min_index = j;
		i = j;

		while (i < size)
		{
			if (array[i] < array[min_index])
				min_index = i;
			i++;
		}

		buf = array[min_index];
		array[min_index] = array[j];
		array[j] = buf;

		print_array(array, size);

		j++;
	}
}
