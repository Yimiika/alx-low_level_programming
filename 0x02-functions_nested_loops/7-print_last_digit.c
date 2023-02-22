#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number whose last digit is to be printed
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n < 0)
        n = -n;

    last_digit = n % 10;

    putchar(last_digit + '0');

    return last_digit;
}
