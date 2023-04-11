#include "main.h"

/**
 * print_binary - a function that Prints a binary representation of a number.
 *
 * @n: The number to be printed.
 * array, malloc, %, or / operators cannot be used
 */

void print_binary(unsigned long int n)
{
	if (n >= 2)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
