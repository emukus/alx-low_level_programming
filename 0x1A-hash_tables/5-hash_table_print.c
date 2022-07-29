#include "hash_tables.h"

/**
 * hash_table_print - functon that prints a hash table
 * @ht: ptr to the hash table
 *
 * Description: key/value pairs are printed in the order
 *	of appearance in the array of the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0, idx = 0;

	if (ht != NULL)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			node = ht->array[idx];
			while (node != NULL)
			{
				if (i != 0)
					printf(", ");
				i = 1;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}
