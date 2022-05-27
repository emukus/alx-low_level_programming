#include "lists.h"

/**
 * sum_listint - function that returns the sum of al the data (n)
 *	of a listint_t linked list
 * @head: pointer to first element
 *
 * Return: sum of all data (n), or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head) /* (head != NULL) */
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
