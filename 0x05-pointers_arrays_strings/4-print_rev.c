#include "main.h"

/**
 * print_rev - reverses string to stdout
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int len;
	int n;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
