#include "sort.h"

/**
 * lomuto partition - divides the array lomuto'ly
 * @array: the array
 * @lo: the lower bound
 * @hi: the upper bound
 */
void lomuto(int *array, int lo, int hi)
{
	int pivot = array[lo];
	int current = lo;
	int i;
	int temp;

	for (i = lo + 1; i < hi; i++)
	{
		if (array[i] < pivot)
		{
			current ++;
			temp = array[i];
			array[i] = array[current];
			array[current] = temp;
		}
	}
	temp = array[current];
	array[current] = pivot;
	array[lo]= temp;
}

/**
 * quick_sort - sort quickly
 * @array: the array
 * @size: the size
 */
void quick_sort(int *array, size_t size)
{
	lomuto(array, 0, (int)size);
}
