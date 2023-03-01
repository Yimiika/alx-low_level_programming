#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 *
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r:  The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result.
 *         0 if the result can't be stored in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0, j = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	len1--;
	len2--;

	while (len1 >= 0 || len2 >= 0)
	{
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1--] - '0';
		if (len2 >= 0)
			sum += n2[len2--] - '0';
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[i++] = sum + '0';
	}
	if (carry)
		r[i++] = carry + '0';

	r[i] = '\0';

	for (i--, j = 0; j < i; i--, j++)
	{
		sum = r[i];
		r[i] = r[j];
		r[j] = sum;
	}

	return (r);
}
