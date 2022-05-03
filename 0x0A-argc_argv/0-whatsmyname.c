#include <stdio.h>

/**
 * main - function that prints its name followed by a new line
 * @argc: number of command line arguments
 * @argv: array that contains the command line argument
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);

	return (0);
}
