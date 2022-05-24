#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * of a list_t list
 * @head: ptr to first node of list_t
 * @str: address of string to insert into new node
 *
 * Return: the address of the new elements, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[length])
		length++;
	new->len = length;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
