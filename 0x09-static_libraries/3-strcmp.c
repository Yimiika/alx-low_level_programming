#include <stdio.h>

/**
 * _strcmp - the function
 * @s1: The entry
 * @s2: another entry
 * Return: The result
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && *s1 == *s2; s1++, s2++)
	{
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
