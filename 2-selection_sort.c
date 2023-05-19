#include "sort.h"

/**
 * selection_sort - that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, tmp, Min;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			Min = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[Min] > array[j])
					Min = j;
			}
			if (Min != i)
			{
				tmp = array[i];
				array[i] = array[Min];
				array[Min] = tmp;
				print_array(array, size);
			}
		}
	}
}
