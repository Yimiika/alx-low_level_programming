#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long int prev = 1, curr = 2, sum = 0;
printf("%lu, %lu", prev, curr);
for (i = 3; i <= 50; i++)
{
unsigned long int next = prev + curr;
if (next % 2 == 0)
sum += next;
printf(", %lu", next);
prev = curr;
curr = next;
}
printf("\nSum: %lu\n", sum);
return (0);
}
