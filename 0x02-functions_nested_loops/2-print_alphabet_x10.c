#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase
 *
 * Return: Always 0 (Successful/correct code)
 */

void print_alphabet_x10(void)
{
	int i;
	char alphabet = 'a';

	for (i = 0; i < 10; i++)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}


