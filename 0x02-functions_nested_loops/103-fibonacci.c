#include <stdio.h>

/**
* main - Prints the sum of even-valued Fibonnacci numbers
* terms not exceeding 4,000,000
* Return: Always 0 (Successful code)
*/

int main(void)
{
	int fib1 = 0, fib2 = 1, fibsum = 0;
	int tot_sum;

	while (fibsum < 4000000)
	{
		fibsum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibsum;
		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

	}
	printf("%i\n", tot_sum);

	return (0);
}
