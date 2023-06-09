#include "main.h"

/**
 *main - entry point of the program
 * @argc: returns the name of command or first command
 * @argv: the individual arguments
 *
 * Return: returns zero
 */
int main(int argc, char* argv[])
{
int num1, num2, mul;

if (argc < 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 =atoi(argv[2]);
mul = num1 * num2;
printf("%d\n", mul);
return (0);
}
