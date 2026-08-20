#include "sort.h"

/**
 * quick_sort_partition - sort a given partition
 * @array: input array
 * @start: index of start of partition
 * @end: index of end of partition 
 * @size: size of whole array
 */
void quick_sort_partition(int *array, size_t start, size_t end, size_t size)
{
	size_t i = start;
	size_t j = start;
	size_t piv = end;
	int tmp;

	if (end - start < 1)
		return;

	while (j < end)
	{
		while (array[i] <= array[piv] && i < piv)
			i++;
		j = i;
		while (array[j] > array[piv])
			j++;
	
		if (i != j)
		{	
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
		}
	}

	if (i > start)
		quick_sort_partition(array, start, i - 1, size);
	if (i < end)
		quick_sort_partition(array, i + 1, end, size);
}

/**
 * quick_sort - sort array using quick sort alg
 * @array: input array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_partition(array, 0, size - 1, size);
}
