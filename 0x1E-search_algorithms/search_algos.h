#ifndef SEARCH_H
#define SEARCH_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define bool int
#define true 1
#define false 0

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int b_search(int *array, int start, int end, int value);
int i_search(int *arr, int st, int ed, int val);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
int advanced_binary(int *array, size_t size, int value);
int b_searc(int *array, int start, int end, int value);

#endif /*SEARCH_H*/
