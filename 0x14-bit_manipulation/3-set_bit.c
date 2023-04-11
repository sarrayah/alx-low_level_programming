#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit at a given index
 *
 * @n: pointer to the bit to be set
 * @index:  the index, starting from 0 of the bit to set
 *
 * Return: Returns 1 if successful or -1, if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}
