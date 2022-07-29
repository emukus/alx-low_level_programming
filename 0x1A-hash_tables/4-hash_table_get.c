#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with
 *	a key.
 * @ht: the hash table to look into
 * @key: the key to be retrieved
 *
 * Return: the value associate with the element, Or
 *	NULL if the key can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
