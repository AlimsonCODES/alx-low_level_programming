#include "main.h"

 /**
 * _strcat - function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: ch
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int len2 = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (dest[len] != '\0')
	{
		*(dest + len) = src[len2];
		len++;
		len2++;
	}
	return (dest);
}
