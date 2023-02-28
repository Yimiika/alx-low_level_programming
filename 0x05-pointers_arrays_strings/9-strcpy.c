#include <stdio.h>

/**
 * _strcpy - resets the value of the integer
 * @dest: destination of change
 * @src: source of change
 *
 * Return: the result
 */
char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return (temp);
}
