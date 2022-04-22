#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: function
 * @n: function 2
 */

void print_array(int *a, int n)
{
	int length, i;

	for (length = 0; i < n; i++)
	{
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
