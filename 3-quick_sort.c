#include "sort.h"

/**
 *swapArray - a function to swap to numbers in an array 
 *@a1: the first value to swap
 *@a2: the second value to swap
 */
void swapArray(int *array, size_t a1, size_t a2)
{
size_t temp = 0;
if (a1 != a2)
{
temp = array[a1];
array[a1] = array[a2];
array[a2] = temp;
}
}


/**
 *quick_sort - a function that sorts using Quick sort algorithm
 *@array: the array to be sorted
 *@size: the size of the array
 */

size_t quickpivot(int *array, size_t size, size_t start, size_t end)
{
     size_t j, i, pivot;

    if (array)
    {
        pivot = end;
        i = start -1;
        for (j = start; j < end; j++)
        {
            if (array[pivot] > array[j])
            {
                i++;
                swapArray(array,j,i);
                print_array(array, size);
            }
        }
        i++;
        swapArray(array,j,i);
        print_array(array, size);
    }
    return(i);
}

void quick_sort(int *array, size_t size)
{
    size_t start = 0, end = size - 1;
    end = quickpivot(array, size, start, end);
    start = quickpivot(array, size, start, end);
    quickpivot(array, size, start, size -1);
}
