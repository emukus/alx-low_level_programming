#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 *	listint_t list
 * @head: pointer
 *
 * Return: the head node's data (n), or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (num);
}
