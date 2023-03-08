#include "main.h"
/**
 * factorial - returns factorial of given number
 * @n: Entry point
 * Return: if n > 0 - the factorial of n.
 * if n < 0 - 1 indicate error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}
