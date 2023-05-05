#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: string input
 * @index: index
 * Return: 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1ul;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1ul << index;
	*n |= mask;
	return (1);
}
