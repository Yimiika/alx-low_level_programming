#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @*: input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *)
{
	int i, count;

	char minus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mayus[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *[i] != '\0'; ++i)
	{
		for (count = 0; minus[count] != '\0' ; count++)
		{
			if *[i] == minus[count])
			{
				*[i] = mayus[count];
				break;
			}
		}
	}
	*[i] = '\0';
	return (*);
}
