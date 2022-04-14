#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *@n: function
 *
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{
	if (n < 0)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d, ", n);
			_putchar('\n');
		}
	}
	 else if (n == 98)
	 {
		 printf("%d. ", n);
		 _putchar('\n');
	 }
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d, ", n);
			_putchar('\n');
		}
	}
}
