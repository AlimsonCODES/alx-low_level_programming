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
	for (n = len - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
