#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *
 * @str: to be reversed
 */

void puts2(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	i = length - 1;
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
