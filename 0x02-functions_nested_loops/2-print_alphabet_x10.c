#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase
 *
 * Return: Always 0 (Successful/correct code)
 */

void print_alphabet_x10(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		char alphabet = 'a';
		
		while (alphabet < 'z')
		{
			_putchar(alphabet);
		}
		
		_putchar('\n');
	}
}


