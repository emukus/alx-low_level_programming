#include <stdio.h>

/**
 * main - function that multiplies two numbers
 * @argc: number of command line arguments passed to the function for int
 * @argv: array that givehe value passed to the function for char
 *
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
