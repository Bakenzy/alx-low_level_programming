#include "search_algos.h"
#include <math.h>
/**
 * jump_list - Uses jump search to search a linked list
 *
 * @list: the list to be sorted
 * @size: the array lenght
 * @value: the value to be checked
 * Return: the node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t bloc, i;
	listint_t *temp = list, *mark = list;

	if (list == NULL || size == 0)
		return (NULL);
	bloc = sqrt(size);
	i = bloc;
	while (true)
	{
		printf("Value checked array[%lu] ", i);
		while (temp->index != i)
			temp = temp->next;
		printf("= [%d]\n", temp->n);
		if (temp->n >= value)
		{
			printf("Value found between indexes [%lu] ", mark->index);
			printf("and [%lu]\n", temp->index);
			temp = mark;
			break;
		}
		if (i + bloc >= size)
		{
			printf("Value found between indexes [%lu] ", temp->index);
			printf("and [%lu]\n", size - 1);
			break;
		}
		i += bloc;
		mark = temp;
	}
	while (temp != NULL)
	{
		printf("Value checked array[%lu] = [%d]\n", temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		if (temp->index == i)
			return (NULL);
		temp = temp->next;
	}
	return (NULL);

}
