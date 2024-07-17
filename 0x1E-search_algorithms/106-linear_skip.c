#include "search_algos.h"
/**
 * linear_skip - Performs a search on alinked list using express lanes
 *
 * @list: the list to search
 * @value: the target
 * Return: a pointer to the indexor NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = list, *mark = list;
	size_t i;

	while (temp)
	{
		if (temp->express && temp->express->n >= value)
		{
			printf("Value checked at index [%lu]", temp->express->index);
			printf(" = [%d]\n", temp->express->n);
			printf("Value found between indexes [%lu]", temp->index);
			printf(" and [%lu]\n", temp->express->index);
			i = temp->express->index;
			break;
		}
		if (temp->express == NULL)
		{
			mark = temp;
			while (mark->next)
				mark = mark->next;
			printf("Value found between indexes [%lu]", temp->index);
			printf(" and [%lu]\n", mark->index);
			i = mark->index;
			break;
		}
		temp = temp->express;
		printf("Value checked at index [%lu]", temp->index);
		printf(" = [%d]\n", temp->n);
	}
	while (temp)
	{
		printf("Value checked at index [%lu] ", temp->index);
		printf("= [%d]\n", temp->n);
		if (temp->n == value)
			return (temp);
		if (temp->index == i)
			return (NULL);
		temp = temp->next;
	}
	return (NULL);
}
