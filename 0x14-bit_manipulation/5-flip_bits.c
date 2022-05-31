#include "main.h"

/**
 * flip_bits - function that returns the no of bits you would need to
 *	flip to get from one number to another
 * @n: initial number
 * @m: number to flip n to
 *
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
