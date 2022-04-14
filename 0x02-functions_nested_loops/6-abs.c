#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: checks
 * Return: well, well see
 */

int _abs(int n)
{

	if (n < 0)
	{
	return (n - n - n);
	}
	else if (n > 0)
	{
	return (n);
	}
	else
	{
	return (0);
	}
}
