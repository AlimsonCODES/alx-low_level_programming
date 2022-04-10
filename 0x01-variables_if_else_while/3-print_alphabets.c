#include <stdio.h>

/**
 * main - function begins
 *
 * Return: function ends
 */

int main (void)
{
	char ch;
	char mo;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (mo = 'A'; mo <= 'Z'; mo++)
		putchar(mo);
	putchar("\n");
	return (0);
}
