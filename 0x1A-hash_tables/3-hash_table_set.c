#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: ptr to the hash table to add/update the key/value to.
 * @key: the key of the hash table. Cannot be an empty string
 * @value: the value associate with the key. Must be duplicated.
 *		Can be an empty string.
 *
 * Return: 1 if it succeeded. 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx, size;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	idx = key_index((const unsigned char *)key, size);

	if (ht->array[idx] != NULL && strcmp(ht->array[idx]->key, key) == 0)
	{
		ht->array[idx]->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
