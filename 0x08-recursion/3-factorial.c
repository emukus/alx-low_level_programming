#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: int for factorial
 *
 * Return: 0 or -1
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1));
}
