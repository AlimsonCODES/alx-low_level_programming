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
	char d;

	if ((d = 'a'; d <= 'z'; d++) || (d = 'A'; d <= 'Z'; d++))
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}
	putchar('\n');
	return (0);
}
