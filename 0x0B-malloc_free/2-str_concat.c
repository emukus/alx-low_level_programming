#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to the newly allocated string concatenation
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	int index, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index; s1[index] || s2[index]; index++)
		len++;

	dest = maloc(sizeof(char) * len);

	if (dest == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		dest[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		dest[concat_index++] = s2[index];

	return (dest);
}
