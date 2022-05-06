#include "main.h"

/**
 * create_array - function that creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the array of chars
 * @c: char to intialize
 *
 * Return: NULL if size = 0, pointer to array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	/* check if malloc was success */

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
