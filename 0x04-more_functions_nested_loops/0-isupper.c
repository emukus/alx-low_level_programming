#include "main.h"

/**
 * _isupper - function that checks for uppercase letters
 * @c: contains the character value
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
