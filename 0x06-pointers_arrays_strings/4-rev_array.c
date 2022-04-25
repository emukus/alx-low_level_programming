#include "main.h"

/**
 * reverse_array - function that reverses an array
 * @a: an array of integers
 * @n: number of elements of an array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
