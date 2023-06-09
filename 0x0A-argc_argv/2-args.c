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
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
