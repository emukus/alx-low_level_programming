#include "main.h"
#include <stdlib.h>

/**
 * _ch_free_grid - function that frees a 2d array
 * @grid: 2d array of char
 * @height: height of array
 *
 * Return: nothing
 */

void _ch_free_grid(char **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}

/**
 * strtow - function that that splits a string into words
 * @str: the string to split
 *
 * Return: NULL if str == NULL or ""
 */

char **strtow(char *str)
{
	char **ptr;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	ptr = malloc((height + 1) * sizeof(char *));
	if (ptr == NULL || height == 0)
	{
		free(ptr);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				ptr[i] = malloc((c - a1 + 2) * sizeof(char));
				if (ptr[i] == NULL)
				{
					_ch_free_grid(ptr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			ptr[i][j] = str[a1];
		ptr[i][j] = '\0';
	}
	ptr[i] = NULL;
	return (ptr);
}
