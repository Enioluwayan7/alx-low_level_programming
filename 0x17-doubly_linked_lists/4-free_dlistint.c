#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *recent = head;
	dlistint_t *next;

	while (recent != NULL)
	{
		next = recent->next;
		free(recent);
		
		recent = next;
	}
}
