#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that adds positive numbers
 * @argc: number of command line arguments
 * @argv: array that contains the command line argument
 *
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int i;
	int count = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
