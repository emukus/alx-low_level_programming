#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array that contains the command line argument
 *
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", (argc - 1));

	return (0);
}
