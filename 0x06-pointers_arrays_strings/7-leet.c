#include <stdio.h>

/**
 * leet - Write a function that encodes a string into 1337
 *
 * @changed: This is the input string
 *
 * Return: String converted to 1337
 */

char *leet(char *changed)
{
	int i, j;
	char minus[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char mayus[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; changed[i] != '\0'; ++in)
	{
		for (j = 0; j < 5; j++)
		{
			if (changed[i] == minus[j] || changed[i] == mayus[j])
			{
				changed[i] = numbers[j];
			}
		}
	}
	return (changed);
}
