#include "main.h"

/**
 * prime - function that checks if number is prime
 * @a: base int
 * @b: exponent
 *
 * Return: 0
 */

int prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
		return (0);

	else if (a == b)
		return (1);

	else
		return (prime(a, b + 1));
}

/**
 * is_prime_number - function that checks if an input integer is
 * a prime number
 * @n: base int
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
