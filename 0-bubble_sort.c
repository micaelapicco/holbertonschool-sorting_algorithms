#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 * @array: array to be printed
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, tmp, flag = 0;

	if (array && size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				flag = 1;
				print_array(array, size);
			}
			if (size <= 2)
				break;
			if (flag == 1 && i == size - 2)
			{
				flag = 0;
				bubble_sort(array, size);
			}
		}
	}
}
