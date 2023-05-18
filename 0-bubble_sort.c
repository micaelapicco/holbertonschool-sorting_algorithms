#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 * @array: array to be printed
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp, flag = 0;

	if (array && size > 2)
	{
		for (i = 0, j = i + 1; i < size; i++, j++)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				flag = 1;
				print_array(array, size);
			}
			if (flag == 1 && i == size - 2)
			{
				flag = 0;
				bubble_sort(array, size);
			}
		}
	}
}
