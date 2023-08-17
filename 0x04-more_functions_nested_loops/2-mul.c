#include "main.h"
#include <stdio.h>
/**
 * mul -  multiplies two integers.
 *
 * @a: the first integer
 *
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int mul(int a, int b)
{
int result = 0;
int sign = (a < 0) ^ (b < 0) ? -1 : 1;

a = (a < 0) ? -a : a;
b = (b < 0) ? -b : b;
while (b > 0)
{
if (b & 1)
{
result += a;
}
a <<= 1;
b >>= 1;
}
return (sign * result);
}

