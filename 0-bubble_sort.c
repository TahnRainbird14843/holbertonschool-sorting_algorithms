#include "sort.h"

/**
 * bubble_sort - sort an array by bubble sort
 * @array: input array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = size;
	int buf;

	while (j > 0)
	{
		while (i < j - 1)
		{
			if (array[i] > array[i + 1])
			{
				buf = array[i];
				array[i] = array[i + 1];
				array[i + 1] = buf;
				print_array(array, size);
			}
			i++;
		}

		i = 0;
		j--;
	}
}
