#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit
 *
 * @c: value to be checked
 *
 * Return: 1 if c is a digit, otherwise return 0
 */

int _isdigit(int c)
{
return ((c >= '0' && c <= '9') ? 1 : 0);
}
