#include <stdio.h>

/**
 * puts2 - function that prints every other character
 * @s: This pointer pointing to a char or string
 *
 *
 */
void puts2(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (i % 2 == 0)
{
putchar(s[i]);
}
}
putchar('\n');
}
