#include "search_algos.h"
/**
 * interpolation_search - Searches using the said algorithm
 *
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value
 * Return: -1 or index depending on outcome
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (i_search(array, 0, size - 1, value));
}
/**
 * i_search - searches using interpolation
 * @arr: the array to be searched
 * @st: the starting index
 * @ed: the ending index
 * @val: the value
 * Return: the index or -1 if it's not found
 */
int i_search(int *arr, int st, int ed, int val)
{
	size_t pos;

	pos = st + (((double)(ed - st) / (arr[ed] - arr[st])) *
			(val - arr[st]));
	printf("Value checked array[%lu] ", pos);
	if (st <= ed && val >= arr[st] && val <= arr[ed])
	{
		printf("= [%d]\n", arr[pos]);
		if (arr[pos] == val)
			return (pos);
		if (arr[pos] < val)
			return (i_search(arr, pos + 1, ed, val));
		if (arr[pos] > val)
			return (i_search(arr, st, pos - 1, val));
	}
	printf("is out of range\n");
	return (-1);
}
