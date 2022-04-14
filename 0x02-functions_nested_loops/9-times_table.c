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

	for (a = 0; a <= 9; a++)
	{
		(a * 0);
		_putchar(a);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		(a * 1);
		_putchar(a);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a<= 9; a++)
	{
		(a * 2);
		_putchar(a);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		(a * 3);
		_putchar(a);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		(a * 4);
		_putchar(a);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		(a * 5);
		_putchar(a);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		(a * 6);
		_putchar(a);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		(a * 7);
		_putchar(a);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		(a * 8);
		_putchar(a);
		if (a != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (a = 0; a <= 9; a++)
	{
		(a * 9);
		_putchar(a);
		if (a !=9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
