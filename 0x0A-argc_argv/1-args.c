#include "main.h"

/**
 * main - entry point of the program
 * @argc: returns the name of command or first command
 * @argv: the individual arguments
 *
 * Return: always zero
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
