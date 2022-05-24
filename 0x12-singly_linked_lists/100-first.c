#include <stdio.h>

/**
 * tortoise - function that prints a string before
 * the main function is executed
 *
 */

void __attribute__((constructor)) tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
