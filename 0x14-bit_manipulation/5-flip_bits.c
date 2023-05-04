#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count_num = 0;
	unsigned long int numofbit;
	unsigned long int number = n ^ m;

	for (i = 23; i >= 0; i--)
	{
		numofbit = number >> i;
		if (numofbit & 1)
			count_num++;
	}

	return (count_num);
}

