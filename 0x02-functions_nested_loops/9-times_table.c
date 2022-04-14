#include "main.h"
#include <stdio.h>

/**
 * times_table - prints 9 times table
 *
 * Return: 0 (success)
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		b = a * 0;
		_putchar(b);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		b = a * 1;
		_putchar(b);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a<= 9; a++)
	{
		b = a * 2;
		_putchar(b);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		b = a * 3;
		_putchar(b);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		b = a * 4;
		_putchar(b);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		b = a * 5;
		_putchar(b);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		b = a * 6;
		_putchar(b);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		b = a * 7;
		_putchar(b);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		b = a * 8;
		_putchar(b);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		b = a * 9;
		_putchar(b);
		if (a !=9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
