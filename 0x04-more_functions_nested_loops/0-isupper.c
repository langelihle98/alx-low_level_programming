#include "main.h"
#include <stdio.h>
/**
 * main -  checks for uppercase character.
 *
 *@param c The character to be checked.
 *Return: 0 if c is uppercase otherwise return 1
 */

int _isupper(int c)
{
return ((c >= 65 && c <= 90) ? (1) : (0));
}
