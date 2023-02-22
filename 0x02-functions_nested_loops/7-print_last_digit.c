#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get the last digit of
 *
 * Return: the value of the last digit
 */
int return_last_digit(int n)
{
    int last_digit = n % 10;

    if (last_digit < 0)
        last_digit *= -1;

    putchar(last_digit + '0');

    return (last_digit);
}
