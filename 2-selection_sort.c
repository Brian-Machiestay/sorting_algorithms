#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 * @size: the size of the array
 * @array: the array to sort
 *
 */
void selection_sort(int *array, size_t size)
{
	int i;
	int j;
	int mindex;
	int temp;
	int sizet = size;

	for (i = 0; i < sizet; i++)
	{
		mindex = i;
		for (j = i + 1; j < sizet; j++)
		{
			if (array[j] < array[mindex])
				mindex = j;
		}
		if (mindex != i)
		{
			temp = array[i];
			array[i] = array[mindex];
			array[mindex] = temp;
			print_array(array, size);
		}
	}
}
