#include "main.h"

/**
 * print_numbers - prints 0 through to 9
 * @ch: holds values
 * Return: 
 */

void print_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		_putchar(ch + '0');
	}
	_putchar('\n');
}
