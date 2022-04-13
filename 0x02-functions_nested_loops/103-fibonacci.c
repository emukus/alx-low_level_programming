#include <stdio.h>

/**
* main - Prints the sum of even-valued Fibonnacci numbers
* terms not exceeding 4,000,000
* Return: Always 0 (Successful code)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibum > 400000)
			break;
		if ((fibsum % 2) == 0)
			tot_sum += fibsum;
		fib1 = fib2;
		fib2 = fibsum:
	}
	printf("%0.f\n", tot_sum);

	return (0);
}
