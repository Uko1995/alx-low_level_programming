#include "lists.h"

/**
 * sum_dlistint - returns the sum of all
 * the data (n) of a dlistint_t linked list
 * @head: head
 *
 * Return: sum of all the data (n), of 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tem;
	int sum = 0;

	tem = head;

	while (tem != NULL)
	{
		sum += tem->n;
		tem = tem->next;
	}
	return (sum);
}
