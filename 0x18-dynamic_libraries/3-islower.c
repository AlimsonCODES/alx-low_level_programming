#include "main.h"
#include <stdio.h>

/**
 * _islower - function that checks for lowercase character.
 *@c: the parameter to be checked
 *
 *Return: always 0 (success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
