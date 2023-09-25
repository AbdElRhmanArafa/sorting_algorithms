#include "sort.h"
/**
 * bubble_sort - print sorted array
 *
 * @array: unsorted array
 * @size: size of unsorted array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
    size_t i;
    int swapped = 0, Temp_swap;

    do
    {
        swapped = 0;
        for (i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                Temp_swap = array[i];
                array[i] = array[i + 1];
                array[i + 1] = Temp_swap;
                swapped = 1;
                print_array(array, size);
            }
        }

    } while (swapped);
}
