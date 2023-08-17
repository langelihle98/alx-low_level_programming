#include "main.h"
#include <ctype.h>

/**
 * print_numbers - prints the numbers 0 through 9
 *
 * Return: 1 Success
 */

void print_numbers(void)
{
        char i;

        i = 0;
        while (i < 10)
        {
                _putchar(i + '0');
                i++;
        }
        _putchar('\n');
}
