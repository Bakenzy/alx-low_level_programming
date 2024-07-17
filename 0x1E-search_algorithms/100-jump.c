#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Searches using jump search
 *
 * @array: the array being searched for
 * @size: the array lenght
 * @value: the target
 * Return: the index or -1 depending on outcome
 */
int jump_search(int *array, size_t size, int value)
{
	size_t block, i;

	if (array == NULL || size == 0)
		return (-1);
	block = sqrt(size);
	i = 0;
	if (array[i] > value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (-1);
	}
	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[(int)(i + block)] >= value ||
				i + block >= size)
		{
			printf("Value found between indexes [%lu] ", i);
			printf("and [%lu]\n", i + block);
			break;
		}
		i += block;
	}
	block += i;
	for (; i <= block; i++)
	{
		if (i >= size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
