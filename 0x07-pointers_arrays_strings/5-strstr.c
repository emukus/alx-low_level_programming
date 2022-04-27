#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *r = needle;

		while (*i == *r && *r != '\0')
		{
			i++;
			r++;
		}

		if (*r == '\0')
			return (haystack);
	}

	return (0);
}
