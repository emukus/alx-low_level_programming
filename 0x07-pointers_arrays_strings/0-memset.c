#include "main.h"


/**
 * _memset - function that fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the value to be set
 * @n: number of bytes to be changed
 *
 * Return: s (the changed array with a new value for n bytes
 */

char *_memset(char *s, char *b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
