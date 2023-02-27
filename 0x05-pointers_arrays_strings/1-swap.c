#include <stdio.h>

/**
 * swap_int - Function that swaps the value of two
 * integers
 * @a: The first swapped integer
 * @b: The second swapped integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
/*Function that swaps the value of two integer*/
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
