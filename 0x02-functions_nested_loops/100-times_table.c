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
void print_times_table(int n)
{
    int i, j, result;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;
            if (j == 0)
                printf("%d", result);
            else
                printf(", %d", result < 10 ? 32 : result < 100 ? 0 : result / 100);
            printf("%d", result < 10 ? result : result < 100 ? result % 10 : (result / 10) % 10);
        }
        printf("\n");
    }
}
