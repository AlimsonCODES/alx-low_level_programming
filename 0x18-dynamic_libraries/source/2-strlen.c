#include "main.h"

/**
 * _strlen - function title
 *
 * @s: char s
 * Return: 0
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
