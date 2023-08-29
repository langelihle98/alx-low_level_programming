#include"main.h"
#include<stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer destinstion
 * @b: the constant byte
 * @n: bytes
 *
 * Returns: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;

for (i = 0; n > 1; i++)
s[i] = b;
return (s);
}
