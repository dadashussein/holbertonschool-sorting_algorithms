#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	size_t i;
	do
	{
		swapped = 0;
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				int tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = 1;
			}
		}

	} while (swapped);
}