#include "lists.h"

/**
 * listint_len - function that returns the number of elements in
 *	a linked listint_t list
 * @h: pointer to first node in listint_t
 *
 * Return: void
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0; /* number of nodes */

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
