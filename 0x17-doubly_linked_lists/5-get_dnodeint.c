#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: head
 * @index: index
 *
 * Return: nth node, else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tem;
	unsigned int i;

	tem = head;

	for (i = 0; tem != NULL && i < index; i++)
	{
		tem = tem->next;
	}
	return (tem);
}
