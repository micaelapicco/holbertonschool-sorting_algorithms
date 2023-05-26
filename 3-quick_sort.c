#include "sort.h"

/**
 *swapArray - a function to swap to numbers in an array
 *@array: the array to swap the elements
 *@a1: the first value to swap
 *@a2: the second value to swap
 *@size: the size of the array
 */
void swapArray(int *array, int a1, int a2, int size)
{
	int temp = 0;

	if (array[a1] != array[a2])
	{
		temp = array[a1];
		array[a1] = array[a2];
		array[a2] = temp;
		print_array(array, size);
	}
}

/**
 * quickpivot - a function to divide de pivot
 * @array: the array to be sorted
 * @size: the size of the array
 * @start: the start of the array
 * @end: the end of the array
 * Return: the pivot
 */

int quickpivot(int *array, size_t size, int start, int end)
{
	int j, i, pivot;

	if (array)
	{
		pivot = end;
		i = start - 1;
		for (j = start; j < end; j++)
		{
			if (array[pivot] > array[j])
			{
				i++;
				swapArray(array, j, i, size);
			}
		}
		i++;
		swapArray(array, j, i, size);
	}
	return (i);
}

/**
 * recursionsort - a function to recurse the quick sort
 * @array: the array to be sorted
 * @size: the size of the array
 * @start: the start of the array
 * @end: the end of the array
 */
void recursionsort(int *array, size_t size, int start, int end)
{
	int pivot;

	if (start < end)
	{
		pivot = quickpivot(array, size, start, end);
		recursionsort(array, size, start, pivot - 1);
		recursionsort(array, size, pivot + 1, end);
	}
}

/**
 *quick_sort - a function that sorts using Quick sort algorithm
 *@array: the array to be sorted
 *@size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	int start = 0, end = size - 1;

	recursionsort(array, size, start, end);
}
