#include "lists.h"

/**
 * print_listint - function that prints all the elments of a listint_t list
 * @h: pointer to the first node of listint_t
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL) 
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
