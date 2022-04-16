#include "main.h"
#include <stdio>

/**
 * _isdigit - checks for a digit
 * @c: checks for digit
 * Return: 0 || 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
