#include <stdio.h>
/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 *
 * Return: +1 if n is greater than 0, 0 if n is 0, and -1 if n is less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
putchar('1');
return (+1);
}
else if (n == 0)
{
putchar('0');
putchar('0');
return (00);
}
else
{
putchar('-');
putchar('1');
return (-1);
}
}
