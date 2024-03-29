#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number od elements.
 * @size: size of bytes.
 *
 *  Return: pointer to the allocated memory.
 *  If nmemb or size is 0, then _calloc returns NULL
 *  If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
