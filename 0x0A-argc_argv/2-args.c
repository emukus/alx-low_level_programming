#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array that contains the command line argument
 *
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
