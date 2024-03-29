#include "main.h"

/**
 * clear_bit - sets value of bit to
 * @n: pointer of unsigned long int.
 * @index: index
 * Return: integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	if (*n & i)
		*n ^= i;

	return (1);
}
