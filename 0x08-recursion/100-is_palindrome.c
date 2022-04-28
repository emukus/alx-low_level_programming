#include "main.h"

/**
 * _strlen_recursion - function that recursively checks the length of a string
 * @s: pointer to string
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	else
		return (0);
}

/**
 * compare - function to compare string
 * @s: pointer to string
 * @l: length
 *
 * Return: 0
 */

int compare(char *s, int l)
{
	if (l <= 0)
		return (1);

	if (*s == *(s + (l - 1)))
		return (compare(s + 1 l - 2));

	else
		return (0);
}

/**
 * is_palindrome - function that checks if a string is a palindrome or not
 * @s: string to check
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	return (compare(s, l));
}
