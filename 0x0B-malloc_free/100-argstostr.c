#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: returns pointer to concatenated
 */

char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
{
return (NULL);
	int total_length = 0;
	int i, j, k;

	for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]);
}
	total_length += ac - 1;

	char *str;
	str = malloc((total_length + 1) * sizeof(char));
	if (str == NULL)
{
return NULL;
}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];

		if (i != ac - 1)
			str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
