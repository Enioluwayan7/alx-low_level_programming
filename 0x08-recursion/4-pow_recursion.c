#include "main.h"
/**
 * _pow_recursion - function that returns the value
 * @x: base value
 * @y: Exponent value
 * Return: if y is lower than 0 return -1,
 * if y is equal to 1 return 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 1)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
