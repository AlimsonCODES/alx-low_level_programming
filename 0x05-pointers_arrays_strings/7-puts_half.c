#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to utput half
 */

void puts_half(char *str)
{
	int length, n, i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	n = (length - 1) / 2;

	for (i = n + 1; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
