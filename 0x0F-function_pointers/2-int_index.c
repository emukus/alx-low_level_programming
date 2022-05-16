#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array to search in
 * @size: size of the array
 * @cmp: pointer to used function to compare values
 *
 * Return: void
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	if (array == NULL || cmp == NULL)
		return;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
