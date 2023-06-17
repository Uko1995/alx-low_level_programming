#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head node
 *
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *list = h;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		count++;
		list = list->next;
	}
	return (count);
}
