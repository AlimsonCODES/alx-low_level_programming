#include "main.h"

/**
 * main - function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: always 0 (success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void);
{
	char ch = print_alphabet();

	for (ch = "a"; ch <= "z"; ch++)
		putchar(ch);

	putchar('\n');
}
