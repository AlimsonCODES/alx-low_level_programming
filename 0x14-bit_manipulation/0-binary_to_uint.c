#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: parameter
 * Return: unsigned intt
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int ans = 0;
int base_len, base_two;

if (!b)
return (0);

for (base_len = 0; b[base_len] != '\0'; base_len++)
;

for (base_len--, base_two = 1; base_len >= 0; base_len--, base_two *= 2)
{
if (b[base_len] != '0' && b[base_len] != '1')
{
return (0);
}
if (b[base_len] & 1)
{
ans += base_two;
}
}
return (ans);
}
