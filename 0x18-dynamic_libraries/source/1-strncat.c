#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: func 1
 * @src: func 3
 * @n: func 34
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int len2 = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (len2 != n)
	{
		if (src[len2] == '\0')
		{

			break;
		}
		*(dest + len) = src[len2];
		len++;
		len2++;
	}
	return (dest);
}
