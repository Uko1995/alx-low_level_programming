#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
		putchar('0' + d);
	putchar('\n');
	return (0);
}
