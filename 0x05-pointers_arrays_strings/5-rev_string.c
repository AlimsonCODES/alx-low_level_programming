#include "main.h"

/**
 * rev_string - reverse a string.
 *
 * @s: the stri
 */

void rev_string(char *s)
{
	int len, a, b;
	char v1, v2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	a = len - 1;
	b = 0;

	while (a > b)
	{
		v1 = s[b];
		v2 = s[a];
		s[b] = v2;
		s[a] = v1;
		a--;
		b++;
	}
}
