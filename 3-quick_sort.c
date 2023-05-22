#include "sort.h"

/**
 *quick_sort - a function that sorts using Quick sort algorithm
 *@array: the array to be sorted
 *@size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
    size_t j = 0, i = j - 1, temp;

    if (array)
    {
        for (j = 0; i < size - 1; j++)
        {
            if (array[size] < array[j])
            {
                i++;
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                print_array(array, size);
            }
        }
    }
}
