#include "main.h"
#include <stdio.h>
/**
 * _isupper - Checks if a character is uppercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 *
 */

int _isupper(int c)
{
return ((c >= 65 && c <= 90) ? (1) : (0));
}
