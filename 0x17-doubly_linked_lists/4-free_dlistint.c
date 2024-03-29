#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = head->next;
		free(tem);
	}
}
