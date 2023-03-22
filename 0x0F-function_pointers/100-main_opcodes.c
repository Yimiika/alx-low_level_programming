#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of its own main function
 * @num_bytes: the number of bytes to print
 */
void print_opcodes(int num_bytes);

/**
 * main - the main function of the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 * Return: 0 if successful, 1 if error with number of arguments
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}

void print_opcodes(int num_bytes)
{
	char *main_ptr = (char *)&main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(main_ptr + i) & 0xff);
	}

	printf("\n");
}
