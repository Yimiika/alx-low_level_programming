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
    for (int count = 0; count < MAXSTRING; count++)
    {
        if (message[count] == '\0')
        {
            putchar('\n');
            break;
        }
        else
            putchar(message[count]);
    }
    return 0;
}
