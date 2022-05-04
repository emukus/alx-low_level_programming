#include "main.h"


/**
 * _strcpy - function that copies the string from src to dest
 * @dest: destination to copy string to
 * @src: source to copy string from
 * Return: (dest) pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';
	return (dest);
}
