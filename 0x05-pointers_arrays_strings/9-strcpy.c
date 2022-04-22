#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: destination
 * @src:source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int length, i;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
