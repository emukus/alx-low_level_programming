#include "main.h"

/**
 * wildcmp - function that compares two strings and returns 1 if the strings
 * can be considered identical
 * @s1: first string to compare
 * @s2: second string to compare(can contain the special character *)
 *
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));

		else
			return (*s2 == '\0');
	}

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 2));
	else
		return (0);
}
