#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: contains the characters to be searched
 *
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
