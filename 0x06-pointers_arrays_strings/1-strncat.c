#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: input paramater string
 * @src: input parameter string
 * @n: times to iterations
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
