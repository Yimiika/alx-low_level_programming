#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array
 * @a: input array
 * @j: positions of array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int last;

	last = j - 1;
	for (i = 0; i < j / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[last];
		a[i] = end;
		a[last] = start;
		last--;
	}
}
