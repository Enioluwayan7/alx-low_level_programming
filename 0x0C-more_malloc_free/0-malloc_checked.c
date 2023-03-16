#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Function that allocate memory using malloc
 * @b: Number of byte to allocate
 * Return:  a pointer to the allocated memory
 * if malloc fails,  the malloc_checked function should
 * terminate with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
