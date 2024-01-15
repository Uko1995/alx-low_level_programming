#include "search_algos.h"

/**
 * custom_sqrt - function that define sure of int
 * @x: result
 * Return: result value
 */
int custom_sqrt(int x)
{
	int result = 0;

	while (result * result < x)
	{
		result++;
	}
	return (result);
}

/**
 * jump_search - searches for a value in an array
 * @array: pointer to int array
 * @size: size of array
 * @value: value
 * Return: value, or -1 if NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, m, k, prev;

	if (!array || size == 0)
	return (-1);

	m = custom_sqrt(size);
	k = 0;
	prev = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		k++;
		prev = idx;
		idx = k * m;
	} while (idx < (int)size && array[idx] < value);
	printf("Value found between indexes [%d] and [%d]\n", prev, idx);

	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
