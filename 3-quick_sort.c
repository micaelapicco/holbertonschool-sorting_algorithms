#include "sort.h"

/**
 *swapArray - a function to swap to numbers in an array 
 *@a1: the first value to swap
 *@a2: the second value to swap
 */
void swapArray(int *array, int a1, int a2)
{
size_t temp;

temp = array[a1];
array[a1] = array[a2];
array[a2] = temp;
}


/**
 *quick_sort - a function that sorts using Quick sort algorithm
 *@array: the array to be sorted
 *@size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
    size_t j = 0, i = j - 1, pivot = size;

    if (array)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[pivot] > array[j])
            {
                i++;
                swapArray(array,i, j);
                print_array(array, size);
            }
        }
    }
}
