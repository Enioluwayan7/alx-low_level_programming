#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  function that prints all the elements of a listint_t list
 * @h: Pointer to the head of the list in listint_t
 *
 * Return: Number of nodes in listint_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
