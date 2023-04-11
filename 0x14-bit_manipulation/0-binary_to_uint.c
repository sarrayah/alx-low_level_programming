#include "main.h"

/**
 *  binary_to_uint - takes binary string as input and return unsigned integer
 *  @b: string contsining the binary number
 *
 *  return: return the number converted
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decimal_num = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
	return (0);
		decimal_num = 2 * decimal_num + (b[a] - '0');
	}
	return (decimal_num);
}
