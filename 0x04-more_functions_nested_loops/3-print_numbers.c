#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * @c: The character to be written.
 *
 * Return: On success, 1. On error, -1 is returned,
 *         and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
char number;

for (number = '0'; number <= '9'; number++)
_putchar(number);

_putchar('\n');
}

/**
 
 * This function serves as the entry point for the program. It
 * calls the print_numbers function to print the numbers from 0 to 9.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
print_numbers();
return (0);
}

