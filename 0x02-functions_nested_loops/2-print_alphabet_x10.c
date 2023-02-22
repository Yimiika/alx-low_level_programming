#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int i;
for (i = 0; i < 10; i++)
{
while (letter <= 'z')
{
putchar(letter);
letter++;
}
letter = 'a';
putchar('\n');
}
}
