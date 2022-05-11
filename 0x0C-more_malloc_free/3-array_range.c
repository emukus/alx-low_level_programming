#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: the lowest value in the array
 * @max: the highest value in the array
 *
 * Return: NULL if min > max, or if malloc fails.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, p;

	if (min > max)
		return (NULL);

	p = max - min + 1;
	arr = malloc(sizeof(int) * p);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < p; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
