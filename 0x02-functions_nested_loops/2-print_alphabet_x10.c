#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet x10
 *
 * Description: using _putchar to print
 *
 */
void print_alphabet_10x(void)
{
	char i;
	int j;

	for (j = 0; j < 10; i++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
