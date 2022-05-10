#include "main.h"
#include <stdlib.h>

/**
 * string_noncat - function that concatenates two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes of s2 to copy
 *
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
		n = size2;

	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

	return (p);
}
