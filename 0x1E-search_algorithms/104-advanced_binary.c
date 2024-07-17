#include "search_algos.h"
/**
 * advanced_binary - This searches an array using binary search
 *
 * @array: the array to be searched
 * @size: the size
 * @value: the value
 * Return: the index or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (b_searc(array, 0, size - 1, value));
}
/**
 * b_searc - This searches an array using binary search
 *
 * @array: the array to be searched
 * @start: the starting index
 * @end: the ending index
 * @value: the value
 * Return: the index or -1
 */
int b_searc(int *array, int start, int end, int value)
{
	int mid, i, mark;

	if (array[start] == value && start == end)
		return (start);
	if (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
			printf("%d%s", array[i], i == end ? "\n" : ", ");
		mid = (end + start) / 2;
		if (array[mid] == value)
		{
			mark = b_searc(array, start, mid - 1, value);
			return ((mark < mid && mark != -1) ? mark : mid);
		}
		if (value < array[mid])
			return (b_searc(array, start, mid - 1, value));
		if (value > array[mid])
			return (b_searc(array, mid + 1, end, value));
	}
	return (-1);

}
