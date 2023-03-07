/**
 * wildcmp - compares two strings and returns 1 if they are identical, otherwise 0
 * @s1: the first string
 * @s2: the second string, which can contain the special character *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the first character of s2 is *, recursively match the rest */
	if (*s2 == '*')
	{
		/* Match the rest of s2 with s1, or s1 without the first character */
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	/* If the first characters of s1 and s2 match, recursively match the rest */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* Otherwise, the strings are not identical */
	return (0);
}
