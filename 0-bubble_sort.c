#include "sort.h"
/**
 * bubble_sort - sorts array ascii order with bubble alghoritm
 * @array:  array to be sorted
 * @size: size of  array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;

				print_array(array, size);
			}
		}
	}
}
