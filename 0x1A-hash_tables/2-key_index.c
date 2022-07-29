#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *		using hash_djb2.
 * @key: ptr to the key of the hash table
 * @size: the size of the array of the hash table
 *
 * Return: the index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
