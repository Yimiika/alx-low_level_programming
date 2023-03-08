/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: pointer to the string
 * @start: starting index of the string
 * @end: ending index of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int len = _strlen(s);
return (check_palindrome(s, 0, len - 1));
}
