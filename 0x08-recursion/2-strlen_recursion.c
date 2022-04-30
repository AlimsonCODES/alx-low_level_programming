#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s:paramsss
 * Return: something
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (n);
	}
	else
	{
		n++;
		return (n + _strlen_recursion(s + 1));
	}
}
