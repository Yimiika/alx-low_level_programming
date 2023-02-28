#include <stdio.h>

/**
 * print_rev - function prints a reverse string
 * @s:input string
 *
 */
void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
for (i = i - 1; s[i] != '\0'; i--)
{
putchar(s[i]);
}
putchar('\n');
}
