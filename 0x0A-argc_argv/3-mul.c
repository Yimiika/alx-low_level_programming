#include "main.h"

/**
 *main - the function
 *
 * @argc: returns the name of command or first command
 * @argv: the individual arguments
 * Return: returns zero
 */
int main(int argc, char* argv[])
{
	int i, mul = 0;
	for (argc < 2)
	{
		printf("Error\n");	
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	return (0);
}
