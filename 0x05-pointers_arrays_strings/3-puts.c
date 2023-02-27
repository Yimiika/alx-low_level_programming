#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: integer of function
 * 
 *
 * Return: The result of count
 */
void _puts(char *str)
{
for (*str = 'Z'; *str >= 'A'; *str--) 
{
putchar(*str);
}
return (*str);
}
