#include "sort.h"

/**
 * quick_sort - sort array using quick sort alg
 * @array: input array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	size_t small = 0;
	size_t large = 0;
	size_t pivot = size - 1;
	int tmp;

	while (small < size && large < size)
	{
		while (array[small] < array[pivot])
			small++;
		while (array[large] > array[pivot])
			large++;

		if (array[s
