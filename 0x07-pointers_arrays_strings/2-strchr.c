#include"main.h"
#include<stdio.h>
/**
 * _strchr -  locates a character in a string.
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{

if (s[i] == c)
return (s + 1);
}
return (NULL);
}