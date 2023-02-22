#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The input number
 *
 * Return: void
 */

void print_times_table(int n)
{
int i, j, result;
if (n < 0 || n > 15)
return;
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
int result = i * j;
if (j == 0)
printf("%d", result);
else if (result < 10)
printf(",   %d", result);
else if (result < 100)
printf(",  %d", result);
else
printf(", %d", result);
}
printf("\n");
}
}
