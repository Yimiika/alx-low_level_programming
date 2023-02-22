#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 1;
	int second = 2;
	int next_term = 0;
	long sum = 2;

	printf("%d, %d", first, second);

	for (int i = 3; i <= 50; i++)
	{
		next_term = first + second;
		first = second;
		second = next_term;
		if (next_term % 2 == 0)
			sum += next_term;
		printf(", %d", next_term);
	}
	printf("\n%ld\n", sum);
	return (0);
}
