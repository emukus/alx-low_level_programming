#include "main.h"

/**
 * evaluate - function that checks if n has a natural square root
 * @a: base int
 * @b: exponent int
 *
 * Return: 0
 */

int evaluate(int a, int b)
{
	if (b * b == a)
		return (b);

	else if (b * b > a)
		return (-1);

	else
		return (evaluate(a, b + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: base int
 *
 * Return: 0 or -1
 */

int _sqrt_recursion(int n)
{
	return (evaluate(n, 0));
}
