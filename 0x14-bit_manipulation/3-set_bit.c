#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: the bit to change
 * @index: index of the bit you want to set, starting from 0
 *
 * Return: 1 if it works, -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
