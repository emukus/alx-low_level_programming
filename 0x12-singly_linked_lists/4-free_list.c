#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: ptr to first node of a linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
