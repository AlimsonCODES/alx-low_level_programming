#include "main.h"
#include <stdio.h>

/**
 * _isalpha - function that checks for alphabetic character
 *@c: contains value to be compared
 * Return: 0 || 1 (success)
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}

}
