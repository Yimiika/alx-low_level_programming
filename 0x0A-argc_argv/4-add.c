#include "main.h"

/**
 *main - entry point of the program
 * @argc: returns the name of command or first command
 * @argv: the individual arguments
 * Return: returns zero
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);	
	}

	for (i = 1; i < argc; i++)
	{
		int j;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
		}
		printf("%d\n", add);
		return (0);
}
