#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *opcode;

	if (argc != 2)
		printf("Error\n"), exit(1);

	bytes = atoi(argv[1]);

	if (bytes < 0)
		printf("Error\n"), exit(2);

	opcode = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%.2hhx\n", opcode[i]);
			break;
		}
		printf("%.2hhx ", opcode[i]); /* can also be %02hhx */
	}
	return (0);
}
