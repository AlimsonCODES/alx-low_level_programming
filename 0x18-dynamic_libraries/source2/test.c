#include <stdio.h>
#include "main.h"

int main()
{
	int c, d, s;
	int e, n;

	c = add(10, 20);
	d = sub(10, 20);
	e = div(10, 20);
	s = mod(10, 20);
	n = mul(10, 20);

	printf("c is = %d \n", c);
	printf("d is = %d \n", d);
	printf("e is = %d \n", e);
	printf("s is = %d \n", s);
	printf("n is = %d \n", n);
	return 1;
}
