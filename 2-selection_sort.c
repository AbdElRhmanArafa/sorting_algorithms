#include "sort.h"
/**
 * selection_sort - sort an array using sorting algorithm
 * @array: unsorted array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int temp;

	if (array == NULL || size == 0)
		return;

	while (i < (size - 1))
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
			{
				index = j;
			}
		}
		if (index != i)
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
		i++;
	}
}
