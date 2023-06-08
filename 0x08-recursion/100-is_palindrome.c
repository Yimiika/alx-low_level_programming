#include "main.h"

int _strlen(char *s);
int palinfinder(char *s, int start, int end);
/**
 * is_palindrome- function that tests if it's a palindrome
 * @s: the input string
 * Return: 1 if the string is a palindrome
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);
	return (palinfinder(s, 0, len - 1));
}

/**
 * palinfinder- A function that finds if a string is a palindrome
 * @s: the input number
 * @i: first value
 * Return: the value after calculation
 */

int palinfinder(char *s, int start, int end)
{
	if (start >= end)
	{
	return (1);
	}
if (s[start]!= s[end])
{
return (0);
}
return (palinfinder(s, start + 1, end - 1));
}

/**
 * _strlen- finds the length of a string
 * @s: The string
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s)
	{
	len++;
	s++;
	}
	return len;
}
