#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint -  function that adds a new node at the beginning of a listint_t list.
 * @head: pointer to the address of the head of the listint_t list.
 * @n: integer of new node to be contained
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
