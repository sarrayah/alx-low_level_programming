#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: The number to be searched for bits at the specified index.
 * @index: The index at which the bit is returned.
 * The index starts from 0.
 *
 * retun:  the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) != 0)
		return (1);

	return (0);
}

