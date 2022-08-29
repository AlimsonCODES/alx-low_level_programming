#include <stdio.h>
#include "main.h"

/**
 * _isupper -  function that checks for uppercase character.
 *@c: the letter to test
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
