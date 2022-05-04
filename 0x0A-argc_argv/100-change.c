#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the minimum number of coints to make
 * change for an amount of money
 * @argc: number of command line arguments supplied to the function
 * @argv: array of strings passed as arguments to the program
 *
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(*(argv + 1));
	while (cents > 0)
	{
		if (cents % 25 < cents)
		{
			cents -= 25;
			coins++;
		}
		else if (cents % 10 < cents)
		{
			cents -= 10;
			coins++;
		}
		else if (cents % 5 < cents)
		{
			cents -= 5;
			coins++;
		}
		else if (cents % 2 < cents)
		{
			cents -= 2;
			coins++;
		}
		else if (cents % 1 < cents)
		{
			cents -= 1;
			coins++;
		}
	}
	printf("%d\n", coins);

	return (0);
}
