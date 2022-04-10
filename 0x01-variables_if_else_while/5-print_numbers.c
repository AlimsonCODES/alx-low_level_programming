#include <stdio.h>

/**
 * main - print all single digit base 10 numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		printf("%d", c);

	putchar('\n');
	return (0);
}
