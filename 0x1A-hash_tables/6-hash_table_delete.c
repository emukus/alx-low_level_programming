#include "hash_tables.h"

/**
 * free_list - function that frees a linked list
 * @head: hash_node_t list to be freed
 */

void free_list(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = tmp;
	}
}

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: ptr to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
		free_list(ht->array[i]);
	free(ht->array);
	free(ht);
}
