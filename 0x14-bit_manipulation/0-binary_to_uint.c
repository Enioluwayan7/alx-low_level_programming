#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing 0 and 1
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int binary_number = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		binary_number = 2 * binary_number + (b[j] - '0');
	}

	return (binary_number);
}

