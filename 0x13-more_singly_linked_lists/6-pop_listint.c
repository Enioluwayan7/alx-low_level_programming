#include "lists.h"
#include <stdio.h>

/**
 * pop_listint -  function that deletes the head node of a listint_t
 * linked list.
 * @head: pointer of the first node of a listint_t.
 * return: 0(if linked list is empty)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return 0;

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
