#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha.c - function that checks for alphabetic character
 *
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		_putchar(c);
	}
	else
	{
		_putchar(c);
	}
	putchar('\n');
	return (0);
}
