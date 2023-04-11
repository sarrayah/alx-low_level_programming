#include "main.h"

/**
 *  binary_to_uint - takes binary string as input and return unsigned integer
 *  @b: string conta ining the binary number
 *
 *  return: return the number converted or 0 if
 *  there is one or more chars in the string b that is not 0 or 1
 *  b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int numeral = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		numeral <<= 1;
		numeral += (*b - '0');
	}

	return (numeral);
}
