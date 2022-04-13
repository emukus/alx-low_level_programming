#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: contains value to be compared
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	return ((c >=97 && c <=122) || (c >=65 && c<=90));
}
