#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination memory area
 * @src: source of data to be copied
 * @n: number of bytes to be copied
 *
 * Return: dest (the copied memory with n bytes changed)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int c = n;

	for (i = 0; i < c; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
