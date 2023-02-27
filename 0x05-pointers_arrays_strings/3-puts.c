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
int count;
int MAXSTRING;

    for ( count = 0; count < MAXSTRING; count++)
    {
        if (*str[count] == '\0')
        {
            putchar('\n');
            break;
        }
        else
            putchar(*str[count]);
    }
    return 0;
}
