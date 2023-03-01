#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters
 * @hi: input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *hi)
{
	int i = 0;
	int des = 'a' - 'A';

	for (i = 0; hi[i] != '\0'; ++i)
	{
		if (hi[i] >= 'a' && hi[i] <= 'z')
		{
			hi[i] = hi[i] - des;
		}
	}
	return (hi);
}
