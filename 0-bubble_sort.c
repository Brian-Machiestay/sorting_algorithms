#include "sort.h"

/**
 * bubble_sort - implements the bubble sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int n = size;
	int i;
	int j;
	int temp = 0;

	for (i = 0; i < (int) size; i++)
	{
		for (j = 1; j < n; j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
		n -= 1;
	}
}
