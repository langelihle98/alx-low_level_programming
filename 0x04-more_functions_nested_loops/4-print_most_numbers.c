#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - Writes a character to the standard output.
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
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4
 */
void print_most_numbers(void)
{
char number;

for (number = '0'; number <= '9'; number++)
{
if (number != '2' && number != '4')
_putchar(number);
}
_putchar('\n');
}

/**
 * main - Entry point of the program.
 *
 * This function calls the print_most_numbers function to print numbers.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
print_most_numbers();
return (0);
}

