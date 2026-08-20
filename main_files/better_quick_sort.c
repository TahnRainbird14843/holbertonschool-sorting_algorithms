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
	size_t j = end - 1;
	size_t piv = end;
	int tmp;

	if (end - start <= 1)
		return;

	while (i < j)
	{
		if (array[i] > array[piv] && array[j] <= array[piv])
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
		}
		if (array[i] <= array[piv])
			i++;
		if (array[j] > array[piv])
			j--;
	}

	if (array[i] <= array[piv])
		i++;

	if (i != piv)
	{
		tmp = array[piv];
		array[piv] = array[i];
		array[i] = tmp;
		print_array(array, size);
	}
	if (i > start + 1)
		quick_sort_partition(array, start, i - 1, size);
	if (i + 1 < end)
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
