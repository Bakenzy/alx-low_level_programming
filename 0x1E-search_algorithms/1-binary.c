#include "search_algos.h"
/**
 * binary_search - This searches an array using binary search
 *
 * @array: the array to be searched
 * @size: the size
 * @value: the value
 * Return: the index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (b_search(array, 0, size - 1, value));
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
