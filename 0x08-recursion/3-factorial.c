#include"main.h"
#include<stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: number to return the factorial from
 * Return: nothing
 */
int factorial(int n)
{
if (n > 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
