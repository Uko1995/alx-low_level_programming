#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: input
 * @index: index
 * Return: 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = ~(1ul << index);
	*n &= mask;
	return (1);
}
