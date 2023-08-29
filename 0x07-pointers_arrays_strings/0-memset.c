#include"main.h"
#include<stdio.h>

/**
 * _memset - Entry point
 *
 * @s: pointer destinstion
 * @b: the constant byte
 * @n: bytes
 *
 * Returns: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; n > 1; i++)
s[i] = b;
return (s);
}
