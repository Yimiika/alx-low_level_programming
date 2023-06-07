#include <stdio.h>
#include <stddef.h>

/**
 * _strchr - Function that prints a string followed by a new line
 * @s: input string
 * Return: Return the string
 */
void _puts_recursion(char *s)
{
	if (*s == '/0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
#include <stdio.h>
#include <main.h>

/**
 * _strchr - Function that prints a string followed by a new line
 * @s: input string
 * Return: Return the string
 */
void _puts_recursion(char *s)
{
	if (*s == '/0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
#include "main.h"

/**
 * _strchr - Function that prints a string followed by a new line
 * @s: input string
 * Return: Return the string
 */
void _puts_recursion(char *s)
{
	if (*s == '/0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
