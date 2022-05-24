#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of
 * a list_t list
 * @head: ptr to the first element in list_t
 * @str: string to be added to the linked list_t
 *
 * Return: the address of the new elements, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(head) = new;

	return (*head);
}
