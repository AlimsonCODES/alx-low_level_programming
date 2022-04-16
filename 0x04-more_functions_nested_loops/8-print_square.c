#include "main.h"

/**
 * print_square -  prints a square,
 * @n: size of the square
 */

void print_square(int n)
{
if (n > 0)
{
int i;
int j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}

}
else
{
_putchar('\n');
}
}
