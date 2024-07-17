#include "search_algos.h"
/**
 * linear_search - It uses linerar search to search an array
 *
 * @size: the size of the array
 * @value: the value to be found
 * @array: the value to be found
 * Return: the index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
