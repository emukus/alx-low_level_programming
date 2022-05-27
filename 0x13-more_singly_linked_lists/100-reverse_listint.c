#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to first elements of listint_t
 *
 * Return: ptr to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *after = NULL;

	while (*head) /* (*head != NULL) */
	{
		after = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = after;
	}

	*head = prev;
	return (*head);
}
