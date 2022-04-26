#include "main.h"

/**
 * _strchr: function that locatate a character in a string
 * @s: the string to search
 * @c: the character to be found
 *
 * Return: 0 (the first occurrence of c in s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
