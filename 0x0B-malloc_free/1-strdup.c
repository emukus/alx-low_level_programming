#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a new string
 * that is a duplicate of the string str.
 * @str: pointer to string being duplicated
 *
 * Return: NULL if str = NULL, if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int len, i;

	/* check if str is null */
	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * (len + 1));

	/* check if malloc was success */
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];

	s[len] = '\0';
	return (c);
}
