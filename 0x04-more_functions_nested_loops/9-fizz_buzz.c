#include <stdio.h>
#include "main.h"

/**
 * main - prints fizz buzz
 * @n: function
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3 = 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 = 0)
		{
			printf(" Buzz");
		}
		else if (n % 3 = 0 && n % 5 = 0)
		{
			printf(" FizzBuzz");
		}
		else if (n == 1)
		{
			printf("%d", n);
		}
		else
		{
			printf(" %d", n);
		}
	}
	_putchar('\n');
	return (0);
}
