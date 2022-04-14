#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit
 * @n: number
 * Return: well see
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (-1 * (n % 10));
		_putchar(last + '0');
	return (last);
	}
	else
	{
		last = n % 10;
		_putchar(last + '0');
	return (last);
	}
}
