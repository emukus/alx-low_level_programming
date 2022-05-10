#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: array to be allocated
 * @size: number of bytes to allocate
 *
 * Return: void pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
