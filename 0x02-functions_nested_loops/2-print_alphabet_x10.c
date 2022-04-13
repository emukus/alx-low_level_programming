#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase
 *
 * Return: Always 0 (Successful/correct code)
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet = 'a';

	while (count < 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		count++;
	}
}


