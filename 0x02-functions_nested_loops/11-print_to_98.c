#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: contains the starting integer value
 * Return: Always 0 (Successful/correct code)
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		printf("%d, ", n++);
		printf("%d\n", n);
	}
}