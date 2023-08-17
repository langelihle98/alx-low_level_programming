#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 10x the numbers from 0 to 14, followed by new line
 */
void more_numbers(void)
{
int i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar('0' + (i / 10));
}
_putchar('0' + (i % 10));
}
_putchar('\n');
}
}

