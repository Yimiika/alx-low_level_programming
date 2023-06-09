#include "main.h"

/**
 *main - the function entry
 *
 * @argc: returns the name of command or first command
 * Return: always zero
 */

int main(int argc, char* argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
