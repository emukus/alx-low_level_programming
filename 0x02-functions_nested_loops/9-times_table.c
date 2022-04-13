#include "main.h"

/**
 * times_table - prints the 9 times table, staring with 0
 *
 * Return: Always 0
 */

void times_table(void)
{
	int a = 0;
	int b;
	int multiple;

	while (a <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			multiple = a * b;
			if (b == 0)
			{
				_putchar('0' + multiple);
			}
			else if (multiple < 10)
			{
				_putchar(' ');
				_putchar('0' + multiple);
			}
			else
			{
				_putchar('0' + multiple / 10);
				_putchar('0' + multiple % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
