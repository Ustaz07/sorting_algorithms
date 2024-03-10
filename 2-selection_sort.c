#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: array to be sorted
 * @size: size of the array
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    size_t i, j, min_idx;
    int temp;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
        {
            temp = array[i];
            array[i] = array[min_idx];
            array[min_idx] = temp;
            print_array(array, size);
        }
    }
}

