#include "main.h"

/**
 * wildcmp- A function that compares two strings
 * @s1: first input string
 * @s2: second input string
 * Return: 1 if considered identical
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
	return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		if (*s2 == '*' && wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
	{
	return (1);
	}
	if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1);
	}
	}
	return (0);
}
