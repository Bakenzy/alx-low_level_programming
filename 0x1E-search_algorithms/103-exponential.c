#include "search_algos.h"
/**
 * exponential_search - Searches using exponential search method
 *
 * @array: the array to be searched
 * @size: the array size
 * @value: the array value
 * Return: the right index or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t block;

	if (size == 0 || array == NULL)
		return (-1);
	block  = 1;
	if (array[0] >= value)
	{
		printf("Value checked array[%u] ", 0);
		printf("= [%d]\n", array[0]);
		printf("Value found between indexes [0] and [1]\n");
		return (b_search(array, 0, 1, value));
	}
	while (array[block] <= value && block < size)
	{
		printf("Value checked array[%lu] ", block);
		printf("= [%d]\n", array[block]);
		block *= 2;
	}
	printf("Value found between indexes [%lu] ", block / 2);
	printf("and [%lu]\n", block >= size ? size - 1 : block);
	return (b_search(array, block / 2,
			block >= size ? size - 1 : block, value));
}
/**
 * b_search - This searches an array using binary search
 *
 * @array: the array to be searched
 * @start: the starting index
 * @end: the ending index
 * @value: the value
 * Return: the index or -1
 */
int b_search(int *array, int start, int end, int value)
{
	int mid, i;

	if (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
			printf("%d%s", array[i], i == end ? "\n" : ", ");
		mid = (end + start) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			return (b_search(array, start, mid - 1, value));
		if (value > array[mid])
			return (b_search(array, mid + 1, end, value));
	}
	return (-1);

}
