#include "lists.h"

/**
 * list_len - function that returns the number of elements in
 * a linked list_t list
 * @h: ptr to linked list list_t
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
